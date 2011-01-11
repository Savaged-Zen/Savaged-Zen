/* drivers/misc/bma150_spi.c - bma150 G-sensor driver
 *
 * Copyright (C) 2009 HTC Corporation.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/i2c.h>
#include <linux/slab.h>
#include <linux/miscdevice.h>
#include <asm/uaccess.h>
#include <linux/delay.h>
#include <linux/input.h>
#include <linux/bma150.h>
#include <asm/gpio.h>
#include <linux/earlysuspend.h>
#include <linux/platform_device.h>
#include <mach/atmega_microp.h>

#define I2C_READ_RETRY_TIMES                    10
#define I2C_WRITE_RETRY_TIMES                   10
#define MICROP_I2C_WRITE_BLOCK_SIZE             80

static struct i2c_client *private_microp_client;
static struct bma150_platform_data *this_pdata;

static struct mutex gsensor_RW_mutex;
static struct mutex gsensor_set_mode_mutex;

static char *hex2string(uint8_t *data, int len)
{
	static char buf[101];
	int i;

	i = (sizeof(buf) - 1) / 4;
	if (len > i)
		len = i;

	for (i = 0; i < len; i++)
		sprintf(buf + i * 4, "[%02X]", data[i]);

	return buf;
}

static int i2c_read_block(struct i2c_client *client, uint8_t addr,
	uint8_t *data, int length)
{
	int retry;
	int ret;
	struct i2c_msg msgs[] = {
	{
		.addr = client->addr,
		.flags = 0,
		.len = 1,
		.buf = &addr,
	},
	{
		.addr = client->addr,
		.flags = I2C_M_RD,
		.len = length,
		.buf = data,
	}
	};

	mdelay(1);
	for (retry = 0; retry <= I2C_READ_RETRY_TIMES; retry++) {
		ret = i2c_transfer(client->adapter, msgs, 2);
		if (ret == 2) {
			dev_dbg(&client->dev, "R [%02X] = %s\n", addr,
					hex2string(data, length));
			return 0;
		}
		msleep(10);
	}

	dev_err(&client->dev, "i2c_read_block retry over %d\n",
			I2C_READ_RETRY_TIMES);
	return -EIO;
}

static int i2c_write_block(struct i2c_client *client, uint8_t addr,
	uint8_t *data, int length)
{
	int retry;
	uint8_t buf[MICROP_I2C_WRITE_BLOCK_SIZE];
	int ret;

	struct i2c_msg msg[] = {
		{
			.addr = client->addr,
			.flags = 0,
			.len = length + 1,
			.buf = buf,
		}
	};

	dev_dbg(&client->dev, "W [%02X] = %s\n", addr,
			hex2string(data, length));

	if (length + 1 > MICROP_I2C_WRITE_BLOCK_SIZE) {
		dev_err(&client->dev, "i2c_write_block length too long\n");
		return -E2BIG;
	}

	buf[0] = addr;
	memcpy((void *)&buf[1], (void *)data, length);

	mdelay(1);
	for (retry = 0; retry <= I2C_WRITE_RETRY_TIMES; retry++) {
		ret = i2c_transfer(client->adapter, msg, 1);
		if (ret == 1)
			return 0;
		msleep(10);
	}
	dev_err(&client->dev, "i2c_write_block retry over %d\n",
			I2C_WRITE_RETRY_TIMES);
	return -EIO;
}

static int spi_microp_enable(uint8_t on)
{
	struct i2c_client *client;
	int ret;

	client = private_microp_client;
	ret = i2c_write_block(client, MICROP_I2C_WCMD_SPI_EN, &on, 1);
	if (ret < 0) {
		dev_err(&client->dev,"%s: i2c_write_block fail\n", __func__);
		return ret;
	}
	msleep(10);
	return ret;
}

static int spi_gsensor_read_reg(uint8_t reg, uint8_t *data)
{
	struct i2c_client *client;
	int ret;
	uint8_t tmp[2];

	client = private_microp_client;
	ret = i2c_write_block(client, MICROP_I2C_WCMD_GSENSOR_REG_DATA_REQ,
			      &reg, 1);
	if (ret < 0) {
		dev_err(&client->dev,"%s: i2c_write_block fail\n", __func__);
		return ret;
	}
	msleep(10);

	ret = i2c_read_block(client, MICROP_I2C_RCMD_GSENSOR_REG_DATA, tmp, 2);
	if (ret < 0) {
		dev_err(&client->dev,"%s: i2c_read_block fail\n", __func__);
		return ret;
	}
	*data = tmp[1];
	return ret;
}

static int spi_gsensor_write_reg(uint8_t reg, uint8_t data)
{
	struct i2c_client *client;
	int ret;
	uint8_t tmp[2];

	client = private_microp_client;

	tmp[0] = reg;
	tmp[1] = data;
	ret = i2c_write_block(client, MICROP_I2C_WCMD_GSENSOR_REG, tmp, 2);
	if (ret < 0) {
		dev_err(&client->dev,"%s: i2c_write_block fail\n", __func__);
		return ret;
	}

	return ret;
}

static int spi_gsensor_read(uint8_t *data)
{
	int ret;
	uint8_t reg = data[0];

	ret = spi_gsensor_read_reg(reg, &data[1]);
	pr_debug("%s reg = %x data = %x\n", __func__, reg, data[1]);
	return ret;
}

static int spi_gsensor_write(uint8_t *data)
{
	int ret;
	uint8_t reg = data[0];

	pr_debug("%s reg = %x data = %x\n", __func__, reg, data[1]);
	ret = spi_gsensor_write_reg(reg, data[1]);
	return ret;
}

static int spi_gsensor_init_hw(void)
{
	uint8_t reg;
	int ret;

	pr_debug("%s\n", __func__);

	spi_microp_enable(1);

	ret = spi_gsensor_read_reg(RANGE_BWIDTH_REG, &reg);
	if (ret < 0 )
		return -EIO;
	reg &= 0xe0;
	ret = spi_gsensor_write_reg(RANGE_BWIDTH_REG, reg);
	if (ret < 0 )
		return -EIO;

	ret = spi_gsensor_read_reg(SMB150_CONF2_REG, &reg);
	if (ret < 0 )
		return -EIO;
	reg |= (1 << 3);
	ret = spi_gsensor_write_reg(SMB150_CONF2_REG, reg);

	return ret;
}

static int spi_gsensor_read_acceleration(short *buf)
{
	struct i2c_client *client;
	int ret;
	uint8_t tmp[6];
	struct microp_i2c_client_data *cdata;

	client = private_microp_client;

	cdata = i2c_get_clientdata(client);

	tmp[0] = 1;
	ret = i2c_write_block(client, MICROP_I2C_WCMD_GSENSOR_DATA_REQ,
			      tmp, 1);
	if (ret < 0) {
		dev_err(&client->dev,"%s: i2c_write_block fail\n", __func__);
		return ret;
	}

	msleep(10);

	if (cdata->version <= 0x615) {
		/*
		 * Note the data is a 10bit signed value from the chip.
		*/
		ret = i2c_read_block(client, MICROP_I2C_RCMD_GSENSOR_X_DATA,
				     tmp, 2);
		if (ret < 0) {
			dev_err(&client->dev, "%s: i2c_read_block fail\n",
				__func__);
			return ret;
		}
		buf[0] = (short)(tmp[0] << 8 | tmp[1]);
		buf[0] >>= 6;

		ret = i2c_read_block(client, MICROP_I2C_RCMD_GSENSOR_Y_DATA,
				     tmp, 2);
		if (ret < 0) {
			dev_err(&client->dev, "%s: i2c_read_block fail\n",
				__func__);
			return ret;
		}
		buf[1] = (short)(tmp[0] << 8 | tmp[1]);
		buf[1] >>= 6;

		ret = i2c_read_block(client, MICROP_I2C_RCMD_GSENSOR_Z_DATA,
				     tmp, 2);
		if (ret < 0) {
			dev_err(&client->dev, "%s: i2c_read_block fail\n",
				__func__);
			return ret;
		}
		buf[2] = (short)(tmp[0] << 8 | tmp[1]);
		buf[2] >>= 6;
	} else {
		ret = i2c_read_block(client, MICROP_I2C_RCMD_GSENSOR_DATA,
				     tmp, 6);
		if (ret < 0) {
			dev_err(&client->dev, "%s: i2c_read_block fail\n",
				__func__);
			return ret;
		}
		buf[0] = (short)(tmp[0] << 8 | tmp[1]);
		buf[0] >>= 6;
		buf[1] = (short)(tmp[2] << 8 | tmp[3]);
		buf[1] >>= 6;
		buf[2] = (short)(tmp[4] << 8 | tmp[5]);
		buf[2] >>= 6;
	}

	return 1;
}

static int spi_bma150_set_mode(char mode)
{
	uint8_t reg;
	int ret;

	pr_debug("%s mode = %d\n", __func__, mode);
	if (mode == BMA_MODE_NORMAL)
		spi_microp_enable(1);


	ret = spi_gsensor_read_reg(SMB150_CTRL_REG, &reg);
	if (ret < 0 )
		return -EIO;
	reg = (reg & 0xfe) | mode;
	ret = spi_gsensor_write_reg(SMB150_CTRL_REG, reg);

	if (mode == BMA_MODE_SLEEP)
		spi_microp_enable(0);

	return ret;
}
static DEFINE_MUTEX(spi_bma150_lock);

static int spi_bma150_open(struct inode *inode, struct file *file)
{
	pr_debug("%s\n", __func__);
	return nonseekable_open(inode, file);
}

static int spi_bma150_release(struct inode *inode, struct file *file)
{
	return 0;
}

static long spi_bma150_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
	void __user *argp = (void __user *)arg;
	char rwbuf[8];
	int ret = -1;
	short buf[8], temp;

	switch (cmd) {
	case BMA_IOCTL_READ:
	case BMA_IOCTL_WRITE:
	case BMA_IOCTL_SET_MODE:
		if (copy_from_user(&rwbuf, argp, sizeof(rwbuf)))
			return -EFAULT;
		break;
	case BMA_IOCTL_READ_ACCELERATION:
		if (copy_from_user(&buf, argp, sizeof(buf)))
			return -EFAULT;
		break;
	default:
		break;
	}

	mutex_lock(&spi_bma150_lock);
	switch (cmd) {
	case BMA_IOCTL_INIT:
		ret = spi_gsensor_init_hw();
		if (ret < 0)
			goto err;
		break;

	case BMA_IOCTL_READ:
		if (rwbuf[0] < 1) {
			ret = -EINVAL;
			goto err;
		}
		ret = spi_gsensor_read(rwbuf);
		if (ret < 0)
			goto err;
		break;
	case BMA_IOCTL_WRITE:
		if (rwbuf[0] < 2) {
			ret = -EINVAL;
			goto err;
		}
		ret = spi_gsensor_write(rwbuf);
		if (ret < 0)
			goto err;
		break;
	case BMA_IOCTL_READ_ACCELERATION:
		ret = spi_gsensor_read_acceleration(&buf[0]);
		if (ret < 0)
			goto err;
		break;
	case BMA_IOCTL_SET_MODE:
		spi_bma150_set_mode(rwbuf[0]);
		break;
	case BMA_IOCTL_GET_INT:
		temp = 0;
		break;
	default:
		ret = -ENOTTY;
		goto err;
	}
	mutex_unlock(&spi_bma150_lock);

	switch (cmd) {
	case BMA_IOCTL_READ:
		if (copy_to_user(argp, &rwbuf, sizeof(rwbuf)))
			return -EFAULT;
		break;
	case BMA_IOCTL_READ_ACCELERATION:
		if (copy_to_user(argp, &buf, sizeof(buf)))
			return -EFAULT;
		break;
	case BMA_IOCTL_GET_INT:
		if (copy_to_user(argp, &temp, sizeof(temp)))
			return -EFAULT;
		break;
	default:
		break;
	}

	return 0;

err:
	mutex_unlock(&spi_bma150_lock);
	return ret;
}

static struct file_operations spi_bma_fops = {
	.owner = THIS_MODULE,
	.open = spi_bma150_open,
	.release = spi_bma150_release,
	.unlocked_ioctl = spi_bma150_ioctl,
};

static struct miscdevice spi_bma_device = {
	.minor = MISC_DYNAMIC_MINOR,
	.name = "bma150",
	.fops = &spi_bma_fops,
};

static int spi_gsensor_initial(void)
{
	int ret;
	ret = misc_register(&spi_bma_device);
	if (ret < 0) {
		printk(KERN_ERR "%s: init misc_register fail\n", __func__);
		return ret;
	}

	mutex_init(&gsensor_RW_mutex);
	mutex_init(&gsensor_set_mode_mutex);


	ret = spi_microp_enable(1);
	if (ret) {
		printk(KERN_ERR "%s: spi_microp_enable(1) fail!\n", __func__);
		goto err_spi_enable;
	}

	ret = spi_bma150_set_mode(BMA_MODE_SLEEP);
	if (ret) {
		printk(KERN_ERR "%s: set BMA_MODE_SLEEP fail!\n", __func__);
		goto err_set_mode;
	}

	return 0;

err_set_mode:
	spi_microp_enable(0);
err_spi_enable:
	misc_deregister(&spi_bma_device);

	return ret;
}

static int  spi_bma150_probe(struct platform_device *pdev)
{
	printk(KERN_INFO "%s: G-sensor connect with microP: "
			"start initial\n", __func__);

	this_pdata = pdev->dev.platform_data;
	spi_gsensor_initial();

	return 0;
}

static int spi_bma150_remove(struct platform_device *pdev)
{
	mutex_destroy(&gsensor_set_mode_mutex);
	return 0;
}

static struct platform_driver spi_bma150_driver = {
	.probe		= spi_bma150_probe,
	.remove		= spi_bma150_remove,
	.driver		= {
		.name		= BMA150_G_SENSOR_NAME,
		.owner		= THIS_MODULE,
	},
};

static int __init spi_bma150_init(void)
{
	return platform_driver_register(&spi_bma150_driver);

}

static void __exit spi_bma150_exit(void)
{
	platform_driver_unregister(&spi_bma150_driver);
}

module_init(spi_bma150_init);
module_exit(spi_bma150_exit);

MODULE_DESCRIPTION("BMA150 G-sensor driver");
MODULE_LICENSE("GPL");
