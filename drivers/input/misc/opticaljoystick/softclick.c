/* drivers/input/opticaljoystick/curcial.c
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
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/jiffies.h>
#include <asm/mach-types.h>
#include "curcial.h"




#define DELTA_MIN_IN          50
#define DELTA_MIN_OUT         100
#define DELTA_SUM_TIME        20
#define DELTA_SUM_CP          5
#define SHT_LOW_LIMIT         150
#define KEY_ACCEL_VALUE       (DELTA_MIN_IN-10)

#define PRESS_SQ_RATIO        12
#define PRESS_MIN_SQ        1
#define RELEASE_SQ_RATIO      6
#define RELEASE_SHT_RATIO      6

#define PRESS_SHT_RATIO        350

#define RELEASE_CHK_FRAME     4
#define CLICK_CHK_FRAME       10
#define IGNORE_CHK_FRAME      30
#define DELTA_SUM_MAX         5
#define MAX_CHK_FRAME         40

#define OJ_TRUE               1
#define OJ_FALSE              0


//---------------------------------------------------------------------------

typedef struct {
	uint8_t squal;
	uint16_t	shutter;
}OJFPD_T;



//extern unsigned int system_rev;
OJTouchEvt_T      gTouchEvt = OJ_TOUCH_NONE_EVT;
uint8_t    gPressBufCnt = 0;
uint8_t  gSqRatio;



/* SoftClick */
static uint16_t    gPressSqAve;
static OJFPD_T    gOJQueue[OJ_QUEUE_MAX];



uint16_t      gPressShtAve;
uint16_t          gPress_SecondSht;
uint16_t          gPress_fourthSht;
uint16_t          gPreSqual;
uint16_t          gPreShutter;
uint8_t        gDeltaSum;
uint8_t        gNaviKeyChk;
uint8_t        gShPressChk;


/* ---------------------------------------------------------------------------
Funtion Name: OJ_Queue_Add
Description: Store output data of OJ into gOJ_Data_Queue.
Return Value: none
-----------------------------------------------------------------------------*/
static void OJ_Queue_Add(OJData_T *OJData)
{
	uint8_t i;

	for(i=1; i<OJ_QUEUE_MAX; i++)
		gOJQueue[i-1] = gOJQueue[i];

	gOJQueue[OJ_QUEUE_05].shutter = (OJData->shtHi<<8)|OJData->shtLo;
	gOJQueue[OJ_QUEUE_05].squal = OJData->squal;
}

/* ---------------------------------------------------------------------------
Funtion Name: Squal_Ratio
Description: Sq Ratio calculator
Return Value: SqRatio
-----------------------------------------------------------------------------*/
static uint8_t Squal_Ratio(void)
{
	uint8_t		i;
	uint16_t	SqSum;
	uint8_t		SqRatio;

	if (gPressBufCnt == RELEASE_CHK_FRAME) {
		SqSum = 0;
		SqRatio = 0;

		for (i=OJ_QUEUE_01; i<=OJ_QUEUE_04; i++)
			SqSum += gOJQueue[i].squal;

		gPressSqAve = SqSum>>2;
	/*	printk(KERN_INFO"%s:gPressSqAve=%d\n", __func__,gPressSqAve);*/
	}

	if (gPressSqAve == 0)
		return (RELEASE_SQ_RATIO+1);

	SqRatio = (gOJQueue[OJ_QUEUE_05].squal * 10) / gPressSqAve;


	return SqRatio;
}
uint16_t Shutter_Ratio(void)
{
   uint8_t     i;
   uint16_t    ShtSum;
   uint16_t     ShtRatio;

	if (gPressBufCnt == RELEASE_CHK_FRAME) {
		ShtSum = 0;
		ShtRatio = 0;

		for (i = OJ_QUEUE_01; i <= OJ_QUEUE_04; i++)
			ShtSum += gOJQueue[i].shutter;

      gPressShtAve = ShtSum>>2;
      gPress_SecondSht = (uint16_t)gOJQueue[OJ_QUEUE_02].shutter;
      gPress_fourthSht = (uint16_t)gOJQueue[OJ_QUEUE_04].shutter;
   }

	if (gPressShtAve == 0)
		return (RELEASE_SHT_RATIO+1);

   ShtRatio = (uint16_t)(gOJQueue[OJ_QUEUE_05].shutter)*10 / (uint16_t)gPressShtAve;

   return ShtRatio;
}
/* ---------------------------------------------------------------------------
Funtion Name: OJ_FPD_Event
Description: return current status after calculating output data of OJ.
Return Value: OJ_TOUCH_NONE_EVT, OJ_TOUCH_PRESS_EVT, OJ_TOUCH_RELEASE_EVT
-----------------------------------------------------------------------------*/
#if 1
OJTouchEvt_T OJ_SoftClick_Event(OJData_T *OJData)
{
//	uint8_t	SqRatio;

	OJ_Queue_Add(OJData);

	if (gTouchEvt == OJ_TOUCH_NONE_EVT) {
		if (OJData->squal > 20) {
			gTouchEvt = OJ_TOUCH_PRESS_EVT;
			gPressBufCnt = 0;
		} else {
			return OJ_TOUCH_NONE_EVT;
		}
	}

	gPressBufCnt++;
	gSqRatio = Squal_Ratio();

	// Release Check
	if (gTouchEvt == OJ_TOUCH_PRESS_EVT && gPressBufCnt >= RELEASE_CHK_FRAME) {
		if (gSqRatio <= RELEASE_SQ_RATIO) {
			gTouchEvt = OJ_TOUCH_NONE_EVT;
			gPressSqAve = 0;
			return OJ_TOUCH_CLICK_EVT;
		}
	}


	return gTouchEvt;
}
#else
OJTouchEvt_T OJ_SoftClick_Event(OJData_T *OJData)
{
	uint16_t      Sq_Ave, SqRatio, Rel_SqRatio;
	uint16_t     shtRatio, Sht_Ave, Rel_ShRatio;
	uint16_t    Press_Value;
	uint8_t     i;

   OJ_Queue_Add(OJData);

	if (gTouchEvt == OJ_TOUCH_NONE_EVT) {
	   gPreSqual = (uint16_t)gOJQueue[OJ_QUEUE_04].squal;
	   gPreShutter = (uint16_t)gOJQueue[OJ_QUEUE_04].shutter;

	   if (gPreSqual == 0)
	      return OJ_TOUCH_NONE_EVT;

	   gTouchEvt = OJ_TOUCH_PRESS_EVT;
	   gNaviKeyChk = OJ_FALSE;
	   gPressBufCnt = 1;
	   gDeltaSum = 0;
	   return OJ_TOUCH_NONE_EVT; /* gTouchEvt;*/
	}

	if (gPressBufCnt < MAX_CHK_FRAME)
		gPressBufCnt++;

	Rel_SqRatio = Squal_Ratio();
	Rel_ShRatio = Shutter_Ratio();
/*		printk(KERN_INFO"%s:Rel_SqRatio=%d Rel_SqRatio=%d\n", __func__,gPressSqAve,Rel_ShRatio);*/
   /* Press Check*/
	if (gTouchEvt == OJ_TOUCH_PRESS_EVT && gPressBufCnt == RELEASE_CHK_FRAME) {
		SqRatio = (uint16_t)gPressSqAve*10/gPreSqual;
		shtRatio = (uint16_t)gPressShtAve*10/gPreShutter;
		Press_Value = (gPress_fourthSht - gPress_SecondSht)*100/gPress_SecondSht;
	/*	printk(KERN_INFO"%s:SqRatio=%d shtRatio=%d Press_Value=%d\n", __func__,SqRatio,shtRatio,Press_Value);*/
		if (Press_Value < 4 && ((gPressSqAve >= 25) && (gPressShtAve >= 500) && (SqRatio >= PRESS_SQ_RATIO)))
			return OJ_TOUCH_PRESS_EVT;
		else if (Press_Value < 4 && (SqRatio >= PRESS_SQ_RATIO && shtRatio >= 8
				&& (gPressSqAve >= 17 && gPressSqAve <= 30)
				&& (gPressShtAve >= 350 && gPressShtAve <= 2000)))
				return OJ_TOUCH_PRESS_EVT;
		else if (Press_Value < 4 && ((gPressSqAve >= 15 && gPressSqAve <= 35)
				&& (gPressShtAve >= 350 && gPressShtAve <= 750)
				&& (shtRatio >= 12 && shtRatio <= 30)
				&& (SqRatio >= 8))) {
				gShPressChk = true;
				return OJ_TOUCH_PRESS_EVT;
      } else {
				gTouchEvt = OJ_TOUCH_NONE_EVT;
				return OJ_TOUCH_NONE_EVT;
      }
   }
/*
   // NaviKey Check
   if(OJData->key != OJ_KEY_NONE)
      gNaviKeyChk = OJ_TRUE;

   // Movement Check after Press
   if(gPressBufCnt <= RELEASE_CHK_FRAME)
      gDeltaSum += (abs(OJData->deltaX)+abs(OJData->deltaY));
*/
   /* Release Check*/
   if (gTouchEvt == OJ_TOUCH_PRESS_EVT && gPressBufCnt >= CLICK_CHK_FRAME) {
      if (Rel_SqRatio <= RELEASE_SQ_RATIO && gShPressChk == false) {
				gTouchEvt = OJ_TOUCH_RELEASE_EVT;
				return gTouchEvt;
      } else if (Rel_ShRatio <= RELEASE_SHT_RATIO && gShPressChk == true) {
					gTouchEvt = OJ_TOUCH_RELEASE_EVT;
					gShPressChk = false;
					return gTouchEvt;
      }
   }
   /* Click Check*/
	else if (gTouchEvt == OJ_TOUCH_RELEASE_EVT && gPressBufCnt >= CLICK_CHK_FRAME) {
				if (gDeltaSum <= DELTA_SUM_MAX && gNaviKeyChk == OJ_FALSE && gPressBufCnt <= IGNORE_CHK_FRAME) {
					gTouchEvt = OJ_TOUCH_NONE_EVT;
					return OJ_TOUCH_CLICK_EVT;
		}

				if (gPressBufCnt > IGNORE_CHK_FRAME)
					gTouchEvt = OJ_TOUCH_NONE_EVT;
   }

   return OJ_TOUCH_NONE_EVT;
}
#endif