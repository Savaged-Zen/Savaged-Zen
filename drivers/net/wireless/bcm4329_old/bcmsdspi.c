<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='en' lang='en'>
<head>
<title>zendroid - Zen kernel for android</title>
<meta name='generator' content='cgit v0.8.3.1'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit.css'/>
<link rel='alternate' title='Atom feed' href='http://git.zen-kernel.org/zendroid/atom/drivers/net/wireless/bcm4329/bcmsdspi.c?h=ZENDROID-2.6.35' type='application/atom+xml'/>
</head>
<body>
<div id='cgit'><table id='header'>
<tr>
<td class='logo' rowspan='2'><a href='/'><img src='/cgit.png' alt='cgit logo'/></a></td>
<td class='main'><a href='/'>index</a> : <a title='zendroid' href='/zendroid/'>zendroid</a></td><td class='form'><form method='get' action=''>
<select name='h' onchange='this.form.submit();'>
<option value='2.6.34-ck-ss'>2.6.34-ck-ss</option>
<option value='2.6.34-classicrcu-ss'>2.6.34-classicrcu-ss</option>
<option value='2.6.34-misc-ss'>2.6.34-misc-ss</option>
<option value='2.6.34-sio-ss'>2.6.34-sio-ss</option>
<option value='2.6.35-bfs-ss'>2.6.35-bfs-ss</option>
<option value='2.6.35-cfsllfeatures-ss'>2.6.35-cfsllfeatures-ss</option>
<option value='2.6.35-classicrcu-ss'>2.6.35-classicrcu-ss</option>
<option value='2.6.35-misc-ss'>2.6.35-misc-ss</option>
<option value='2.6.35-miscrebased-ss'>2.6.35-miscrebased-ss</option>
<option value='2.6.35-netarchy-ss'>2.6.35-netarchy-ss</option>
<option value='2.6.35-sio-ss'>2.6.35-sio-ss</option>
<option value='2.6.35-slqb-ss'>2.6.35-slqb-ss</option>
<option value='2.6.35-smartass-ss'>2.6.35-smartass-ss</option>
<option value='2.6.35-upstream-ss'>2.6.35-upstream-ss</option>
<option value='2.6.35-writeback-ss'>2.6.35-writeback-ss</option>
<option value='2.6.35-zen-ss'>2.6.35-zen-ss</option>
<option value='2.6.35-zram-ss'>2.6.35-zram-ss</option>
<option value='SBC'>SBC</option>
<option value='ZENDROID-2.6.35' selected='selected'>ZENDROID-2.6.35</option>
<option value='cpu'>cpu</option>
<option value='cpu-cfs'>cpu-cfs</option>
<option value='evo4g-src-2.6.29'>evo4g-src-2.6.29</option>
<option value='havs'>havs</option>
<option value='likely-unlikely'>likely-unlikely</option>
<option value='master'>master</option>
<option value='misc'>misc</option>
<option value='misc-ss'>misc-ss</option>
<option value='oom-rewrite'>oom-rewrite</option>
<option value='sio'>sio</option>
<option value='sio-evo-2.6.32'>sio-evo-2.6.32</option>
<option value='slqb'>slqb</option>
<option value='smartass'>smartass</option>
<option value='upstream'>upstream</option>
<option value='vr'>vr</option>
<option value='writeback'>writeback</option>
<option value='writeback-ss'>writeback-ss</option>
<option value='zen-tune-evo-2.6.32'>zen-tune-evo-2.6.32</option>
<option value='zendroid-2.6.34-ss'>zendroid-2.6.34-ss</option>
<option value='zendroid-2.6.35-rebase'>zendroid-2.6.35-rebase</option>
<option value='zram'>zram</option>
</select> <input type='submit' name='' value='switch'/></form></td></tr>
<tr><td class='sub'>Zen kernel for android</td><td class='sub right'>user</td></tr></table>
<table class='tabs'><tr><td>
<a href='/zendroid/?h=ZENDROID-2.6.35'>summary</a><a href='/zendroid/refs/?h=ZENDROID-2.6.35'>refs</a><a href='/zendroid/log/?h=ZENDROID-2.6.35'>log</a><a class='active' href='/zendroid/tree/?h=ZENDROID-2.6.35'>tree</a><a href='/zendroid/commit/?h=ZENDROID-2.6.35'>commit</a><a href='/zendroid/diff/?h=ZENDROID-2.6.35'>diff</a><a href='/zendroid/about/?h=ZENDROID-2.6.35'>about</a></td><td class='form'><form class='right' method='get' action='/zendroid/log/drivers/net/wireless/bcm4329/bcmsdspi.c'>
<input type='hidden' name='h' value='ZENDROID-2.6.35'/><select name='qt'>
<option value='grep'>log msg</option>
<option value='author'>author</option>
<option value='committer'>committer</option>
</select>
<input class='txt' type='text' size='10' name='q' value=''/>
<input type='submit' value='search'/>
</form>
</td></tr></table>
<div class='content'>path: <a href='/zendroid/tree/?h=ZENDROID-2.6.35'>root</a>/<a href='/zendroid/tree/drivers?h=ZENDROID-2.6.35'>drivers</a>/<a href='/zendroid/tree/drivers/net?h=ZENDROID-2.6.35'>net</a>/<a href='/zendroid/tree/drivers/net/wireless?h=ZENDROID-2.6.35'>wireless</a>/<a href='/zendroid/tree/drivers/net/wireless/bcm4329?h=ZENDROID-2.6.35'>bcm4329</a>/<a href='/zendroid/tree/drivers/net/wireless/bcm4329/bcmsdspi.c?h=ZENDROID-2.6.35'>bcmsdspi.c</a> (<a href='/zendroid/plain/drivers/net/wireless/bcm4329/bcmsdspi.c?h=ZENDROID-2.6.35'>plain</a>)<br/>blob: 636539be5ea52b02453a5a35b65d6e94f22c24b3
<table summary='blob content' class='blob'>
<tr><td class='linenumbers'><pre><a class='no' id='n1' name='n1' href='#n1'>1</a>
<a class='no' id='n2' name='n2' href='#n2'>2</a>
<a class='no' id='n3' name='n3' href='#n3'>3</a>
<a class='no' id='n4' name='n4' href='#n4'>4</a>
<a class='no' id='n5' name='n5' href='#n5'>5</a>
<a class='no' id='n6' name='n6' href='#n6'>6</a>
<a class='no' id='n7' name='n7' href='#n7'>7</a>
<a class='no' id='n8' name='n8' href='#n8'>8</a>
<a class='no' id='n9' name='n9' href='#n9'>9</a>
<a class='no' id='n10' name='n10' href='#n10'>10</a>
<a class='no' id='n11' name='n11' href='#n11'>11</a>
<a class='no' id='n12' name='n12' href='#n12'>12</a>
<a class='no' id='n13' name='n13' href='#n13'>13</a>
<a class='no' id='n14' name='n14' href='#n14'>14</a>
<a class='no' id='n15' name='n15' href='#n15'>15</a>
<a class='no' id='n16' name='n16' href='#n16'>16</a>
<a class='no' id='n17' name='n17' href='#n17'>17</a>
<a class='no' id='n18' name='n18' href='#n18'>18</a>
<a class='no' id='n19' name='n19' href='#n19'>19</a>
<a class='no' id='n20' name='n20' href='#n20'>20</a>
<a class='no' id='n21' name='n21' href='#n21'>21</a>
<a class='no' id='n22' name='n22' href='#n22'>22</a>
<a class='no' id='n23' name='n23' href='#n23'>23</a>
<a class='no' id='n24' name='n24' href='#n24'>24</a>
<a class='no' id='n25' name='n25' href='#n25'>25</a>
<a class='no' id='n26' name='n26' href='#n26'>26</a>
<a class='no' id='n27' name='n27' href='#n27'>27</a>
<a class='no' id='n28' name='n28' href='#n28'>28</a>
<a class='no' id='n29' name='n29' href='#n29'>29</a>
<a class='no' id='n30' name='n30' href='#n30'>30</a>
<a class='no' id='n31' name='n31' href='#n31'>31</a>
<a class='no' id='n32' name='n32' href='#n32'>32</a>
<a class='no' id='n33' name='n33' href='#n33'>33</a>
<a class='no' id='n34' name='n34' href='#n34'>34</a>
<a class='no' id='n35' name='n35' href='#n35'>35</a>
<a class='no' id='n36' name='n36' href='#n36'>36</a>
<a class='no' id='n37' name='n37' href='#n37'>37</a>
<a class='no' id='n38' name='n38' href='#n38'>38</a>
<a class='no' id='n39' name='n39' href='#n39'>39</a>
<a class='no' id='n40' name='n40' href='#n40'>40</a>
<a class='no' id='n41' name='n41' href='#n41'>41</a>
<a class='no' id='n42' name='n42' href='#n42'>42</a>
<a class='no' id='n43' name='n43' href='#n43'>43</a>
<a class='no' id='n44' name='n44' href='#n44'>44</a>
<a class='no' id='n45' name='n45' href='#n45'>45</a>
<a class='no' id='n46' name='n46' href='#n46'>46</a>
<a class='no' id='n47' name='n47' href='#n47'>47</a>
<a class='no' id='n48' name='n48' href='#n48'>48</a>
<a class='no' id='n49' name='n49' href='#n49'>49</a>
<a class='no' id='n50' name='n50' href='#n50'>50</a>
<a class='no' id='n51' name='n51' href='#n51'>51</a>
<a class='no' id='n52' name='n52' href='#n52'>52</a>
<a class='no' id='n53' name='n53' href='#n53'>53</a>
<a class='no' id='n54' name='n54' href='#n54'>54</a>
<a class='no' id='n55' name='n55' href='#n55'>55</a>
<a class='no' id='n56' name='n56' href='#n56'>56</a>
<a class='no' id='n57' name='n57' href='#n57'>57</a>
<a class='no' id='n58' name='n58' href='#n58'>58</a>
<a class='no' id='n59' name='n59' href='#n59'>59</a>
<a class='no' id='n60' name='n60' href='#n60'>60</a>
<a class='no' id='n61' name='n61' href='#n61'>61</a>
<a class='no' id='n62' name='n62' href='#n62'>62</a>
<a class='no' id='n63' name='n63' href='#n63'>63</a>
<a class='no' id='n64' name='n64' href='#n64'>64</a>
<a class='no' id='n65' name='n65' href='#n65'>65</a>
<a class='no' id='n66' name='n66' href='#n66'>66</a>
<a class='no' id='n67' name='n67' href='#n67'>67</a>
<a class='no' id='n68' name='n68' href='#n68'>68</a>
<a class='no' id='n69' name='n69' href='#n69'>69</a>
<a class='no' id='n70' name='n70' href='#n70'>70</a>
<a class='no' id='n71' name='n71' href='#n71'>71</a>
<a class='no' id='n72' name='n72' href='#n72'>72</a>
<a class='no' id='n73' name='n73' href='#n73'>73</a>
<a class='no' id='n74' name='n74' href='#n74'>74</a>
<a class='no' id='n75' name='n75' href='#n75'>75</a>
<a class='no' id='n76' name='n76' href='#n76'>76</a>
<a class='no' id='n77' name='n77' href='#n77'>77</a>
<a class='no' id='n78' name='n78' href='#n78'>78</a>
<a class='no' id='n79' name='n79' href='#n79'>79</a>
<a class='no' id='n80' name='n80' href='#n80'>80</a>
<a class='no' id='n81' name='n81' href='#n81'>81</a>
<a class='no' id='n82' name='n82' href='#n82'>82</a>
<a class='no' id='n83' name='n83' href='#n83'>83</a>
<a class='no' id='n84' name='n84' href='#n84'>84</a>
<a class='no' id='n85' name='n85' href='#n85'>85</a>
<a class='no' id='n86' name='n86' href='#n86'>86</a>
<a class='no' id='n87' name='n87' href='#n87'>87</a>
<a class='no' id='n88' name='n88' href='#n88'>88</a>
<a class='no' id='n89' name='n89' href='#n89'>89</a>
<a class='no' id='n90' name='n90' href='#n90'>90</a>
<a class='no' id='n91' name='n91' href='#n91'>91</a>
<a class='no' id='n92' name='n92' href='#n92'>92</a>
<a class='no' id='n93' name='n93' href='#n93'>93</a>
<a class='no' id='n94' name='n94' href='#n94'>94</a>
<a class='no' id='n95' name='n95' href='#n95'>95</a>
<a class='no' id='n96' name='n96' href='#n96'>96</a>
<a class='no' id='n97' name='n97' href='#n97'>97</a>
<a class='no' id='n98' name='n98' href='#n98'>98</a>
<a class='no' id='n99' name='n99' href='#n99'>99</a>
<a class='no' id='n100' name='n100' href='#n100'>100</a>
<a class='no' id='n101' name='n101' href='#n101'>101</a>
<a class='no' id='n102' name='n102' href='#n102'>102</a>
<a class='no' id='n103' name='n103' href='#n103'>103</a>
<a class='no' id='n104' name='n104' href='#n104'>104</a>
<a class='no' id='n105' name='n105' href='#n105'>105</a>
<a class='no' id='n106' name='n106' href='#n106'>106</a>
<a class='no' id='n107' name='n107' href='#n107'>107</a>
<a class='no' id='n108' name='n108' href='#n108'>108</a>
<a class='no' id='n109' name='n109' href='#n109'>109</a>
<a class='no' id='n110' name='n110' href='#n110'>110</a>
<a class='no' id='n111' name='n111' href='#n111'>111</a>
<a class='no' id='n112' name='n112' href='#n112'>112</a>
<a class='no' id='n113' name='n113' href='#n113'>113</a>
<a class='no' id='n114' name='n114' href='#n114'>114</a>
<a class='no' id='n115' name='n115' href='#n115'>115</a>
<a class='no' id='n116' name='n116' href='#n116'>116</a>
<a class='no' id='n117' name='n117' href='#n117'>117</a>
<a class='no' id='n118' name='n118' href='#n118'>118</a>
<a class='no' id='n119' name='n119' href='#n119'>119</a>
<a class='no' id='n120' name='n120' href='#n120'>120</a>
<a class='no' id='n121' name='n121' href='#n121'>121</a>
<a class='no' id='n122' name='n122' href='#n122'>122</a>
<a class='no' id='n123' name='n123' href='#n123'>123</a>
<a class='no' id='n124' name='n124' href='#n124'>124</a>
<a class='no' id='n125' name='n125' href='#n125'>125</a>
<a class='no' id='n126' name='n126' href='#n126'>126</a>
<a class='no' id='n127' name='n127' href='#n127'>127</a>
<a class='no' id='n128' name='n128' href='#n128'>128</a>
<a class='no' id='n129' name='n129' href='#n129'>129</a>
<a class='no' id='n130' name='n130' href='#n130'>130</a>
<a class='no' id='n131' name='n131' href='#n131'>131</a>
<a class='no' id='n132' name='n132' href='#n132'>132</a>
<a class='no' id='n133' name='n133' href='#n133'>133</a>
<a class='no' id='n134' name='n134' href='#n134'>134</a>
<a class='no' id='n135' name='n135' href='#n135'>135</a>
<a class='no' id='n136' name='n136' href='#n136'>136</a>
<a class='no' id='n137' name='n137' href='#n137'>137</a>
<a class='no' id='n138' name='n138' href='#n138'>138</a>
<a class='no' id='n139' name='n139' href='#n139'>139</a>
<a class='no' id='n140' name='n140' href='#n140'>140</a>
<a class='no' id='n141' name='n141' href='#n141'>141</a>
<a class='no' id='n142' name='n142' href='#n142'>142</a>
<a class='no' id='n143' name='n143' href='#n143'>143</a>
<a class='no' id='n144' name='n144' href='#n144'>144</a>
<a class='no' id='n145' name='n145' href='#n145'>145</a>
<a class='no' id='n146' name='n146' href='#n146'>146</a>
<a class='no' id='n147' name='n147' href='#n147'>147</a>
<a class='no' id='n148' name='n148' href='#n148'>148</a>
<a class='no' id='n149' name='n149' href='#n149'>149</a>
<a class='no' id='n150' name='n150' href='#n150'>150</a>
<a class='no' id='n151' name='n151' href='#n151'>151</a>
<a class='no' id='n152' name='n152' href='#n152'>152</a>
<a class='no' id='n153' name='n153' href='#n153'>153</a>
<a class='no' id='n154' name='n154' href='#n154'>154</a>
<a class='no' id='n155' name='n155' href='#n155'>155</a>
<a class='no' id='n156' name='n156' href='#n156'>156</a>
<a class='no' id='n157' name='n157' href='#n157'>157</a>
<a class='no' id='n158' name='n158' href='#n158'>158</a>
<a class='no' id='n159' name='n159' href='#n159'>159</a>
<a class='no' id='n160' name='n160' href='#n160'>160</a>
<a class='no' id='n161' name='n161' href='#n161'>161</a>
<a class='no' id='n162' name='n162' href='#n162'>162</a>
<a class='no' id='n163' name='n163' href='#n163'>163</a>
<a class='no' id='n164' name='n164' href='#n164'>164</a>
<a class='no' id='n165' name='n165' href='#n165'>165</a>
<a class='no' id='n166' name='n166' href='#n166'>166</a>
<a class='no' id='n167' name='n167' href='#n167'>167</a>
<a class='no' id='n168' name='n168' href='#n168'>168</a>
<a class='no' id='n169' name='n169' href='#n169'>169</a>
<a class='no' id='n170' name='n170' href='#n170'>170</a>
<a class='no' id='n171' name='n171' href='#n171'>171</a>
<a class='no' id='n172' name='n172' href='#n172'>172</a>
<a class='no' id='n173' name='n173' href='#n173'>173</a>
<a class='no' id='n174' name='n174' href='#n174'>174</a>
<a class='no' id='n175' name='n175' href='#n175'>175</a>
<a class='no' id='n176' name='n176' href='#n176'>176</a>
<a class='no' id='n177' name='n177' href='#n177'>177</a>
<a class='no' id='n178' name='n178' href='#n178'>178</a>
<a class='no' id='n179' name='n179' href='#n179'>179</a>
<a class='no' id='n180' name='n180' href='#n180'>180</a>
<a class='no' id='n181' name='n181' href='#n181'>181</a>
<a class='no' id='n182' name='n182' href='#n182'>182</a>
<a class='no' id='n183' name='n183' href='#n183'>183</a>
<a class='no' id='n184' name='n184' href='#n184'>184</a>
<a class='no' id='n185' name='n185' href='#n185'>185</a>
<a class='no' id='n186' name='n186' href='#n186'>186</a>
<a class='no' id='n187' name='n187' href='#n187'>187</a>
<a class='no' id='n188' name='n188' href='#n188'>188</a>
<a class='no' id='n189' name='n189' href='#n189'>189</a>
<a class='no' id='n190' name='n190' href='#n190'>190</a>
<a class='no' id='n191' name='n191' href='#n191'>191</a>
<a class='no' id='n192' name='n192' href='#n192'>192</a>
<a class='no' id='n193' name='n193' href='#n193'>193</a>
<a class='no' id='n194' name='n194' href='#n194'>194</a>
<a class='no' id='n195' name='n195' href='#n195'>195</a>
<a class='no' id='n196' name='n196' href='#n196'>196</a>
<a class='no' id='n197' name='n197' href='#n197'>197</a>
<a class='no' id='n198' name='n198' href='#n198'>198</a>
<a class='no' id='n199' name='n199' href='#n199'>199</a>
<a class='no' id='n200' name='n200' href='#n200'>200</a>
<a class='no' id='n201' name='n201' href='#n201'>201</a>
<a class='no' id='n202' name='n202' href='#n202'>202</a>
<a class='no' id='n203' name='n203' href='#n203'>203</a>
<a class='no' id='n204' name='n204' href='#n204'>204</a>
<a class='no' id='n205' name='n205' href='#n205'>205</a>
<a class='no' id='n206' name='n206' href='#n206'>206</a>
<a class='no' id='n207' name='n207' href='#n207'>207</a>
<a class='no' id='n208' name='n208' href='#n208'>208</a>
<a class='no' id='n209' name='n209' href='#n209'>209</a>
<a class='no' id='n210' name='n210' href='#n210'>210</a>
<a class='no' id='n211' name='n211' href='#n211'>211</a>
<a class='no' id='n212' name='n212' href='#n212'>212</a>
<a class='no' id='n213' name='n213' href='#n213'>213</a>
<a class='no' id='n214' name='n214' href='#n214'>214</a>
<a class='no' id='n215' name='n215' href='#n215'>215</a>
<a class='no' id='n216' name='n216' href='#n216'>216</a>
<a class='no' id='n217' name='n217' href='#n217'>217</a>
<a class='no' id='n218' name='n218' href='#n218'>218</a>
<a class='no' id='n219' name='n219' href='#n219'>219</a>
<a class='no' id='n220' name='n220' href='#n220'>220</a>
<a class='no' id='n221' name='n221' href='#n221'>221</a>
<a class='no' id='n222' name='n222' href='#n222'>222</a>
<a class='no' id='n223' name='n223' href='#n223'>223</a>
<a class='no' id='n224' name='n224' href='#n224'>224</a>
<a class='no' id='n225' name='n225' href='#n225'>225</a>
<a class='no' id='n226' name='n226' href='#n226'>226</a>
<a class='no' id='n227' name='n227' href='#n227'>227</a>
<a class='no' id='n228' name='n228' href='#n228'>228</a>
<a class='no' id='n229' name='n229' href='#n229'>229</a>
<a class='no' id='n230' name='n230' href='#n230'>230</a>
<a class='no' id='n231' name='n231' href='#n231'>231</a>
<a class='no' id='n232' name='n232' href='#n232'>232</a>
<a class='no' id='n233' name='n233' href='#n233'>233</a>
<a class='no' id='n234' name='n234' href='#n234'>234</a>
<a class='no' id='n235' name='n235' href='#n235'>235</a>
<a class='no' id='n236' name='n236' href='#n236'>236</a>
<a class='no' id='n237' name='n237' href='#n237'>237</a>
<a class='no' id='n238' name='n238' href='#n238'>238</a>
<a class='no' id='n239' name='n239' href='#n239'>239</a>
<a class='no' id='n240' name='n240' href='#n240'>240</a>
<a class='no' id='n241' name='n241' href='#n241'>241</a>
<a class='no' id='n242' name='n242' href='#n242'>242</a>
<a class='no' id='n243' name='n243' href='#n243'>243</a>
<a class='no' id='n244' name='n244' href='#n244'>244</a>
<a class='no' id='n245' name='n245' href='#n245'>245</a>
<a class='no' id='n246' name='n246' href='#n246'>246</a>
<a class='no' id='n247' name='n247' href='#n247'>247</a>
<a class='no' id='n248' name='n248' href='#n248'>248</a>
<a class='no' id='n249' name='n249' href='#n249'>249</a>
<a class='no' id='n250' name='n250' href='#n250'>250</a>
<a class='no' id='n251' name='n251' href='#n251'>251</a>
<a class='no' id='n252' name='n252' href='#n252'>252</a>
<a class='no' id='n253' name='n253' href='#n253'>253</a>
<a class='no' id='n254' name='n254' href='#n254'>254</a>
<a class='no' id='n255' name='n255' href='#n255'>255</a>
<a class='no' id='n256' name='n256' href='#n256'>256</a>
<a class='no' id='n257' name='n257' href='#n257'>257</a>
<a class='no' id='n258' name='n258' href='#n258'>258</a>
<a class='no' id='n259' name='n259' href='#n259'>259</a>
<a class='no' id='n260' name='n260' href='#n260'>260</a>
<a class='no' id='n261' name='n261' href='#n261'>261</a>
<a class='no' id='n262' name='n262' href='#n262'>262</a>
<a class='no' id='n263' name='n263' href='#n263'>263</a>
<a class='no' id='n264' name='n264' href='#n264'>264</a>
<a class='no' id='n265' name='n265' href='#n265'>265</a>
<a class='no' id='n266' name='n266' href='#n266'>266</a>
<a class='no' id='n267' name='n267' href='#n267'>267</a>
<a class='no' id='n268' name='n268' href='#n268'>268</a>
<a class='no' id='n269' name='n269' href='#n269'>269</a>
<a class='no' id='n270' name='n270' href='#n270'>270</a>
<a class='no' id='n271' name='n271' href='#n271'>271</a>
<a class='no' id='n272' name='n272' href='#n272'>272</a>
<a class='no' id='n273' name='n273' href='#n273'>273</a>
<a class='no' id='n274' name='n274' href='#n274'>274</a>
<a class='no' id='n275' name='n275' href='#n275'>275</a>
<a class='no' id='n276' name='n276' href='#n276'>276</a>
<a class='no' id='n277' name='n277' href='#n277'>277</a>
<a class='no' id='n278' name='n278' href='#n278'>278</a>
<a class='no' id='n279' name='n279' href='#n279'>279</a>
<a class='no' id='n280' name='n280' href='#n280'>280</a>
<a class='no' id='n281' name='n281' href='#n281'>281</a>
<a class='no' id='n282' name='n282' href='#n282'>282</a>
<a class='no' id='n283' name='n283' href='#n283'>283</a>
<a class='no' id='n284' name='n284' href='#n284'>284</a>
<a class='no' id='n285' name='n285' href='#n285'>285</a>
<a class='no' id='n286' name='n286' href='#n286'>286</a>
<a class='no' id='n287' name='n287' href='#n287'>287</a>
<a class='no' id='n288' name='n288' href='#n288'>288</a>
<a class='no' id='n289' name='n289' href='#n289'>289</a>
<a class='no' id='n290' name='n290' href='#n290'>290</a>
<a class='no' id='n291' name='n291' href='#n291'>291</a>
<a class='no' id='n292' name='n292' href='#n292'>292</a>
<a class='no' id='n293' name='n293' href='#n293'>293</a>
<a class='no' id='n294' name='n294' href='#n294'>294</a>
<a class='no' id='n295' name='n295' href='#n295'>295</a>
<a class='no' id='n296' name='n296' href='#n296'>296</a>
<a class='no' id='n297' name='n297' href='#n297'>297</a>
<a class='no' id='n298' name='n298' href='#n298'>298</a>
<a class='no' id='n299' name='n299' href='#n299'>299</a>
<a class='no' id='n300' name='n300' href='#n300'>300</a>
<a class='no' id='n301' name='n301' href='#n301'>301</a>
<a class='no' id='n302' name='n302' href='#n302'>302</a>
<a class='no' id='n303' name='n303' href='#n303'>303</a>
<a class='no' id='n304' name='n304' href='#n304'>304</a>
<a class='no' id='n305' name='n305' href='#n305'>305</a>
<a class='no' id='n306' name='n306' href='#n306'>306</a>
<a class='no' id='n307' name='n307' href='#n307'>307</a>
<a class='no' id='n308' name='n308' href='#n308'>308</a>
<a class='no' id='n309' name='n309' href='#n309'>309</a>
<a class='no' id='n310' name='n310' href='#n310'>310</a>
<a class='no' id='n311' name='n311' href='#n311'>311</a>
<a class='no' id='n312' name='n312' href='#n312'>312</a>
<a class='no' id='n313' name='n313' href='#n313'>313</a>
<a class='no' id='n314' name='n314' href='#n314'>314</a>
<a class='no' id='n315' name='n315' href='#n315'>315</a>
<a class='no' id='n316' name='n316' href='#n316'>316</a>
<a class='no' id='n317' name='n317' href='#n317'>317</a>
<a class='no' id='n318' name='n318' href='#n318'>318</a>
<a class='no' id='n319' name='n319' href='#n319'>319</a>
<a class='no' id='n320' name='n320' href='#n320'>320</a>
<a class='no' id='n321' name='n321' href='#n321'>321</a>
<a class='no' id='n322' name='n322' href='#n322'>322</a>
<a class='no' id='n323' name='n323' href='#n323'>323</a>
<a class='no' id='n324' name='n324' href='#n324'>324</a>
<a class='no' id='n325' name='n325' href='#n325'>325</a>
<a class='no' id='n326' name='n326' href='#n326'>326</a>
<a class='no' id='n327' name='n327' href='#n327'>327</a>
<a class='no' id='n328' name='n328' href='#n328'>328</a>
<a class='no' id='n329' name='n329' href='#n329'>329</a>
<a class='no' id='n330' name='n330' href='#n330'>330</a>
<a class='no' id='n331' name='n331' href='#n331'>331</a>
<a class='no' id='n332' name='n332' href='#n332'>332</a>
<a class='no' id='n333' name='n333' href='#n333'>333</a>
<a class='no' id='n334' name='n334' href='#n334'>334</a>
<a class='no' id='n335' name='n335' href='#n335'>335</a>
<a class='no' id='n336' name='n336' href='#n336'>336</a>
<a class='no' id='n337' name='n337' href='#n337'>337</a>
<a class='no' id='n338' name='n338' href='#n338'>338</a>
<a class='no' id='n339' name='n339' href='#n339'>339</a>
<a class='no' id='n340' name='n340' href='#n340'>340</a>
<a class='no' id='n341' name='n341' href='#n341'>341</a>
<a class='no' id='n342' name='n342' href='#n342'>342</a>
<a class='no' id='n343' name='n343' href='#n343'>343</a>
<a class='no' id='n344' name='n344' href='#n344'>344</a>
<a class='no' id='n345' name='n345' href='#n345'>345</a>
<a class='no' id='n346' name='n346' href='#n346'>346</a>
<a class='no' id='n347' name='n347' href='#n347'>347</a>
<a class='no' id='n348' name='n348' href='#n348'>348</a>
<a class='no' id='n349' name='n349' href='#n349'>349</a>
<a class='no' id='n350' name='n350' href='#n350'>350</a>
<a class='no' id='n351' name='n351' href='#n351'>351</a>
<a class='no' id='n352' name='n352' href='#n352'>352</a>
<a class='no' id='n353' name='n353' href='#n353'>353</a>
<a class='no' id='n354' name='n354' href='#n354'>354</a>
<a class='no' id='n355' name='n355' href='#n355'>355</a>
<a class='no' id='n356' name='n356' href='#n356'>356</a>
<a class='no' id='n357' name='n357' href='#n357'>357</a>
<a class='no' id='n358' name='n358' href='#n358'>358</a>
<a class='no' id='n359' name='n359' href='#n359'>359</a>
<a class='no' id='n360' name='n360' href='#n360'>360</a>
<a class='no' id='n361' name='n361' href='#n361'>361</a>
<a class='no' id='n362' name='n362' href='#n362'>362</a>
<a class='no' id='n363' name='n363' href='#n363'>363</a>
<a class='no' id='n364' name='n364' href='#n364'>364</a>
<a class='no' id='n365' name='n365' href='#n365'>365</a>
<a class='no' id='n366' name='n366' href='#n366'>366</a>
<a class='no' id='n367' name='n367' href='#n367'>367</a>
<a class='no' id='n368' name='n368' href='#n368'>368</a>
<a class='no' id='n369' name='n369' href='#n369'>369</a>
<a class='no' id='n370' name='n370' href='#n370'>370</a>
<a class='no' id='n371' name='n371' href='#n371'>371</a>
<a class='no' id='n372' name='n372' href='#n372'>372</a>
<a class='no' id='n373' name='n373' href='#n373'>373</a>
<a class='no' id='n374' name='n374' href='#n374'>374</a>
<a class='no' id='n375' name='n375' href='#n375'>375</a>
<a class='no' id='n376' name='n376' href='#n376'>376</a>
<a class='no' id='n377' name='n377' href='#n377'>377</a>
<a class='no' id='n378' name='n378' href='#n378'>378</a>
<a class='no' id='n379' name='n379' href='#n379'>379</a>
<a class='no' id='n380' name='n380' href='#n380'>380</a>
<a class='no' id='n381' name='n381' href='#n381'>381</a>
<a class='no' id='n382' name='n382' href='#n382'>382</a>
<a class='no' id='n383' name='n383' href='#n383'>383</a>
<a class='no' id='n384' name='n384' href='#n384'>384</a>
<a class='no' id='n385' name='n385' href='#n385'>385</a>
<a class='no' id='n386' name='n386' href='#n386'>386</a>
<a class='no' id='n387' name='n387' href='#n387'>387</a>
<a class='no' id='n388' name='n388' href='#n388'>388</a>
<a class='no' id='n389' name='n389' href='#n389'>389</a>
<a class='no' id='n390' name='n390' href='#n390'>390</a>
<a class='no' id='n391' name='n391' href='#n391'>391</a>
<a class='no' id='n392' name='n392' href='#n392'>392</a>
<a class='no' id='n393' name='n393' href='#n393'>393</a>
<a class='no' id='n394' name='n394' href='#n394'>394</a>
<a class='no' id='n395' name='n395' href='#n395'>395</a>
<a class='no' id='n396' name='n396' href='#n396'>396</a>
<a class='no' id='n397' name='n397' href='#n397'>397</a>
<a class='no' id='n398' name='n398' href='#n398'>398</a>
<a class='no' id='n399' name='n399' href='#n399'>399</a>
<a class='no' id='n400' name='n400' href='#n400'>400</a>
<a class='no' id='n401' name='n401' href='#n401'>401</a>
<a class='no' id='n402' name='n402' href='#n402'>402</a>
<a class='no' id='n403' name='n403' href='#n403'>403</a>
<a class='no' id='n404' name='n404' href='#n404'>404</a>
<a class='no' id='n405' name='n405' href='#n405'>405</a>
<a class='no' id='n406' name='n406' href='#n406'>406</a>
<a class='no' id='n407' name='n407' href='#n407'>407</a>
<a class='no' id='n408' name='n408' href='#n408'>408</a>
<a class='no' id='n409' name='n409' href='#n409'>409</a>
<a class='no' id='n410' name='n410' href='#n410'>410</a>
<a class='no' id='n411' name='n411' href='#n411'>411</a>
<a class='no' id='n412' name='n412' href='#n412'>412</a>
<a class='no' id='n413' name='n413' href='#n413'>413</a>
<a class='no' id='n414' name='n414' href='#n414'>414</a>
<a class='no' id='n415' name='n415' href='#n415'>415</a>
<a class='no' id='n416' name='n416' href='#n416'>416</a>
<a class='no' id='n417' name='n417' href='#n417'>417</a>
<a class='no' id='n418' name='n418' href='#n418'>418</a>
<a class='no' id='n419' name='n419' href='#n419'>419</a>
<a class='no' id='n420' name='n420' href='#n420'>420</a>
<a class='no' id='n421' name='n421' href='#n421'>421</a>
<a class='no' id='n422' name='n422' href='#n422'>422</a>
<a class='no' id='n423' name='n423' href='#n423'>423</a>
<a class='no' id='n424' name='n424' href='#n424'>424</a>
<a class='no' id='n425' name='n425' href='#n425'>425</a>
<a class='no' id='n426' name='n426' href='#n426'>426</a>
<a class='no' id='n427' name='n427' href='#n427'>427</a>
<a class='no' id='n428' name='n428' href='#n428'>428</a>
<a class='no' id='n429' name='n429' href='#n429'>429</a>
<a class='no' id='n430' name='n430' href='#n430'>430</a>
<a class='no' id='n431' name='n431' href='#n431'>431</a>
<a class='no' id='n432' name='n432' href='#n432'>432</a>
<a class='no' id='n433' name='n433' href='#n433'>433</a>
<a class='no' id='n434' name='n434' href='#n434'>434</a>
<a class='no' id='n435' name='n435' href='#n435'>435</a>
<a class='no' id='n436' name='n436' href='#n436'>436</a>
<a class='no' id='n437' name='n437' href='#n437'>437</a>
<a class='no' id='n438' name='n438' href='#n438'>438</a>
<a class='no' id='n439' name='n439' href='#n439'>439</a>
<a class='no' id='n440' name='n440' href='#n440'>440</a>
<a class='no' id='n441' name='n441' href='#n441'>441</a>
<a class='no' id='n442' name='n442' href='#n442'>442</a>
<a class='no' id='n443' name='n443' href='#n443'>443</a>
<a class='no' id='n444' name='n444' href='#n444'>444</a>
<a class='no' id='n445' name='n445' href='#n445'>445</a>
<a class='no' id='n446' name='n446' href='#n446'>446</a>
<a class='no' id='n447' name='n447' href='#n447'>447</a>
<a class='no' id='n448' name='n448' href='#n448'>448</a>
<a class='no' id='n449' name='n449' href='#n449'>449</a>
<a class='no' id='n450' name='n450' href='#n450'>450</a>
<a class='no' id='n451' name='n451' href='#n451'>451</a>
<a class='no' id='n452' name='n452' href='#n452'>452</a>
<a class='no' id='n453' name='n453' href='#n453'>453</a>
<a class='no' id='n454' name='n454' href='#n454'>454</a>
<a class='no' id='n455' name='n455' href='#n455'>455</a>
<a class='no' id='n456' name='n456' href='#n456'>456</a>
<a class='no' id='n457' name='n457' href='#n457'>457</a>
<a class='no' id='n458' name='n458' href='#n458'>458</a>
<a class='no' id='n459' name='n459' href='#n459'>459</a>
<a class='no' id='n460' name='n460' href='#n460'>460</a>
<a class='no' id='n461' name='n461' href='#n461'>461</a>
<a class='no' id='n462' name='n462' href='#n462'>462</a>
<a class='no' id='n463' name='n463' href='#n463'>463</a>
<a class='no' id='n464' name='n464' href='#n464'>464</a>
<a class='no' id='n465' name='n465' href='#n465'>465</a>
<a class='no' id='n466' name='n466' href='#n466'>466</a>
<a class='no' id='n467' name='n467' href='#n467'>467</a>
<a class='no' id='n468' name='n468' href='#n468'>468</a>
<a class='no' id='n469' name='n469' href='#n469'>469</a>
<a class='no' id='n470' name='n470' href='#n470'>470</a>
<a class='no' id='n471' name='n471' href='#n471'>471</a>
<a class='no' id='n472' name='n472' href='#n472'>472</a>
<a class='no' id='n473' name='n473' href='#n473'>473</a>
<a class='no' id='n474' name='n474' href='#n474'>474</a>
<a class='no' id='n475' name='n475' href='#n475'>475</a>
<a class='no' id='n476' name='n476' href='#n476'>476</a>
<a class='no' id='n477' name='n477' href='#n477'>477</a>
<a class='no' id='n478' name='n478' href='#n478'>478</a>
<a class='no' id='n479' name='n479' href='#n479'>479</a>
<a class='no' id='n480' name='n480' href='#n480'>480</a>
<a class='no' id='n481' name='n481' href='#n481'>481</a>
<a class='no' id='n482' name='n482' href='#n482'>482</a>
<a class='no' id='n483' name='n483' href='#n483'>483</a>
<a class='no' id='n484' name='n484' href='#n484'>484</a>
<a class='no' id='n485' name='n485' href='#n485'>485</a>
<a class='no' id='n486' name='n486' href='#n486'>486</a>
<a class='no' id='n487' name='n487' href='#n487'>487</a>
<a class='no' id='n488' name='n488' href='#n488'>488</a>
<a class='no' id='n489' name='n489' href='#n489'>489</a>
<a class='no' id='n490' name='n490' href='#n490'>490</a>
<a class='no' id='n491' name='n491' href='#n491'>491</a>
<a class='no' id='n492' name='n492' href='#n492'>492</a>
<a class='no' id='n493' name='n493' href='#n493'>493</a>
<a class='no' id='n494' name='n494' href='#n494'>494</a>
<a class='no' id='n495' name='n495' href='#n495'>495</a>
<a class='no' id='n496' name='n496' href='#n496'>496</a>
<a class='no' id='n497' name='n497' href='#n497'>497</a>
<a class='no' id='n498' name='n498' href='#n498'>498</a>
<a class='no' id='n499' name='n499' href='#n499'>499</a>
<a class='no' id='n500' name='n500' href='#n500'>500</a>
<a class='no' id='n501' name='n501' href='#n501'>501</a>
<a class='no' id='n502' name='n502' href='#n502'>502</a>
<a class='no' id='n503' name='n503' href='#n503'>503</a>
<a class='no' id='n504' name='n504' href='#n504'>504</a>
<a class='no' id='n505' name='n505' href='#n505'>505</a>
<a class='no' id='n506' name='n506' href='#n506'>506</a>
<a class='no' id='n507' name='n507' href='#n507'>507</a>
<a class='no' id='n508' name='n508' href='#n508'>508</a>
<a class='no' id='n509' name='n509' href='#n509'>509</a>
<a class='no' id='n510' name='n510' href='#n510'>510</a>
<a class='no' id='n511' name='n511' href='#n511'>511</a>
<a class='no' id='n512' name='n512' href='#n512'>512</a>
<a class='no' id='n513' name='n513' href='#n513'>513</a>
<a class='no' id='n514' name='n514' href='#n514'>514</a>
<a class='no' id='n515' name='n515' href='#n515'>515</a>
<a class='no' id='n516' name='n516' href='#n516'>516</a>
<a class='no' id='n517' name='n517' href='#n517'>517</a>
<a class='no' id='n518' name='n518' href='#n518'>518</a>
<a class='no' id='n519' name='n519' href='#n519'>519</a>
<a class='no' id='n520' name='n520' href='#n520'>520</a>
<a class='no' id='n521' name='n521' href='#n521'>521</a>
<a class='no' id='n522' name='n522' href='#n522'>522</a>
<a class='no' id='n523' name='n523' href='#n523'>523</a>
<a class='no' id='n524' name='n524' href='#n524'>524</a>
<a class='no' id='n525' name='n525' href='#n525'>525</a>
<a class='no' id='n526' name='n526' href='#n526'>526</a>
<a class='no' id='n527' name='n527' href='#n527'>527</a>
<a class='no' id='n528' name='n528' href='#n528'>528</a>
<a class='no' id='n529' name='n529' href='#n529'>529</a>
<a class='no' id='n530' name='n530' href='#n530'>530</a>
<a class='no' id='n531' name='n531' href='#n531'>531</a>
<a class='no' id='n532' name='n532' href='#n532'>532</a>
<a class='no' id='n533' name='n533' href='#n533'>533</a>
<a class='no' id='n534' name='n534' href='#n534'>534</a>
<a class='no' id='n535' name='n535' href='#n535'>535</a>
<a class='no' id='n536' name='n536' href='#n536'>536</a>
<a class='no' id='n537' name='n537' href='#n537'>537</a>
<a class='no' id='n538' name='n538' href='#n538'>538</a>
<a class='no' id='n539' name='n539' href='#n539'>539</a>
<a class='no' id='n540' name='n540' href='#n540'>540</a>
<a class='no' id='n541' name='n541' href='#n541'>541</a>
<a class='no' id='n542' name='n542' href='#n542'>542</a>
<a class='no' id='n543' name='n543' href='#n543'>543</a>
<a class='no' id='n544' name='n544' href='#n544'>544</a>
<a class='no' id='n545' name='n545' href='#n545'>545</a>
<a class='no' id='n546' name='n546' href='#n546'>546</a>
<a class='no' id='n547' name='n547' href='#n547'>547</a>
<a class='no' id='n548' name='n548' href='#n548'>548</a>
<a class='no' id='n549' name='n549' href='#n549'>549</a>
<a class='no' id='n550' name='n550' href='#n550'>550</a>
<a class='no' id='n551' name='n551' href='#n551'>551</a>
<a class='no' id='n552' name='n552' href='#n552'>552</a>
<a class='no' id='n553' name='n553' href='#n553'>553</a>
<a class='no' id='n554' name='n554' href='#n554'>554</a>
<a class='no' id='n555' name='n555' href='#n555'>555</a>
<a class='no' id='n556' name='n556' href='#n556'>556</a>
<a class='no' id='n557' name='n557' href='#n557'>557</a>
<a class='no' id='n558' name='n558' href='#n558'>558</a>
<a class='no' id='n559' name='n559' href='#n559'>559</a>
<a class='no' id='n560' name='n560' href='#n560'>560</a>
<a class='no' id='n561' name='n561' href='#n561'>561</a>
<a class='no' id='n562' name='n562' href='#n562'>562</a>
<a class='no' id='n563' name='n563' href='#n563'>563</a>
<a class='no' id='n564' name='n564' href='#n564'>564</a>
<a class='no' id='n565' name='n565' href='#n565'>565</a>
<a class='no' id='n566' name='n566' href='#n566'>566</a>
<a class='no' id='n567' name='n567' href='#n567'>567</a>
<a class='no' id='n568' name='n568' href='#n568'>568</a>
<a class='no' id='n569' name='n569' href='#n569'>569</a>
<a class='no' id='n570' name='n570' href='#n570'>570</a>
<a class='no' id='n571' name='n571' href='#n571'>571</a>
<a class='no' id='n572' name='n572' href='#n572'>572</a>
<a class='no' id='n573' name='n573' href='#n573'>573</a>
<a class='no' id='n574' name='n574' href='#n574'>574</a>
<a class='no' id='n575' name='n575' href='#n575'>575</a>
<a class='no' id='n576' name='n576' href='#n576'>576</a>
<a class='no' id='n577' name='n577' href='#n577'>577</a>
<a class='no' id='n578' name='n578' href='#n578'>578</a>
<a class='no' id='n579' name='n579' href='#n579'>579</a>
<a class='no' id='n580' name='n580' href='#n580'>580</a>
<a class='no' id='n581' name='n581' href='#n581'>581</a>
<a class='no' id='n582' name='n582' href='#n582'>582</a>
<a class='no' id='n583' name='n583' href='#n583'>583</a>
<a class='no' id='n584' name='n584' href='#n584'>584</a>
<a class='no' id='n585' name='n585' href='#n585'>585</a>
<a class='no' id='n586' name='n586' href='#n586'>586</a>
<a class='no' id='n587' name='n587' href='#n587'>587</a>
<a class='no' id='n588' name='n588' href='#n588'>588</a>
<a class='no' id='n589' name='n589' href='#n589'>589</a>
<a class='no' id='n590' name='n590' href='#n590'>590</a>
<a class='no' id='n591' name='n591' href='#n591'>591</a>
<a class='no' id='n592' name='n592' href='#n592'>592</a>
<a class='no' id='n593' name='n593' href='#n593'>593</a>
<a class='no' id='n594' name='n594' href='#n594'>594</a>
<a class='no' id='n595' name='n595' href='#n595'>595</a>
<a class='no' id='n596' name='n596' href='#n596'>596</a>
<a class='no' id='n597' name='n597' href='#n597'>597</a>
<a class='no' id='n598' name='n598' href='#n598'>598</a>
<a class='no' id='n599' name='n599' href='#n599'>599</a>
<a class='no' id='n600' name='n600' href='#n600'>600</a>
<a class='no' id='n601' name='n601' href='#n601'>601</a>
<a class='no' id='n602' name='n602' href='#n602'>602</a>
<a class='no' id='n603' name='n603' href='#n603'>603</a>
<a class='no' id='n604' name='n604' href='#n604'>604</a>
<a class='no' id='n605' name='n605' href='#n605'>605</a>
<a class='no' id='n606' name='n606' href='#n606'>606</a>
<a class='no' id='n607' name='n607' href='#n607'>607</a>
<a class='no' id='n608' name='n608' href='#n608'>608</a>
<a class='no' id='n609' name='n609' href='#n609'>609</a>
<a class='no' id='n610' name='n610' href='#n610'>610</a>
<a class='no' id='n611' name='n611' href='#n611'>611</a>
<a class='no' id='n612' name='n612' href='#n612'>612</a>
<a class='no' id='n613' name='n613' href='#n613'>613</a>
<a class='no' id='n614' name='n614' href='#n614'>614</a>
<a class='no' id='n615' name='n615' href='#n615'>615</a>
<a class='no' id='n616' name='n616' href='#n616'>616</a>
<a class='no' id='n617' name='n617' href='#n617'>617</a>
<a class='no' id='n618' name='n618' href='#n618'>618</a>
<a class='no' id='n619' name='n619' href='#n619'>619</a>
<a class='no' id='n620' name='n620' href='#n620'>620</a>
<a class='no' id='n621' name='n621' href='#n621'>621</a>
<a class='no' id='n622' name='n622' href='#n622'>622</a>
<a class='no' id='n623' name='n623' href='#n623'>623</a>
<a class='no' id='n624' name='n624' href='#n624'>624</a>
<a class='no' id='n625' name='n625' href='#n625'>625</a>
<a class='no' id='n626' name='n626' href='#n626'>626</a>
<a class='no' id='n627' name='n627' href='#n627'>627</a>
<a class='no' id='n628' name='n628' href='#n628'>628</a>
<a class='no' id='n629' name='n629' href='#n629'>629</a>
<a class='no' id='n630' name='n630' href='#n630'>630</a>
<a class='no' id='n631' name='n631' href='#n631'>631</a>
<a class='no' id='n632' name='n632' href='#n632'>632</a>
<a class='no' id='n633' name='n633' href='#n633'>633</a>
<a class='no' id='n634' name='n634' href='#n634'>634</a>
<a class='no' id='n635' name='n635' href='#n635'>635</a>
<a class='no' id='n636' name='n636' href='#n636'>636</a>
<a class='no' id='n637' name='n637' href='#n637'>637</a>
<a class='no' id='n638' name='n638' href='#n638'>638</a>
<a class='no' id='n639' name='n639' href='#n639'>639</a>
<a class='no' id='n640' name='n640' href='#n640'>640</a>
<a class='no' id='n641' name='n641' href='#n641'>641</a>
<a class='no' id='n642' name='n642' href='#n642'>642</a>
<a class='no' id='n643' name='n643' href='#n643'>643</a>
<a class='no' id='n644' name='n644' href='#n644'>644</a>
<a class='no' id='n645' name='n645' href='#n645'>645</a>
<a class='no' id='n646' name='n646' href='#n646'>646</a>
<a class='no' id='n647' name='n647' href='#n647'>647</a>
<a class='no' id='n648' name='n648' href='#n648'>648</a>
<a class='no' id='n649' name='n649' href='#n649'>649</a>
<a class='no' id='n650' name='n650' href='#n650'>650</a>
<a class='no' id='n651' name='n651' href='#n651'>651</a>
<a class='no' id='n652' name='n652' href='#n652'>652</a>
<a class='no' id='n653' name='n653' href='#n653'>653</a>
<a class='no' id='n654' name='n654' href='#n654'>654</a>
<a class='no' id='n655' name='n655' href='#n655'>655</a>
<a class='no' id='n656' name='n656' href='#n656'>656</a>
<a class='no' id='n657' name='n657' href='#n657'>657</a>
<a class='no' id='n658' name='n658' href='#n658'>658</a>
<a class='no' id='n659' name='n659' href='#n659'>659</a>
<a class='no' id='n660' name='n660' href='#n660'>660</a>
<a class='no' id='n661' name='n661' href='#n661'>661</a>
<a class='no' id='n662' name='n662' href='#n662'>662</a>
<a class='no' id='n663' name='n663' href='#n663'>663</a>
<a class='no' id='n664' name='n664' href='#n664'>664</a>
<a class='no' id='n665' name='n665' href='#n665'>665</a>
<a class='no' id='n666' name='n666' href='#n666'>666</a>
<a class='no' id='n667' name='n667' href='#n667'>667</a>
<a class='no' id='n668' name='n668' href='#n668'>668</a>
<a class='no' id='n669' name='n669' href='#n669'>669</a>
<a class='no' id='n670' name='n670' href='#n670'>670</a>
<a class='no' id='n671' name='n671' href='#n671'>671</a>
<a class='no' id='n672' name='n672' href='#n672'>672</a>
<a class='no' id='n673' name='n673' href='#n673'>673</a>
<a class='no' id='n674' name='n674' href='#n674'>674</a>
<a class='no' id='n675' name='n675' href='#n675'>675</a>
<a class='no' id='n676' name='n676' href='#n676'>676</a>
<a class='no' id='n677' name='n677' href='#n677'>677</a>
<a class='no' id='n678' name='n678' href='#n678'>678</a>
<a class='no' id='n679' name='n679' href='#n679'>679</a>
<a class='no' id='n680' name='n680' href='#n680'>680</a>
<a class='no' id='n681' name='n681' href='#n681'>681</a>
<a class='no' id='n682' name='n682' href='#n682'>682</a>
<a class='no' id='n683' name='n683' href='#n683'>683</a>
<a class='no' id='n684' name='n684' href='#n684'>684</a>
<a class='no' id='n685' name='n685' href='#n685'>685</a>
<a class='no' id='n686' name='n686' href='#n686'>686</a>
<a class='no' id='n687' name='n687' href='#n687'>687</a>
<a class='no' id='n688' name='n688' href='#n688'>688</a>
<a class='no' id='n689' name='n689' href='#n689'>689</a>
<a class='no' id='n690' name='n690' href='#n690'>690</a>
<a class='no' id='n691' name='n691' href='#n691'>691</a>
<a class='no' id='n692' name='n692' href='#n692'>692</a>
<a class='no' id='n693' name='n693' href='#n693'>693</a>
<a class='no' id='n694' name='n694' href='#n694'>694</a>
<a class='no' id='n695' name='n695' href='#n695'>695</a>
<a class='no' id='n696' name='n696' href='#n696'>696</a>
<a class='no' id='n697' name='n697' href='#n697'>697</a>
<a class='no' id='n698' name='n698' href='#n698'>698</a>
<a class='no' id='n699' name='n699' href='#n699'>699</a>
<a class='no' id='n700' name='n700' href='#n700'>700</a>
<a class='no' id='n701' name='n701' href='#n701'>701</a>
<a class='no' id='n702' name='n702' href='#n702'>702</a>
<a class='no' id='n703' name='n703' href='#n703'>703</a>
<a class='no' id='n704' name='n704' href='#n704'>704</a>
<a class='no' id='n705' name='n705' href='#n705'>705</a>
<a class='no' id='n706' name='n706' href='#n706'>706</a>
<a class='no' id='n707' name='n707' href='#n707'>707</a>
<a class='no' id='n708' name='n708' href='#n708'>708</a>
<a class='no' id='n709' name='n709' href='#n709'>709</a>
<a class='no' id='n710' name='n710' href='#n710'>710</a>
<a class='no' id='n711' name='n711' href='#n711'>711</a>
<a class='no' id='n712' name='n712' href='#n712'>712</a>
<a class='no' id='n713' name='n713' href='#n713'>713</a>
<a class='no' id='n714' name='n714' href='#n714'>714</a>
<a class='no' id='n715' name='n715' href='#n715'>715</a>
<a class='no' id='n716' name='n716' href='#n716'>716</a>
<a class='no' id='n717' name='n717' href='#n717'>717</a>
<a class='no' id='n718' name='n718' href='#n718'>718</a>
<a class='no' id='n719' name='n719' href='#n719'>719</a>
<a class='no' id='n720' name='n720' href='#n720'>720</a>
<a class='no' id='n721' name='n721' href='#n721'>721</a>
<a class='no' id='n722' name='n722' href='#n722'>722</a>
<a class='no' id='n723' name='n723' href='#n723'>723</a>
<a class='no' id='n724' name='n724' href='#n724'>724</a>
<a class='no' id='n725' name='n725' href='#n725'>725</a>
<a class='no' id='n726' name='n726' href='#n726'>726</a>
<a class='no' id='n727' name='n727' href='#n727'>727</a>
<a class='no' id='n728' name='n728' href='#n728'>728</a>
<a class='no' id='n729' name='n729' href='#n729'>729</a>
<a class='no' id='n730' name='n730' href='#n730'>730</a>
<a class='no' id='n731' name='n731' href='#n731'>731</a>
<a class='no' id='n732' name='n732' href='#n732'>732</a>
<a class='no' id='n733' name='n733' href='#n733'>733</a>
<a class='no' id='n734' name='n734' href='#n734'>734</a>
<a class='no' id='n735' name='n735' href='#n735'>735</a>
<a class='no' id='n736' name='n736' href='#n736'>736</a>
<a class='no' id='n737' name='n737' href='#n737'>737</a>
<a class='no' id='n738' name='n738' href='#n738'>738</a>
<a class='no' id='n739' name='n739' href='#n739'>739</a>
<a class='no' id='n740' name='n740' href='#n740'>740</a>
<a class='no' id='n741' name='n741' href='#n741'>741</a>
<a class='no' id='n742' name='n742' href='#n742'>742</a>
<a class='no' id='n743' name='n743' href='#n743'>743</a>
<a class='no' id='n744' name='n744' href='#n744'>744</a>
<a class='no' id='n745' name='n745' href='#n745'>745</a>
<a class='no' id='n746' name='n746' href='#n746'>746</a>
<a class='no' id='n747' name='n747' href='#n747'>747</a>
<a class='no' id='n748' name='n748' href='#n748'>748</a>
<a class='no' id='n749' name='n749' href='#n749'>749</a>
<a class='no' id='n750' name='n750' href='#n750'>750</a>
<a class='no' id='n751' name='n751' href='#n751'>751</a>
<a class='no' id='n752' name='n752' href='#n752'>752</a>
<a class='no' id='n753' name='n753' href='#n753'>753</a>
<a class='no' id='n754' name='n754' href='#n754'>754</a>
<a class='no' id='n755' name='n755' href='#n755'>755</a>
<a class='no' id='n756' name='n756' href='#n756'>756</a>
<a class='no' id='n757' name='n757' href='#n757'>757</a>
<a class='no' id='n758' name='n758' href='#n758'>758</a>
<a class='no' id='n759' name='n759' href='#n759'>759</a>
<a class='no' id='n760' name='n760' href='#n760'>760</a>
<a class='no' id='n761' name='n761' href='#n761'>761</a>
<a class='no' id='n762' name='n762' href='#n762'>762</a>
<a class='no' id='n763' name='n763' href='#n763'>763</a>
<a class='no' id='n764' name='n764' href='#n764'>764</a>
<a class='no' id='n765' name='n765' href='#n765'>765</a>
<a class='no' id='n766' name='n766' href='#n766'>766</a>
<a class='no' id='n767' name='n767' href='#n767'>767</a>
<a class='no' id='n768' name='n768' href='#n768'>768</a>
<a class='no' id='n769' name='n769' href='#n769'>769</a>
<a class='no' id='n770' name='n770' href='#n770'>770</a>
<a class='no' id='n771' name='n771' href='#n771'>771</a>
<a class='no' id='n772' name='n772' href='#n772'>772</a>
<a class='no' id='n773' name='n773' href='#n773'>773</a>
<a class='no' id='n774' name='n774' href='#n774'>774</a>
<a class='no' id='n775' name='n775' href='#n775'>775</a>
<a class='no' id='n776' name='n776' href='#n776'>776</a>
<a class='no' id='n777' name='n777' href='#n777'>777</a>
<a class='no' id='n778' name='n778' href='#n778'>778</a>
<a class='no' id='n779' name='n779' href='#n779'>779</a>
<a class='no' id='n780' name='n780' href='#n780'>780</a>
<a class='no' id='n781' name='n781' href='#n781'>781</a>
<a class='no' id='n782' name='n782' href='#n782'>782</a>
<a class='no' id='n783' name='n783' href='#n783'>783</a>
<a class='no' id='n784' name='n784' href='#n784'>784</a>
<a class='no' id='n785' name='n785' href='#n785'>785</a>
<a class='no' id='n786' name='n786' href='#n786'>786</a>
<a class='no' id='n787' name='n787' href='#n787'>787</a>
<a class='no' id='n788' name='n788' href='#n788'>788</a>
<a class='no' id='n789' name='n789' href='#n789'>789</a>
<a class='no' id='n790' name='n790' href='#n790'>790</a>
<a class='no' id='n791' name='n791' href='#n791'>791</a>
<a class='no' id='n792' name='n792' href='#n792'>792</a>
<a class='no' id='n793' name='n793' href='#n793'>793</a>
<a class='no' id='n794' name='n794' href='#n794'>794</a>
<a class='no' id='n795' name='n795' href='#n795'>795</a>
<a class='no' id='n796' name='n796' href='#n796'>796</a>
<a class='no' id='n797' name='n797' href='#n797'>797</a>
<a class='no' id='n798' name='n798' href='#n798'>798</a>
<a class='no' id='n799' name='n799' href='#n799'>799</a>
<a class='no' id='n800' name='n800' href='#n800'>800</a>
<a class='no' id='n801' name='n801' href='#n801'>801</a>
<a class='no' id='n802' name='n802' href='#n802'>802</a>
<a class='no' id='n803' name='n803' href='#n803'>803</a>
<a class='no' id='n804' name='n804' href='#n804'>804</a>
<a class='no' id='n805' name='n805' href='#n805'>805</a>
<a class='no' id='n806' name='n806' href='#n806'>806</a>
<a class='no' id='n807' name='n807' href='#n807'>807</a>
<a class='no' id='n808' name='n808' href='#n808'>808</a>
<a class='no' id='n809' name='n809' href='#n809'>809</a>
<a class='no' id='n810' name='n810' href='#n810'>810</a>
<a class='no' id='n811' name='n811' href='#n811'>811</a>
<a class='no' id='n812' name='n812' href='#n812'>812</a>
<a class='no' id='n813' name='n813' href='#n813'>813</a>
<a class='no' id='n814' name='n814' href='#n814'>814</a>
<a class='no' id='n815' name='n815' href='#n815'>815</a>
<a class='no' id='n816' name='n816' href='#n816'>816</a>
<a class='no' id='n817' name='n817' href='#n817'>817</a>
<a class='no' id='n818' name='n818' href='#n818'>818</a>
<a class='no' id='n819' name='n819' href='#n819'>819</a>
<a class='no' id='n820' name='n820' href='#n820'>820</a>
<a class='no' id='n821' name='n821' href='#n821'>821</a>
<a class='no' id='n822' name='n822' href='#n822'>822</a>
<a class='no' id='n823' name='n823' href='#n823'>823</a>
<a class='no' id='n824' name='n824' href='#n824'>824</a>
<a class='no' id='n825' name='n825' href='#n825'>825</a>
<a class='no' id='n826' name='n826' href='#n826'>826</a>
<a class='no' id='n827' name='n827' href='#n827'>827</a>
<a class='no' id='n828' name='n828' href='#n828'>828</a>
<a class='no' id='n829' name='n829' href='#n829'>829</a>
<a class='no' id='n830' name='n830' href='#n830'>830</a>
<a class='no' id='n831' name='n831' href='#n831'>831</a>
<a class='no' id='n832' name='n832' href='#n832'>832</a>
<a class='no' id='n833' name='n833' href='#n833'>833</a>
<a class='no' id='n834' name='n834' href='#n834'>834</a>
<a class='no' id='n835' name='n835' href='#n835'>835</a>
<a class='no' id='n836' name='n836' href='#n836'>836</a>
<a class='no' id='n837' name='n837' href='#n837'>837</a>
<a class='no' id='n838' name='n838' href='#n838'>838</a>
<a class='no' id='n839' name='n839' href='#n839'>839</a>
<a class='no' id='n840' name='n840' href='#n840'>840</a>
<a class='no' id='n841' name='n841' href='#n841'>841</a>
<a class='no' id='n842' name='n842' href='#n842'>842</a>
<a class='no' id='n843' name='n843' href='#n843'>843</a>
<a class='no' id='n844' name='n844' href='#n844'>844</a>
<a class='no' id='n845' name='n845' href='#n845'>845</a>
<a class='no' id='n846' name='n846' href='#n846'>846</a>
<a class='no' id='n847' name='n847' href='#n847'>847</a>
<a class='no' id='n848' name='n848' href='#n848'>848</a>
<a class='no' id='n849' name='n849' href='#n849'>849</a>
<a class='no' id='n850' name='n850' href='#n850'>850</a>
<a class='no' id='n851' name='n851' href='#n851'>851</a>
<a class='no' id='n852' name='n852' href='#n852'>852</a>
<a class='no' id='n853' name='n853' href='#n853'>853</a>
<a class='no' id='n854' name='n854' href='#n854'>854</a>
<a class='no' id='n855' name='n855' href='#n855'>855</a>
<a class='no' id='n856' name='n856' href='#n856'>856</a>
<a class='no' id='n857' name='n857' href='#n857'>857</a>
<a class='no' id='n858' name='n858' href='#n858'>858</a>
<a class='no' id='n859' name='n859' href='#n859'>859</a>
<a class='no' id='n860' name='n860' href='#n860'>860</a>
<a class='no' id='n861' name='n861' href='#n861'>861</a>
<a class='no' id='n862' name='n862' href='#n862'>862</a>
<a class='no' id='n863' name='n863' href='#n863'>863</a>
<a class='no' id='n864' name='n864' href='#n864'>864</a>
<a class='no' id='n865' name='n865' href='#n865'>865</a>
<a class='no' id='n866' name='n866' href='#n866'>866</a>
<a class='no' id='n867' name='n867' href='#n867'>867</a>
<a class='no' id='n868' name='n868' href='#n868'>868</a>
<a class='no' id='n869' name='n869' href='#n869'>869</a>
<a class='no' id='n870' name='n870' href='#n870'>870</a>
<a class='no' id='n871' name='n871' href='#n871'>871</a>
<a class='no' id='n872' name='n872' href='#n872'>872</a>
<a class='no' id='n873' name='n873' href='#n873'>873</a>
<a class='no' id='n874' name='n874' href='#n874'>874</a>
<a class='no' id='n875' name='n875' href='#n875'>875</a>
<a class='no' id='n876' name='n876' href='#n876'>876</a>
<a class='no' id='n877' name='n877' href='#n877'>877</a>
<a class='no' id='n878' name='n878' href='#n878'>878</a>
<a class='no' id='n879' name='n879' href='#n879'>879</a>
<a class='no' id='n880' name='n880' href='#n880'>880</a>
<a class='no' id='n881' name='n881' href='#n881'>881</a>
<a class='no' id='n882' name='n882' href='#n882'>882</a>
<a class='no' id='n883' name='n883' href='#n883'>883</a>
<a class='no' id='n884' name='n884' href='#n884'>884</a>
<a class='no' id='n885' name='n885' href='#n885'>885</a>
<a class='no' id='n886' name='n886' href='#n886'>886</a>
<a class='no' id='n887' name='n887' href='#n887'>887</a>
<a class='no' id='n888' name='n888' href='#n888'>888</a>
<a class='no' id='n889' name='n889' href='#n889'>889</a>
<a class='no' id='n890' name='n890' href='#n890'>890</a>
<a class='no' id='n891' name='n891' href='#n891'>891</a>
<a class='no' id='n892' name='n892' href='#n892'>892</a>
<a class='no' id='n893' name='n893' href='#n893'>893</a>
<a class='no' id='n894' name='n894' href='#n894'>894</a>
<a class='no' id='n895' name='n895' href='#n895'>895</a>
<a class='no' id='n896' name='n896' href='#n896'>896</a>
<a class='no' id='n897' name='n897' href='#n897'>897</a>
<a class='no' id='n898' name='n898' href='#n898'>898</a>
<a class='no' id='n899' name='n899' href='#n899'>899</a>
<a class='no' id='n900' name='n900' href='#n900'>900</a>
<a class='no' id='n901' name='n901' href='#n901'>901</a>
<a class='no' id='n902' name='n902' href='#n902'>902</a>
<a class='no' id='n903' name='n903' href='#n903'>903</a>
<a class='no' id='n904' name='n904' href='#n904'>904</a>
<a class='no' id='n905' name='n905' href='#n905'>905</a>
<a class='no' id='n906' name='n906' href='#n906'>906</a>
<a class='no' id='n907' name='n907' href='#n907'>907</a>
<a class='no' id='n908' name='n908' href='#n908'>908</a>
<a class='no' id='n909' name='n909' href='#n909'>909</a>
<a class='no' id='n910' name='n910' href='#n910'>910</a>
<a class='no' id='n911' name='n911' href='#n911'>911</a>
<a class='no' id='n912' name='n912' href='#n912'>912</a>
<a class='no' id='n913' name='n913' href='#n913'>913</a>
<a class='no' id='n914' name='n914' href='#n914'>914</a>
<a class='no' id='n915' name='n915' href='#n915'>915</a>
<a class='no' id='n916' name='n916' href='#n916'>916</a>
<a class='no' id='n917' name='n917' href='#n917'>917</a>
<a class='no' id='n918' name='n918' href='#n918'>918</a>
<a class='no' id='n919' name='n919' href='#n919'>919</a>
<a class='no' id='n920' name='n920' href='#n920'>920</a>
<a class='no' id='n921' name='n921' href='#n921'>921</a>
<a class='no' id='n922' name='n922' href='#n922'>922</a>
<a class='no' id='n923' name='n923' href='#n923'>923</a>
<a class='no' id='n924' name='n924' href='#n924'>924</a>
<a class='no' id='n925' name='n925' href='#n925'>925</a>
<a class='no' id='n926' name='n926' href='#n926'>926</a>
<a class='no' id='n927' name='n927' href='#n927'>927</a>
<a class='no' id='n928' name='n928' href='#n928'>928</a>
<a class='no' id='n929' name='n929' href='#n929'>929</a>
<a class='no' id='n930' name='n930' href='#n930'>930</a>
<a class='no' id='n931' name='n931' href='#n931'>931</a>
<a class='no' id='n932' name='n932' href='#n932'>932</a>
<a class='no' id='n933' name='n933' href='#n933'>933</a>
<a class='no' id='n934' name='n934' href='#n934'>934</a>
<a class='no' id='n935' name='n935' href='#n935'>935</a>
<a class='no' id='n936' name='n936' href='#n936'>936</a>
<a class='no' id='n937' name='n937' href='#n937'>937</a>
<a class='no' id='n938' name='n938' href='#n938'>938</a>
<a class='no' id='n939' name='n939' href='#n939'>939</a>
<a class='no' id='n940' name='n940' href='#n940'>940</a>
<a class='no' id='n941' name='n941' href='#n941'>941</a>
<a class='no' id='n942' name='n942' href='#n942'>942</a>
<a class='no' id='n943' name='n943' href='#n943'>943</a>
<a class='no' id='n944' name='n944' href='#n944'>944</a>
<a class='no' id='n945' name='n945' href='#n945'>945</a>
<a class='no' id='n946' name='n946' href='#n946'>946</a>
<a class='no' id='n947' name='n947' href='#n947'>947</a>
<a class='no' id='n948' name='n948' href='#n948'>948</a>
<a class='no' id='n949' name='n949' href='#n949'>949</a>
<a class='no' id='n950' name='n950' href='#n950'>950</a>
<a class='no' id='n951' name='n951' href='#n951'>951</a>
<a class='no' id='n952' name='n952' href='#n952'>952</a>
<a class='no' id='n953' name='n953' href='#n953'>953</a>
<a class='no' id='n954' name='n954' href='#n954'>954</a>
<a class='no' id='n955' name='n955' href='#n955'>955</a>
<a class='no' id='n956' name='n956' href='#n956'>956</a>
<a class='no' id='n957' name='n957' href='#n957'>957</a>
<a class='no' id='n958' name='n958' href='#n958'>958</a>
<a class='no' id='n959' name='n959' href='#n959'>959</a>
<a class='no' id='n960' name='n960' href='#n960'>960</a>
<a class='no' id='n961' name='n961' href='#n961'>961</a>
<a class='no' id='n962' name='n962' href='#n962'>962</a>
<a class='no' id='n963' name='n963' href='#n963'>963</a>
<a class='no' id='n964' name='n964' href='#n964'>964</a>
<a class='no' id='n965' name='n965' href='#n965'>965</a>
<a class='no' id='n966' name='n966' href='#n966'>966</a>
<a class='no' id='n967' name='n967' href='#n967'>967</a>
<a class='no' id='n968' name='n968' href='#n968'>968</a>
<a class='no' id='n969' name='n969' href='#n969'>969</a>
<a class='no' id='n970' name='n970' href='#n970'>970</a>
<a class='no' id='n971' name='n971' href='#n971'>971</a>
<a class='no' id='n972' name='n972' href='#n972'>972</a>
<a class='no' id='n973' name='n973' href='#n973'>973</a>
<a class='no' id='n974' name='n974' href='#n974'>974</a>
<a class='no' id='n975' name='n975' href='#n975'>975</a>
<a class='no' id='n976' name='n976' href='#n976'>976</a>
<a class='no' id='n977' name='n977' href='#n977'>977</a>
<a class='no' id='n978' name='n978' href='#n978'>978</a>
<a class='no' id='n979' name='n979' href='#n979'>979</a>
<a class='no' id='n980' name='n980' href='#n980'>980</a>
<a class='no' id='n981' name='n981' href='#n981'>981</a>
<a class='no' id='n982' name='n982' href='#n982'>982</a>
<a class='no' id='n983' name='n983' href='#n983'>983</a>
<a class='no' id='n984' name='n984' href='#n984'>984</a>
<a class='no' id='n985' name='n985' href='#n985'>985</a>
<a class='no' id='n986' name='n986' href='#n986'>986</a>
<a class='no' id='n987' name='n987' href='#n987'>987</a>
<a class='no' id='n988' name='n988' href='#n988'>988</a>
<a class='no' id='n989' name='n989' href='#n989'>989</a>
<a class='no' id='n990' name='n990' href='#n990'>990</a>
<a class='no' id='n991' name='n991' href='#n991'>991</a>
<a class='no' id='n992' name='n992' href='#n992'>992</a>
<a class='no' id='n993' name='n993' href='#n993'>993</a>
<a class='no' id='n994' name='n994' href='#n994'>994</a>
<a class='no' id='n995' name='n995' href='#n995'>995</a>
<a class='no' id='n996' name='n996' href='#n996'>996</a>
<a class='no' id='n997' name='n997' href='#n997'>997</a>
<a class='no' id='n998' name='n998' href='#n998'>998</a>
<a class='no' id='n999' name='n999' href='#n999'>999</a>
<a class='no' id='n1000' name='n1000' href='#n1000'>1000</a>
<a class='no' id='n1001' name='n1001' href='#n1001'>1001</a>
<a class='no' id='n1002' name='n1002' href='#n1002'>1002</a>
<a class='no' id='n1003' name='n1003' href='#n1003'>1003</a>
<a class='no' id='n1004' name='n1004' href='#n1004'>1004</a>
<a class='no' id='n1005' name='n1005' href='#n1005'>1005</a>
<a class='no' id='n1006' name='n1006' href='#n1006'>1006</a>
<a class='no' id='n1007' name='n1007' href='#n1007'>1007</a>
<a class='no' id='n1008' name='n1008' href='#n1008'>1008</a>
<a class='no' id='n1009' name='n1009' href='#n1009'>1009</a>
<a class='no' id='n1010' name='n1010' href='#n1010'>1010</a>
<a class='no' id='n1011' name='n1011' href='#n1011'>1011</a>
<a class='no' id='n1012' name='n1012' href='#n1012'>1012</a>
<a class='no' id='n1013' name='n1013' href='#n1013'>1013</a>
<a class='no' id='n1014' name='n1014' href='#n1014'>1014</a>
<a class='no' id='n1015' name='n1015' href='#n1015'>1015</a>
<a class='no' id='n1016' name='n1016' href='#n1016'>1016</a>
<a class='no' id='n1017' name='n1017' href='#n1017'>1017</a>
<a class='no' id='n1018' name='n1018' href='#n1018'>1018</a>
<a class='no' id='n1019' name='n1019' href='#n1019'>1019</a>
<a class='no' id='n1020' name='n1020' href='#n1020'>1020</a>
<a class='no' id='n1021' name='n1021' href='#n1021'>1021</a>
<a class='no' id='n1022' name='n1022' href='#n1022'>1022</a>
<a class='no' id='n1023' name='n1023' href='#n1023'>1023</a>
<a class='no' id='n1024' name='n1024' href='#n1024'>1024</a>
<a class='no' id='n1025' name='n1025' href='#n1025'>1025</a>
<a class='no' id='n1026' name='n1026' href='#n1026'>1026</a>
<a class='no' id='n1027' name='n1027' href='#n1027'>1027</a>
<a class='no' id='n1028' name='n1028' href='#n1028'>1028</a>
<a class='no' id='n1029' name='n1029' href='#n1029'>1029</a>
<a class='no' id='n1030' name='n1030' href='#n1030'>1030</a>
<a class='no' id='n1031' name='n1031' href='#n1031'>1031</a>
<a class='no' id='n1032' name='n1032' href='#n1032'>1032</a>
<a class='no' id='n1033' name='n1033' href='#n1033'>1033</a>
<a class='no' id='n1034' name='n1034' href='#n1034'>1034</a>
<a class='no' id='n1035' name='n1035' href='#n1035'>1035</a>
<a class='no' id='n1036' name='n1036' href='#n1036'>1036</a>
<a class='no' id='n1037' name='n1037' href='#n1037'>1037</a>
<a class='no' id='n1038' name='n1038' href='#n1038'>1038</a>
<a class='no' id='n1039' name='n1039' href='#n1039'>1039</a>
<a class='no' id='n1040' name='n1040' href='#n1040'>1040</a>
<a class='no' id='n1041' name='n1041' href='#n1041'>1041</a>
<a class='no' id='n1042' name='n1042' href='#n1042'>1042</a>
<a class='no' id='n1043' name='n1043' href='#n1043'>1043</a>
<a class='no' id='n1044' name='n1044' href='#n1044'>1044</a>
<a class='no' id='n1045' name='n1045' href='#n1045'>1045</a>
<a class='no' id='n1046' name='n1046' href='#n1046'>1046</a>
<a class='no' id='n1047' name='n1047' href='#n1047'>1047</a>
<a class='no' id='n1048' name='n1048' href='#n1048'>1048</a>
<a class='no' id='n1049' name='n1049' href='#n1049'>1049</a>
<a class='no' id='n1050' name='n1050' href='#n1050'>1050</a>
<a class='no' id='n1051' name='n1051' href='#n1051'>1051</a>
<a class='no' id='n1052' name='n1052' href='#n1052'>1052</a>
<a class='no' id='n1053' name='n1053' href='#n1053'>1053</a>
<a class='no' id='n1054' name='n1054' href='#n1054'>1054</a>
<a class='no' id='n1055' name='n1055' href='#n1055'>1055</a>
<a class='no' id='n1056' name='n1056' href='#n1056'>1056</a>
<a class='no' id='n1057' name='n1057' href='#n1057'>1057</a>
<a class='no' id='n1058' name='n1058' href='#n1058'>1058</a>
<a class='no' id='n1059' name='n1059' href='#n1059'>1059</a>
<a class='no' id='n1060' name='n1060' href='#n1060'>1060</a>
<a class='no' id='n1061' name='n1061' href='#n1061'>1061</a>
<a class='no' id='n1062' name='n1062' href='#n1062'>1062</a>
<a class='no' id='n1063' name='n1063' href='#n1063'>1063</a>
<a class='no' id='n1064' name='n1064' href='#n1064'>1064</a>
<a class='no' id='n1065' name='n1065' href='#n1065'>1065</a>
<a class='no' id='n1066' name='n1066' href='#n1066'>1066</a>
<a class='no' id='n1067' name='n1067' href='#n1067'>1067</a>
<a class='no' id='n1068' name='n1068' href='#n1068'>1068</a>
<a class='no' id='n1069' name='n1069' href='#n1069'>1069</a>
<a class='no' id='n1070' name='n1070' href='#n1070'>1070</a>
<a class='no' id='n1071' name='n1071' href='#n1071'>1071</a>
<a class='no' id='n1072' name='n1072' href='#n1072'>1072</a>
<a class='no' id='n1073' name='n1073' href='#n1073'>1073</a>
<a class='no' id='n1074' name='n1074' href='#n1074'>1074</a>
<a class='no' id='n1075' name='n1075' href='#n1075'>1075</a>
<a class='no' id='n1076' name='n1076' href='#n1076'>1076</a>
<a class='no' id='n1077' name='n1077' href='#n1077'>1077</a>
<a class='no' id='n1078' name='n1078' href='#n1078'>1078</a>
<a class='no' id='n1079' name='n1079' href='#n1079'>1079</a>
<a class='no' id='n1080' name='n1080' href='#n1080'>1080</a>
<a class='no' id='n1081' name='n1081' href='#n1081'>1081</a>
<a class='no' id='n1082' name='n1082' href='#n1082'>1082</a>
<a class='no' id='n1083' name='n1083' href='#n1083'>1083</a>
<a class='no' id='n1084' name='n1084' href='#n1084'>1084</a>
<a class='no' id='n1085' name='n1085' href='#n1085'>1085</a>
<a class='no' id='n1086' name='n1086' href='#n1086'>1086</a>
<a class='no' id='n1087' name='n1087' href='#n1087'>1087</a>
<a class='no' id='n1088' name='n1088' href='#n1088'>1088</a>
<a class='no' id='n1089' name='n1089' href='#n1089'>1089</a>
<a class='no' id='n1090' name='n1090' href='#n1090'>1090</a>
<a class='no' id='n1091' name='n1091' href='#n1091'>1091</a>
<a class='no' id='n1092' name='n1092' href='#n1092'>1092</a>
<a class='no' id='n1093' name='n1093' href='#n1093'>1093</a>
<a class='no' id='n1094' name='n1094' href='#n1094'>1094</a>
<a class='no' id='n1095' name='n1095' href='#n1095'>1095</a>
<a class='no' id='n1096' name='n1096' href='#n1096'>1096</a>
<a class='no' id='n1097' name='n1097' href='#n1097'>1097</a>
<a class='no' id='n1098' name='n1098' href='#n1098'>1098</a>
<a class='no' id='n1099' name='n1099' href='#n1099'>1099</a>
<a class='no' id='n1100' name='n1100' href='#n1100'>1100</a>
<a class='no' id='n1101' name='n1101' href='#n1101'>1101</a>
<a class='no' id='n1102' name='n1102' href='#n1102'>1102</a>
<a class='no' id='n1103' name='n1103' href='#n1103'>1103</a>
<a class='no' id='n1104' name='n1104' href='#n1104'>1104</a>
<a class='no' id='n1105' name='n1105' href='#n1105'>1105</a>
<a class='no' id='n1106' name='n1106' href='#n1106'>1106</a>
<a class='no' id='n1107' name='n1107' href='#n1107'>1107</a>
<a class='no' id='n1108' name='n1108' href='#n1108'>1108</a>
<a class='no' id='n1109' name='n1109' href='#n1109'>1109</a>
<a class='no' id='n1110' name='n1110' href='#n1110'>1110</a>
<a class='no' id='n1111' name='n1111' href='#n1111'>1111</a>
<a class='no' id='n1112' name='n1112' href='#n1112'>1112</a>
<a class='no' id='n1113' name='n1113' href='#n1113'>1113</a>
<a class='no' id='n1114' name='n1114' href='#n1114'>1114</a>
<a class='no' id='n1115' name='n1115' href='#n1115'>1115</a>
<a class='no' id='n1116' name='n1116' href='#n1116'>1116</a>
<a class='no' id='n1117' name='n1117' href='#n1117'>1117</a>
<a class='no' id='n1118' name='n1118' href='#n1118'>1118</a>
<a class='no' id='n1119' name='n1119' href='#n1119'>1119</a>
<a class='no' id='n1120' name='n1120' href='#n1120'>1120</a>
<a class='no' id='n1121' name='n1121' href='#n1121'>1121</a>
<a class='no' id='n1122' name='n1122' href='#n1122'>1122</a>
<a class='no' id='n1123' name='n1123' href='#n1123'>1123</a>
<a class='no' id='n1124' name='n1124' href='#n1124'>1124</a>
<a class='no' id='n1125' name='n1125' href='#n1125'>1125</a>
<a class='no' id='n1126' name='n1126' href='#n1126'>1126</a>
<a class='no' id='n1127' name='n1127' href='#n1127'>1127</a>
<a class='no' id='n1128' name='n1128' href='#n1128'>1128</a>
<a class='no' id='n1129' name='n1129' href='#n1129'>1129</a>
<a class='no' id='n1130' name='n1130' href='#n1130'>1130</a>
<a class='no' id='n1131' name='n1131' href='#n1131'>1131</a>
<a class='no' id='n1132' name='n1132' href='#n1132'>1132</a>
<a class='no' id='n1133' name='n1133' href='#n1133'>1133</a>
<a class='no' id='n1134' name='n1134' href='#n1134'>1134</a>
<a class='no' id='n1135' name='n1135' href='#n1135'>1135</a>
<a class='no' id='n1136' name='n1136' href='#n1136'>1136</a>
<a class='no' id='n1137' name='n1137' href='#n1137'>1137</a>
<a class='no' id='n1138' name='n1138' href='#n1138'>1138</a>
<a class='no' id='n1139' name='n1139' href='#n1139'>1139</a>
<a class='no' id='n1140' name='n1140' href='#n1140'>1140</a>
<a class='no' id='n1141' name='n1141' href='#n1141'>1141</a>
<a class='no' id='n1142' name='n1142' href='#n1142'>1142</a>
<a class='no' id='n1143' name='n1143' href='#n1143'>1143</a>
<a class='no' id='n1144' name='n1144' href='#n1144'>1144</a>
<a class='no' id='n1145' name='n1145' href='#n1145'>1145</a>
<a class='no' id='n1146' name='n1146' href='#n1146'>1146</a>
<a class='no' id='n1147' name='n1147' href='#n1147'>1147</a>
<a class='no' id='n1148' name='n1148' href='#n1148'>1148</a>
<a class='no' id='n1149' name='n1149' href='#n1149'>1149</a>
<a class='no' id='n1150' name='n1150' href='#n1150'>1150</a>
<a class='no' id='n1151' name='n1151' href='#n1151'>1151</a>
<a class='no' id='n1152' name='n1152' href='#n1152'>1152</a>
<a class='no' id='n1153' name='n1153' href='#n1153'>1153</a>
<a class='no' id='n1154' name='n1154' href='#n1154'>1154</a>
<a class='no' id='n1155' name='n1155' href='#n1155'>1155</a>
<a class='no' id='n1156' name='n1156' href='#n1156'>1156</a>
<a class='no' id='n1157' name='n1157' href='#n1157'>1157</a>
<a class='no' id='n1158' name='n1158' href='#n1158'>1158</a>
<a class='no' id='n1159' name='n1159' href='#n1159'>1159</a>
<a class='no' id='n1160' name='n1160' href='#n1160'>1160</a>
<a class='no' id='n1161' name='n1161' href='#n1161'>1161</a>
<a class='no' id='n1162' name='n1162' href='#n1162'>1162</a>
<a class='no' id='n1163' name='n1163' href='#n1163'>1163</a>
<a class='no' id='n1164' name='n1164' href='#n1164'>1164</a>
<a class='no' id='n1165' name='n1165' href='#n1165'>1165</a>
<a class='no' id='n1166' name='n1166' href='#n1166'>1166</a>
<a class='no' id='n1167' name='n1167' href='#n1167'>1167</a>
<a class='no' id='n1168' name='n1168' href='#n1168'>1168</a>
<a class='no' id='n1169' name='n1169' href='#n1169'>1169</a>
<a class='no' id='n1170' name='n1170' href='#n1170'>1170</a>
<a class='no' id='n1171' name='n1171' href='#n1171'>1171</a>
<a class='no' id='n1172' name='n1172' href='#n1172'>1172</a>
<a class='no' id='n1173' name='n1173' href='#n1173'>1173</a>
<a class='no' id='n1174' name='n1174' href='#n1174'>1174</a>
<a class='no' id='n1175' name='n1175' href='#n1175'>1175</a>
<a class='no' id='n1176' name='n1176' href='#n1176'>1176</a>
<a class='no' id='n1177' name='n1177' href='#n1177'>1177</a>
<a class='no' id='n1178' name='n1178' href='#n1178'>1178</a>
<a class='no' id='n1179' name='n1179' href='#n1179'>1179</a>
<a class='no' id='n1180' name='n1180' href='#n1180'>1180</a>
<a class='no' id='n1181' name='n1181' href='#n1181'>1181</a>
<a class='no' id='n1182' name='n1182' href='#n1182'>1182</a>
<a class='no' id='n1183' name='n1183' href='#n1183'>1183</a>
<a class='no' id='n1184' name='n1184' href='#n1184'>1184</a>
<a class='no' id='n1185' name='n1185' href='#n1185'>1185</a>
<a class='no' id='n1186' name='n1186' href='#n1186'>1186</a>
<a class='no' id='n1187' name='n1187' href='#n1187'>1187</a>
<a class='no' id='n1188' name='n1188' href='#n1188'>1188</a>
<a class='no' id='n1189' name='n1189' href='#n1189'>1189</a>
<a class='no' id='n1190' name='n1190' href='#n1190'>1190</a>
<a class='no' id='n1191' name='n1191' href='#n1191'>1191</a>
<a class='no' id='n1192' name='n1192' href='#n1192'>1192</a>
<a class='no' id='n1193' name='n1193' href='#n1193'>1193</a>
<a class='no' id='n1194' name='n1194' href='#n1194'>1194</a>
<a class='no' id='n1195' name='n1195' href='#n1195'>1195</a>
<a class='no' id='n1196' name='n1196' href='#n1196'>1196</a>
<a class='no' id='n1197' name='n1197' href='#n1197'>1197</a>
<a class='no' id='n1198' name='n1198' href='#n1198'>1198</a>
<a class='no' id='n1199' name='n1199' href='#n1199'>1199</a>
<a class='no' id='n1200' name='n1200' href='#n1200'>1200</a>
<a class='no' id='n1201' name='n1201' href='#n1201'>1201</a>
<a class='no' id='n1202' name='n1202' href='#n1202'>1202</a>
<a class='no' id='n1203' name='n1203' href='#n1203'>1203</a>
<a class='no' id='n1204' name='n1204' href='#n1204'>1204</a>
<a class='no' id='n1205' name='n1205' href='#n1205'>1205</a>
<a class='no' id='n1206' name='n1206' href='#n1206'>1206</a>
<a class='no' id='n1207' name='n1207' href='#n1207'>1207</a>
<a class='no' id='n1208' name='n1208' href='#n1208'>1208</a>
<a class='no' id='n1209' name='n1209' href='#n1209'>1209</a>
<a class='no' id='n1210' name='n1210' href='#n1210'>1210</a>
<a class='no' id='n1211' name='n1211' href='#n1211'>1211</a>
<a class='no' id='n1212' name='n1212' href='#n1212'>1212</a>
<a class='no' id='n1213' name='n1213' href='#n1213'>1213</a>
<a class='no' id='n1214' name='n1214' href='#n1214'>1214</a>
<a class='no' id='n1215' name='n1215' href='#n1215'>1215</a>
<a class='no' id='n1216' name='n1216' href='#n1216'>1216</a>
<a class='no' id='n1217' name='n1217' href='#n1217'>1217</a>
<a class='no' id='n1218' name='n1218' href='#n1218'>1218</a>
<a class='no' id='n1219' name='n1219' href='#n1219'>1219</a>
<a class='no' id='n1220' name='n1220' href='#n1220'>1220</a>
<a class='no' id='n1221' name='n1221' href='#n1221'>1221</a>
<a class='no' id='n1222' name='n1222' href='#n1222'>1222</a>
<a class='no' id='n1223' name='n1223' href='#n1223'>1223</a>
<a class='no' id='n1224' name='n1224' href='#n1224'>1224</a>
<a class='no' id='n1225' name='n1225' href='#n1225'>1225</a>
<a class='no' id='n1226' name='n1226' href='#n1226'>1226</a>
<a class='no' id='n1227' name='n1227' href='#n1227'>1227</a>
<a class='no' id='n1228' name='n1228' href='#n1228'>1228</a>
<a class='no' id='n1229' name='n1229' href='#n1229'>1229</a>
<a class='no' id='n1230' name='n1230' href='#n1230'>1230</a>
<a class='no' id='n1231' name='n1231' href='#n1231'>1231</a>
<a class='no' id='n1232' name='n1232' href='#n1232'>1232</a>
<a class='no' id='n1233' name='n1233' href='#n1233'>1233</a>
<a class='no' id='n1234' name='n1234' href='#n1234'>1234</a>
<a class='no' id='n1235' name='n1235' href='#n1235'>1235</a>
<a class='no' id='n1236' name='n1236' href='#n1236'>1236</a>
<a class='no' id='n1237' name='n1237' href='#n1237'>1237</a>
<a class='no' id='n1238' name='n1238' href='#n1238'>1238</a>
<a class='no' id='n1239' name='n1239' href='#n1239'>1239</a>
<a class='no' id='n1240' name='n1240' href='#n1240'>1240</a>
<a class='no' id='n1241' name='n1241' href='#n1241'>1241</a>
<a class='no' id='n1242' name='n1242' href='#n1242'>1242</a>
<a class='no' id='n1243' name='n1243' href='#n1243'>1243</a>
<a class='no' id='n1244' name='n1244' href='#n1244'>1244</a>
<a class='no' id='n1245' name='n1245' href='#n1245'>1245</a>
<a class='no' id='n1246' name='n1246' href='#n1246'>1246</a>
<a class='no' id='n1247' name='n1247' href='#n1247'>1247</a>
<a class='no' id='n1248' name='n1248' href='#n1248'>1248</a>
<a class='no' id='n1249' name='n1249' href='#n1249'>1249</a>
<a class='no' id='n1250' name='n1250' href='#n1250'>1250</a>
<a class='no' id='n1251' name='n1251' href='#n1251'>1251</a>
<a class='no' id='n1252' name='n1252' href='#n1252'>1252</a>
<a class='no' id='n1253' name='n1253' href='#n1253'>1253</a>
<a class='no' id='n1254' name='n1254' href='#n1254'>1254</a>
<a class='no' id='n1255' name='n1255' href='#n1255'>1255</a>
<a class='no' id='n1256' name='n1256' href='#n1256'>1256</a>
<a class='no' id='n1257' name='n1257' href='#n1257'>1257</a>
<a class='no' id='n1258' name='n1258' href='#n1258'>1258</a>
<a class='no' id='n1259' name='n1259' href='#n1259'>1259</a>
<a class='no' id='n1260' name='n1260' href='#n1260'>1260</a>
<a class='no' id='n1261' name='n1261' href='#n1261'>1261</a>
<a class='no' id='n1262' name='n1262' href='#n1262'>1262</a>
<a class='no' id='n1263' name='n1263' href='#n1263'>1263</a>
<a class='no' id='n1264' name='n1264' href='#n1264'>1264</a>
<a class='no' id='n1265' name='n1265' href='#n1265'>1265</a>
<a class='no' id='n1266' name='n1266' href='#n1266'>1266</a>
<a class='no' id='n1267' name='n1267' href='#n1267'>1267</a>
<a class='no' id='n1268' name='n1268' href='#n1268'>1268</a>
<a class='no' id='n1269' name='n1269' href='#n1269'>1269</a>
<a class='no' id='n1270' name='n1270' href='#n1270'>1270</a>
<a class='no' id='n1271' name='n1271' href='#n1271'>1271</a>
<a class='no' id='n1272' name='n1272' href='#n1272'>1272</a>
<a class='no' id='n1273' name='n1273' href='#n1273'>1273</a>
<a class='no' id='n1274' name='n1274' href='#n1274'>1274</a>
<a class='no' id='n1275' name='n1275' href='#n1275'>1275</a>
<a class='no' id='n1276' name='n1276' href='#n1276'>1276</a>
<a class='no' id='n1277' name='n1277' href='#n1277'>1277</a>
<a class='no' id='n1278' name='n1278' href='#n1278'>1278</a>
<a class='no' id='n1279' name='n1279' href='#n1279'>1279</a>
<a class='no' id='n1280' name='n1280' href='#n1280'>1280</a>
<a class='no' id='n1281' name='n1281' href='#n1281'>1281</a>
<a class='no' id='n1282' name='n1282' href='#n1282'>1282</a>
<a class='no' id='n1283' name='n1283' href='#n1283'>1283</a>
<a class='no' id='n1284' name='n1284' href='#n1284'>1284</a>
<a class='no' id='n1285' name='n1285' href='#n1285'>1285</a>
<a class='no' id='n1286' name='n1286' href='#n1286'>1286</a>
<a class='no' id='n1287' name='n1287' href='#n1287'>1287</a>
<a class='no' id='n1288' name='n1288' href='#n1288'>1288</a>
<a class='no' id='n1289' name='n1289' href='#n1289'>1289</a>
<a class='no' id='n1290' name='n1290' href='#n1290'>1290</a>
<a class='no' id='n1291' name='n1291' href='#n1291'>1291</a>
<a class='no' id='n1292' name='n1292' href='#n1292'>1292</a>
<a class='no' id='n1293' name='n1293' href='#n1293'>1293</a>
<a class='no' id='n1294' name='n1294' href='#n1294'>1294</a>
<a class='no' id='n1295' name='n1295' href='#n1295'>1295</a>
<a class='no' id='n1296' name='n1296' href='#n1296'>1296</a>
<a class='no' id='n1297' name='n1297' href='#n1297'>1297</a>
<a class='no' id='n1298' name='n1298' href='#n1298'>1298</a>
<a class='no' id='n1299' name='n1299' href='#n1299'>1299</a>
<a class='no' id='n1300' name='n1300' href='#n1300'>1300</a>
<a class='no' id='n1301' name='n1301' href='#n1301'>1301</a>
<a class='no' id='n1302' name='n1302' href='#n1302'>1302</a>
<a class='no' id='n1303' name='n1303' href='#n1303'>1303</a>
<a class='no' id='n1304' name='n1304' href='#n1304'>1304</a>
<a class='no' id='n1305' name='n1305' href='#n1305'>1305</a>
<a class='no' id='n1306' name='n1306' href='#n1306'>1306</a>
<a class='no' id='n1307' name='n1307' href='#n1307'>1307</a>
<a class='no' id='n1308' name='n1308' href='#n1308'>1308</a>
<a class='no' id='n1309' name='n1309' href='#n1309'>1309</a>
<a class='no' id='n1310' name='n1310' href='#n1310'>1310</a>
<a class='no' id='n1311' name='n1311' href='#n1311'>1311</a>
<a class='no' id='n1312' name='n1312' href='#n1312'>1312</a>
<a class='no' id='n1313' name='n1313' href='#n1313'>1313</a>
<a class='no' id='n1314' name='n1314' href='#n1314'>1314</a>
<a class='no' id='n1315' name='n1315' href='#n1315'>1315</a>
<a class='no' id='n1316' name='n1316' href='#n1316'>1316</a>
<a class='no' id='n1317' name='n1317' href='#n1317'>1317</a>
<a class='no' id='n1318' name='n1318' href='#n1318'>1318</a>
<a class='no' id='n1319' name='n1319' href='#n1319'>1319</a>
<a class='no' id='n1320' name='n1320' href='#n1320'>1320</a>
<a class='no' id='n1321' name='n1321' href='#n1321'>1321</a>
<a class='no' id='n1322' name='n1322' href='#n1322'>1322</a>
<a class='no' id='n1323' name='n1323' href='#n1323'>1323</a>
<a class='no' id='n1324' name='n1324' href='#n1324'>1324</a>
<a class='no' id='n1325' name='n1325' href='#n1325'>1325</a>
<a class='no' id='n1326' name='n1326' href='#n1326'>1326</a>
<a class='no' id='n1327' name='n1327' href='#n1327'>1327</a>
<a class='no' id='n1328' name='n1328' href='#n1328'>1328</a>
<a class='no' id='n1329' name='n1329' href='#n1329'>1329</a>
<a class='no' id='n1330' name='n1330' href='#n1330'>1330</a>
<a class='no' id='n1331' name='n1331' href='#n1331'>1331</a>
<a class='no' id='n1332' name='n1332' href='#n1332'>1332</a>
<a class='no' id='n1333' name='n1333' href='#n1333'>1333</a>
<a class='no' id='n1334' name='n1334' href='#n1334'>1334</a>
<a class='no' id='n1335' name='n1335' href='#n1335'>1335</a>
<a class='no' id='n1336' name='n1336' href='#n1336'>1336</a>
<a class='no' id='n1337' name='n1337' href='#n1337'>1337</a>
<a class='no' id='n1338' name='n1338' href='#n1338'>1338</a>
<a class='no' id='n1339' name='n1339' href='#n1339'>1339</a>
<a class='no' id='n1340' name='n1340' href='#n1340'>1340</a>
<a class='no' id='n1341' name='n1341' href='#n1341'>1341</a>
<a class='no' id='n1342' name='n1342' href='#n1342'>1342</a>
<a class='no' id='n1343' name='n1343' href='#n1343'>1343</a>
<a class='no' id='n1344' name='n1344' href='#n1344'>1344</a>
<a class='no' id='n1345' name='n1345' href='#n1345'>1345</a>
<a class='no' id='n1346' name='n1346' href='#n1346'>1346</a>
<a class='no' id='n1347' name='n1347' href='#n1347'>1347</a>
<a class='no' id='n1348' name='n1348' href='#n1348'>1348</a>
<a class='no' id='n1349' name='n1349' href='#n1349'>1349</a>
<a class='no' id='n1350' name='n1350' href='#n1350'>1350</a>
<a class='no' id='n1351' name='n1351' href='#n1351'>1351</a>
<a class='no' id='n1352' name='n1352' href='#n1352'>1352</a>
<a class='no' id='n1353' name='n1353' href='#n1353'>1353</a>
<a class='no' id='n1354' name='n1354' href='#n1354'>1354</a>
<a class='no' id='n1355' name='n1355' href='#n1355'>1355</a>
<a class='no' id='n1356' name='n1356' href='#n1356'>1356</a>
<a class='no' id='n1357' name='n1357' href='#n1357'>1357</a>
<a class='no' id='n1358' name='n1358' href='#n1358'>1358</a>
<a class='no' id='n1359' name='n1359' href='#n1359'>1359</a>
<a class='no' id='n1360' name='n1360' href='#n1360'>1360</a>
<a class='no' id='n1361' name='n1361' href='#n1361'>1361</a>
<a class='no' id='n1362' name='n1362' href='#n1362'>1362</a>
<a class='no' id='n1363' name='n1363' href='#n1363'>1363</a>
<a class='no' id='n1364' name='n1364' href='#n1364'>1364</a>
<a class='no' id='n1365' name='n1365' href='#n1365'>1365</a>
<a class='no' id='n1366' name='n1366' href='#n1366'>1366</a>
<a class='no' id='n1367' name='n1367' href='#n1367'>1367</a>
<a class='no' id='n1368' name='n1368' href='#n1368'>1368</a>
<a class='no' id='n1369' name='n1369' href='#n1369'>1369</a>
<a class='no' id='n1370' name='n1370' href='#n1370'>1370</a>
<a class='no' id='n1371' name='n1371' href='#n1371'>1371</a>
<a class='no' id='n1372' name='n1372' href='#n1372'>1372</a>
<a class='no' id='n1373' name='n1373' href='#n1373'>1373</a>
<a class='no' id='n1374' name='n1374' href='#n1374'>1374</a>
<a class='no' id='n1375' name='n1375' href='#n1375'>1375</a>
<a class='no' id='n1376' name='n1376' href='#n1376'>1376</a>
<a class='no' id='n1377' name='n1377' href='#n1377'>1377</a>
<a class='no' id='n1378' name='n1378' href='#n1378'>1378</a>
<a class='no' id='n1379' name='n1379' href='#n1379'>1379</a>
<a class='no' id='n1380' name='n1380' href='#n1380'>1380</a>
<a class='no' id='n1381' name='n1381' href='#n1381'>1381</a>
<a class='no' id='n1382' name='n1382' href='#n1382'>1382</a>
<a class='no' id='n1383' name='n1383' href='#n1383'>1383</a>
<a class='no' id='n1384' name='n1384' href='#n1384'>1384</a>
<a class='no' id='n1385' name='n1385' href='#n1385'>1385</a>
<a class='no' id='n1386' name='n1386' href='#n1386'>1386</a>
<a class='no' id='n1387' name='n1387' href='#n1387'>1387</a>
<a class='no' id='n1388' name='n1388' href='#n1388'>1388</a>
<a class='no' id='n1389' name='n1389' href='#n1389'>1389</a>
<a class='no' id='n1390' name='n1390' href='#n1390'>1390</a>
<a class='no' id='n1391' name='n1391' href='#n1391'>1391</a>
<a class='no' id='n1392' name='n1392' href='#n1392'>1392</a>
<a class='no' id='n1393' name='n1393' href='#n1393'>1393</a>
<a class='no' id='n1394' name='n1394' href='#n1394'>1394</a>
<a class='no' id='n1395' name='n1395' href='#n1395'>1395</a>
<a class='no' id='n1396' name='n1396' href='#n1396'>1396</a>
<a class='no' id='n1397' name='n1397' href='#n1397'>1397</a>
<a class='no' id='n1398' name='n1398' href='#n1398'>1398</a>
<a class='no' id='n1399' name='n1399' href='#n1399'>1399</a>
<a class='no' id='n1400' name='n1400' href='#n1400'>1400</a>
<a class='no' id='n1401' name='n1401' href='#n1401'>1401</a>
<a class='no' id='n1402' name='n1402' href='#n1402'>1402</a>
<a class='no' id='n1403' name='n1403' href='#n1403'>1403</a>
<a class='no' id='n1404' name='n1404' href='#n1404'>1404</a>
<a class='no' id='n1405' name='n1405' href='#n1405'>1405</a>
<a class='no' id='n1406' name='n1406' href='#n1406'>1406</a>
<a class='no' id='n1407' name='n1407' href='#n1407'>1407</a>
<a class='no' id='n1408' name='n1408' href='#n1408'>1408</a>
<a class='no' id='n1409' name='n1409' href='#n1409'>1409</a>
<a class='no' id='n1410' name='n1410' href='#n1410'>1410</a>
<a class='no' id='n1411' name='n1411' href='#n1411'>1411</a>
<a class='no' id='n1412' name='n1412' href='#n1412'>1412</a>
<a class='no' id='n1413' name='n1413' href='#n1413'>1413</a>
<a class='no' id='n1414' name='n1414' href='#n1414'>1414</a>
<a class='no' id='n1415' name='n1415' href='#n1415'>1415</a>
<a class='no' id='n1416' name='n1416' href='#n1416'>1416</a>
<a class='no' id='n1417' name='n1417' href='#n1417'>1417</a>
<a class='no' id='n1418' name='n1418' href='#n1418'>1418</a>
<a class='no' id='n1419' name='n1419' href='#n1419'>1419</a>
<a class='no' id='n1420' name='n1420' href='#n1420'>1420</a>
<a class='no' id='n1421' name='n1421' href='#n1421'>1421</a>
<a class='no' id='n1422' name='n1422' href='#n1422'>1422</a>
<a class='no' id='n1423' name='n1423' href='#n1423'>1423</a>
<a class='no' id='n1424' name='n1424' href='#n1424'>1424</a>
<a class='no' id='n1425' name='n1425' href='#n1425'>1425</a>
<a class='no' id='n1426' name='n1426' href='#n1426'>1426</a>
<a class='no' id='n1427' name='n1427' href='#n1427'>1427</a>
<a class='no' id='n1428' name='n1428' href='#n1428'>1428</a>
<a class='no' id='n1429' name='n1429' href='#n1429'>1429</a>
<a class='no' id='n1430' name='n1430' href='#n1430'>1430</a>
<a class='no' id='n1431' name='n1431' href='#n1431'>1431</a>
<a class='no' id='n1432' name='n1432' href='#n1432'>1432</a>
<a class='no' id='n1433' name='n1433' href='#n1433'>1433</a>
<a class='no' id='n1434' name='n1434' href='#n1434'>1434</a>
<a class='no' id='n1435' name='n1435' href='#n1435'>1435</a>
<a class='no' id='n1436' name='n1436' href='#n1436'>1436</a>
<a class='no' id='n1437' name='n1437' href='#n1437'>1437</a>
<a class='no' id='n1438' name='n1438' href='#n1438'>1438</a>
<a class='no' id='n1439' name='n1439' href='#n1439'>1439</a>
<a class='no' id='n1440' name='n1440' href='#n1440'>1440</a>
<a class='no' id='n1441' name='n1441' href='#n1441'>1441</a>
<a class='no' id='n1442' name='n1442' href='#n1442'>1442</a>
<a class='no' id='n1443' name='n1443' href='#n1443'>1443</a>
<a class='no' id='n1444' name='n1444' href='#n1444'>1444</a>
<a class='no' id='n1445' name='n1445' href='#n1445'>1445</a>
<a class='no' id='n1446' name='n1446' href='#n1446'>1446</a>
<a class='no' id='n1447' name='n1447' href='#n1447'>1447</a>
<a class='no' id='n1448' name='n1448' href='#n1448'>1448</a>
<a class='no' id='n1449' name='n1449' href='#n1449'>1449</a>
<a class='no' id='n1450' name='n1450' href='#n1450'>1450</a>
<a class='no' id='n1451' name='n1451' href='#n1451'>1451</a>
<a class='no' id='n1452' name='n1452' href='#n1452'>1452</a>
<a class='no' id='n1453' name='n1453' href='#n1453'>1453</a>
<a class='no' id='n1454' name='n1454' href='#n1454'>1454</a>
<a class='no' id='n1455' name='n1455' href='#n1455'>1455</a>
<a class='no' id='n1456' name='n1456' href='#n1456'>1456</a>
<a class='no' id='n1457' name='n1457' href='#n1457'>1457</a>
<a class='no' id='n1458' name='n1458' href='#n1458'>1458</a>
<a class='no' id='n1459' name='n1459' href='#n1459'>1459</a>
<a class='no' id='n1460' name='n1460' href='#n1460'>1460</a>
<a class='no' id='n1461' name='n1461' href='#n1461'>1461</a>
<a class='no' id='n1462' name='n1462' href='#n1462'>1462</a>
<a class='no' id='n1463' name='n1463' href='#n1463'>1463</a>
<a class='no' id='n1464' name='n1464' href='#n1464'>1464</a>
<a class='no' id='n1465' name='n1465' href='#n1465'>1465</a>
<a class='no' id='n1466' name='n1466' href='#n1466'>1466</a>
<a class='no' id='n1467' name='n1467' href='#n1467'>1467</a>
<a class='no' id='n1468' name='n1468' href='#n1468'>1468</a>
<a class='no' id='n1469' name='n1469' href='#n1469'>1469</a>
<a class='no' id='n1470' name='n1470' href='#n1470'>1470</a>
<a class='no' id='n1471' name='n1471' href='#n1471'>1471</a>
<a class='no' id='n1472' name='n1472' href='#n1472'>1472</a>
<a class='no' id='n1473' name='n1473' href='#n1473'>1473</a>
<a class='no' id='n1474' name='n1474' href='#n1474'>1474</a>
<a class='no' id='n1475' name='n1475' href='#n1475'>1475</a>
<a class='no' id='n1476' name='n1476' href='#n1476'>1476</a>
<a class='no' id='n1477' name='n1477' href='#n1477'>1477</a>
<a class='no' id='n1478' name='n1478' href='#n1478'>1478</a>
<a class='no' id='n1479' name='n1479' href='#n1479'>1479</a>
<a class='no' id='n1480' name='n1480' href='#n1480'>1480</a>
<a class='no' id='n1481' name='n1481' href='#n1481'>1481</a>
<a class='no' id='n1482' name='n1482' href='#n1482'>1482</a>
<a class='no' id='n1483' name='n1483' href='#n1483'>1483</a>
<a class='no' id='n1484' name='n1484' href='#n1484'>1484</a>
<a class='no' id='n1485' name='n1485' href='#n1485'>1485</a>
<a class='no' id='n1486' name='n1486' href='#n1486'>1486</a>
<a class='no' id='n1487' name='n1487' href='#n1487'>1487</a>
<a class='no' id='n1488' name='n1488' href='#n1488'>1488</a>
<a class='no' id='n1489' name='n1489' href='#n1489'>1489</a>
<a class='no' id='n1490' name='n1490' href='#n1490'>1490</a>
<a class='no' id='n1491' name='n1491' href='#n1491'>1491</a>
<a class='no' id='n1492' name='n1492' href='#n1492'>1492</a>
<a class='no' id='n1493' name='n1493' href='#n1493'>1493</a>
<a class='no' id='n1494' name='n1494' href='#n1494'>1494</a>
<a class='no' id='n1495' name='n1495' href='#n1495'>1495</a>
<a class='no' id='n1496' name='n1496' href='#n1496'>1496</a>
<a class='no' id='n1497' name='n1497' href='#n1497'>1497</a>
<a class='no' id='n1498' name='n1498' href='#n1498'>1498</a>
<a class='no' id='n1499' name='n1499' href='#n1499'>1499</a>
<a class='no' id='n1500' name='n1500' href='#n1500'>1500</a>
<a class='no' id='n1501' name='n1501' href='#n1501'>1501</a>
<a class='no' id='n1502' name='n1502' href='#n1502'>1502</a>
<a class='no' id='n1503' name='n1503' href='#n1503'>1503</a>
<a class='no' id='n1504' name='n1504' href='#n1504'>1504</a>
<a class='no' id='n1505' name='n1505' href='#n1505'>1505</a>
<a class='no' id='n1506' name='n1506' href='#n1506'>1506</a>
<a class='no' id='n1507' name='n1507' href='#n1507'>1507</a>
<a class='no' id='n1508' name='n1508' href='#n1508'>1508</a>
<a class='no' id='n1509' name='n1509' href='#n1509'>1509</a>
<a class='no' id='n1510' name='n1510' href='#n1510'>1510</a>
<a class='no' id='n1511' name='n1511' href='#n1511'>1511</a>
<a class='no' id='n1512' name='n1512' href='#n1512'>1512</a>
<a class='no' id='n1513' name='n1513' href='#n1513'>1513</a>
<a class='no' id='n1514' name='n1514' href='#n1514'>1514</a>
<a class='no' id='n1515' name='n1515' href='#n1515'>1515</a>
<a class='no' id='n1516' name='n1516' href='#n1516'>1516</a>
<a class='no' id='n1517' name='n1517' href='#n1517'>1517</a>
<a class='no' id='n1518' name='n1518' href='#n1518'>1518</a>
<a class='no' id='n1519' name='n1519' href='#n1519'>1519</a>
<a class='no' id='n1520' name='n1520' href='#n1520'>1520</a>
<a class='no' id='n1521' name='n1521' href='#n1521'>1521</a>
<a class='no' id='n1522' name='n1522' href='#n1522'>1522</a>
<a class='no' id='n1523' name='n1523' href='#n1523'>1523</a>
<a class='no' id='n1524' name='n1524' href='#n1524'>1524</a>
<a class='no' id='n1525' name='n1525' href='#n1525'>1525</a>
<a class='no' id='n1526' name='n1526' href='#n1526'>1526</a>
<a class='no' id='n1527' name='n1527' href='#n1527'>1527</a>
<a class='no' id='n1528' name='n1528' href='#n1528'>1528</a>
<a class='no' id='n1529' name='n1529' href='#n1529'>1529</a>
<a class='no' id='n1530' name='n1530' href='#n1530'>1530</a>
<a class='no' id='n1531' name='n1531' href='#n1531'>1531</a>
<a class='no' id='n1532' name='n1532' href='#n1532'>1532</a>
<a class='no' id='n1533' name='n1533' href='#n1533'>1533</a>
<a class='no' id='n1534' name='n1534' href='#n1534'>1534</a>
<a class='no' id='n1535' name='n1535' href='#n1535'>1535</a>
<a class='no' id='n1536' name='n1536' href='#n1536'>1536</a>
<a class='no' id='n1537' name='n1537' href='#n1537'>1537</a>
<a class='no' id='n1538' name='n1538' href='#n1538'>1538</a>
<a class='no' id='n1539' name='n1539' href='#n1539'>1539</a>
<a class='no' id='n1540' name='n1540' href='#n1540'>1540</a>
<a class='no' id='n1541' name='n1541' href='#n1541'>1541</a>
<a class='no' id='n1542' name='n1542' href='#n1542'>1542</a>
<a class='no' id='n1543' name='n1543' href='#n1543'>1543</a>
<a class='no' id='n1544' name='n1544' href='#n1544'>1544</a>
<a class='no' id='n1545' name='n1545' href='#n1545'>1545</a>
<a class='no' id='n1546' name='n1546' href='#n1546'>1546</a>
<a class='no' id='n1547' name='n1547' href='#n1547'>1547</a>
<a class='no' id='n1548' name='n1548' href='#n1548'>1548</a>
<a class='no' id='n1549' name='n1549' href='#n1549'>1549</a>
<a class='no' id='n1550' name='n1550' href='#n1550'>1550</a>
<a class='no' id='n1551' name='n1551' href='#n1551'>1551</a>
<a class='no' id='n1552' name='n1552' href='#n1552'>1552</a>
<a class='no' id='n1553' name='n1553' href='#n1553'>1553</a>
<a class='no' id='n1554' name='n1554' href='#n1554'>1554</a>
<a class='no' id='n1555' name='n1555' href='#n1555'>1555</a>
<a class='no' id='n1556' name='n1556' href='#n1556'>1556</a>
<a class='no' id='n1557' name='n1557' href='#n1557'>1557</a>
<a class='no' id='n1558' name='n1558' href='#n1558'>1558</a>
<a class='no' id='n1559' name='n1559' href='#n1559'>1559</a>
<a class='no' id='n1560' name='n1560' href='#n1560'>1560</a>
<a class='no' id='n1561' name='n1561' href='#n1561'>1561</a>
<a class='no' id='n1562' name='n1562' href='#n1562'>1562</a>
<a class='no' id='n1563' name='n1563' href='#n1563'>1563</a>
<a class='no' id='n1564' name='n1564' href='#n1564'>1564</a>
<a class='no' id='n1565' name='n1565' href='#n1565'>1565</a>
<a class='no' id='n1566' name='n1566' href='#n1566'>1566</a>
<a class='no' id='n1567' name='n1567' href='#n1567'>1567</a>
<a class='no' id='n1568' name='n1568' href='#n1568'>1568</a>
<a class='no' id='n1569' name='n1569' href='#n1569'>1569</a>
<a class='no' id='n1570' name='n1570' href='#n1570'>1570</a>
<a class='no' id='n1571' name='n1571' href='#n1571'>1571</a>
<a class='no' id='n1572' name='n1572' href='#n1572'>1572</a>
<a class='no' id='n1573' name='n1573' href='#n1573'>1573</a>
<a class='no' id='n1574' name='n1574' href='#n1574'>1574</a>
<a class='no' id='n1575' name='n1575' href='#n1575'>1575</a>
<a class='no' id='n1576' name='n1576' href='#n1576'>1576</a>
<a class='no' id='n1577' name='n1577' href='#n1577'>1577</a>
<a class='no' id='n1578' name='n1578' href='#n1578'>1578</a>
<a class='no' id='n1579' name='n1579' href='#n1579'>1579</a>
<a class='no' id='n1580' name='n1580' href='#n1580'>1580</a>
<a class='no' id='n1581' name='n1581' href='#n1581'>1581</a>
<a class='no' id='n1582' name='n1582' href='#n1582'>1582</a>
<a class='no' id='n1583' name='n1583' href='#n1583'>1583</a>
<a class='no' id='n1584' name='n1584' href='#n1584'>1584</a>
<a class='no' id='n1585' name='n1585' href='#n1585'>1585</a>
<a class='no' id='n1586' name='n1586' href='#n1586'>1586</a>
<a class='no' id='n1587' name='n1587' href='#n1587'>1587</a>
<a class='no' id='n1588' name='n1588' href='#n1588'>1588</a>
<a class='no' id='n1589' name='n1589' href='#n1589'>1589</a>
<a class='no' id='n1590' name='n1590' href='#n1590'>1590</a>
<a class='no' id='n1591' name='n1591' href='#n1591'>1591</a>
<a class='no' id='n1592' name='n1592' href='#n1592'>1592</a>
<a class='no' id='n1593' name='n1593' href='#n1593'>1593</a>
<a class='no' id='n1594' name='n1594' href='#n1594'>1594</a>
<a class='no' id='n1595' name='n1595' href='#n1595'>1595</a>
<a class='no' id='n1596' name='n1596' href='#n1596'>1596</a>
</pre></td>
<td class='lines'><pre><code><span style="color:#ff8000">/*</span>
<span style="color:#ff8000"> * Broadcom BCMSDH to SPI Protocol Conversion Layer</span>
<span style="color:#ff8000"> *</span>
<span style="color:#ff8000"> * Copyright (C) 1999-2010, Broadcom Corporation</span>
<span style="color:#ff8000"> *</span>
<span style="color:#ff8000"> *      Unless you and Broadcom execute a separate written software license</span>
<span style="color:#ff8000"> * agreement governing use of this software, this software is licensed to you</span>
<span style="color:#ff8000"> * under the terms of the GNU General Public License version 2 (the &quot;GPL&quot;),</span>
<span style="color:#ff8000"> * available at http://www.broadcom.com/licenses/GPLv2.php, with the</span>
<span style="color:#ff8000"> * following added to such license:</span>
<span style="color:#ff8000"> *</span>
<span style="color:#ff8000"> *      As a special exception, the copyright holders of this software give you</span>
<span style="color:#ff8000"> * permission to link this software with independent modules, and to copy and</span>
<span style="color:#ff8000"> * distribute the resulting executable under terms of your choice, provided that</span>
<span style="color:#ff8000"> * you also meet, for each linked independent module, the terms and conditions of</span>
<span style="color:#ff8000"> * the license of that module.  An independent module is a module which is not</span>
<span style="color:#ff8000"> * derived from this software.  The special exception does not apply to any</span>
<span style="color:#ff8000"> * modifications of the software.</span>
<span style="color:#ff8000"> *</span>
<span style="color:#ff8000"> *      Notwithstanding the above, under no circumstances may you combine this</span>
<span style="color:#ff8000"> * software in any way with any other Broadcom software provided under a license</span>
<span style="color:#ff8000"> * other than the GPL, without Broadcom's express prior written consent.</span>
<span style="color:#ff8000"> *</span>
<span style="color:#ff8000"> * $Id: bcmsdspi.c,v 1.14.4.2.4.4.6.5 2010/03/10 03:09:48 Exp $</span>
<span style="color:#ff8000"> */</span>

<span style="color:#0080c0; font-weight:bold">#include &lt;typedefs.h&gt;</span>

<span style="color:#0080c0; font-weight:bold">#include &lt;bcmdevs.h&gt;</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;bcmendian.h&gt;</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;bcmutils.h&gt;</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;osl.h&gt;</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;siutils.h&gt;</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;sdio.h&gt;</span>		<span style="color:#ff8000">/* SDIO Device and Protocol Specs */</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#include &lt;sdioh.h&gt;</span>		<span style="color:#ff8000">/* SDIO Host Controller Specification */</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#include &lt;bcmsdbus.h&gt;</span>		<span style="color:#ff8000">/* bcmsdh to/from specific controller APIs */</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#include &lt;sdiovar.h&gt;</span>		<span style="color:#ff8000">/* ioctl/iovars */</span><span style="color:#0080c0; font-weight:bold"></span>

<span style="color:#0080c0; font-weight:bold">#include &lt;pcicfg.h&gt;</span>


<span style="color:#0080c0; font-weight:bold">#include &lt;bcmsdspi.h&gt;</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;bcmspi.h&gt;</span>

<span style="color:#0080c0; font-weight:bold">#include &lt;proto/sdspi.h&gt;</span>

<span style="color:#0080c0; font-weight:bold">#define SD_PAGE 4096</span>

<span style="color:#ff8000">/* Globals */</span>

uint sd_msglevel <span style="color:#ff0080; font-weight:bold">=</span> SDH_ERROR_VAL<span style="color:#ff0080; font-weight:bold">;</span>
uint sd_hiok <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>		<span style="color:#ff8000">/* Use hi-speed mode if available? */</span>
uint sd_sdmode <span style="color:#ff0080; font-weight:bold">=</span> SDIOH_MODE_SPI<span style="color:#ff0080; font-weight:bold">;</span>		<span style="color:#ff8000">/* Use SD4 mode by default */</span>
uint sd_f2_blocksize <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">512</span><span style="color:#ff0080; font-weight:bold">;</span>	<span style="color:#ff8000">/* Default blocksize */</span>

uint sd_divisor <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">;</span>		<span style="color:#ff8000">/* Default 33MHz/2 = 16MHz for dongle */</span>
uint sd_power <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>		<span style="color:#ff8000">/* Default to SD Slot powered ON */</span>
uint sd_clock <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>		<span style="color:#ff8000">/* Default to SD Clock turned ON */</span>
uint sd_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>		<span style="color:#ff8000">/* Default to SPI CRC Check turned OFF */</span>
uint sd_pci_slot <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0xFFFFffff</span><span style="color:#ff0080; font-weight:bold">;</span> <span style="color:#ff8000">/* Used to force selection of a particular PCI slot */</span>

uint sd_toctl <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">7</span><span style="color:#ff0080; font-weight:bold">;</span>

<span style="color:#ff8000">/* Prototypes */</span>
<span style="color:#8080c0; font-weight:bold">static bool</span> <span style="color:#004466">sdspi_start_power</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_set_highspeed_mode</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> HSMode<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_card_enablefuncs</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static void</span> <span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint32 <span style="color:#ff0080; font-weight:bold">*</span>rsp_buffer<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> count<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> use_dma<span style="color:#ff0080; font-weight:bold">,</span> uint32 cmd<span style="color:#ff0080; font-weight:bold">,</span> uint32 arg<span style="color:#ff0080; font-weight:bold">,</span>
                           uint32 <span style="color:#ff0080; font-weight:bold">*</span>data<span style="color:#ff0080; font-weight:bold">,</span> uint32 datalen<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_card_regread</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> func<span style="color:#ff0080; font-weight:bold">,</span> uint32 regaddr<span style="color:#ff0080; font-weight:bold">,</span>
                              <span style="color:#8080c0; font-weight:bold">int</span> regsize<span style="color:#ff0080; font-weight:bold">,</span> uint32 <span style="color:#ff0080; font-weight:bold">*</span>data<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> func<span style="color:#ff0080; font-weight:bold">,</span> uint32 regaddr<span style="color:#ff0080; font-weight:bold">,</span>
                               <span style="color:#8080c0; font-weight:bold">int</span> regsize<span style="color:#ff0080; font-weight:bold">,</span> uint32 data<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_driver_init</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static bool</span> <span style="color:#004466">sdspi_reset</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> host_reset<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> client_reset<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_card_buf</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> rw<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> func<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> fifo<span style="color:#ff0080; font-weight:bold">,</span>
                          uint32 addr<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> nbytes<span style="color:#ff0080; font-weight:bold">,</span> uint32 <span style="color:#ff0080; font-weight:bold">*</span>data<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_abort</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint func<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">set_client_block_size</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> func<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> blocksize<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#8080c0; font-weight:bold">static</span> uint8 <span style="color:#004466">sdspi_crc7</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">unsigned char</span><span style="color:#ff0080; font-weight:bold">*</span> p<span style="color:#ff0080; font-weight:bold">,</span> uint32 len<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static</span> uint16 <span style="color:#004466">sdspi_crc16</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">unsigned char</span><span style="color:#ff0080; font-weight:bold">*</span> p<span style="color:#ff0080; font-weight:bold">,</span> uint32 len<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">static int</span> <span style="color:#004466">sdspi_crc_onoff</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> use_crc<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#ff8000">/*</span>
<span style="color:#ff8000"> *  Public entry points &amp; extern's</span>
<span style="color:#ff8000"> */</span>
<span style="color:#0080c0">extern</span> sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>
<span style="color:#004466">sdioh_attach</span><span style="color:#ff0080; font-weight:bold">(</span>osl_t <span style="color:#ff0080; font-weight:bold">*</span>osh<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">void</span> <span style="color:#ff0080; font-weight:bold">*</span>bar0<span style="color:#ff0080; font-weight:bold">,</span> uint irq<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>sd <span style="color:#ff0080; font-weight:bold">= (</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*)</span><span style="color:#004466">MALLOC</span><span style="color:#ff0080; font-weight:bold">(</span>osh<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t<span style="color:#ff0080; font-weight:bold">))) ==</span> NULL<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;sdioh_attach: out of memory, malloced %d bytes</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">MALLOCED</span><span style="color:#ff0080; font-weight:bold">(</span>osh<span style="color:#ff0080; font-weight:bold">)));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> NULL<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#004466">bzero</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#8080c0; font-weight:bold">char</span> <span style="color:#ff0080; font-weight:bold">*)</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t<span style="color:#ff0080; font-weight:bold">));</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>osh <span style="color:#ff0080; font-weight:bold">=</span> osh<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">spi_osinit</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">) !=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: spi_osinit() failed</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#004466">MFREE</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>osh<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> NULL<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>bar0 <span style="color:#ff0080; font-weight:bold">= (</span>uintptr<span style="color:#ff0080; font-weight:bold">)</span>bar0<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>irq <span style="color:#ff0080; font-weight:bold">=</span> irq<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler <span style="color:#ff0080; font-weight:bold">=</span> NULL<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler_arg <span style="color:#ff0080; font-weight:bold">=</span> NULL<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler_valid <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#ff8000">/* Set defaults */</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_blockmode <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>use_client_ints <span style="color:#ff0080; font-weight:bold">=</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>	<span style="color:#ff8000">/* DMA Not supported */</span>

	<span style="color:#ff8000">/* Haven't figured out how to make bytemode work with dma */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_blockmode<span style="color:#ff0080; font-weight:bold">)</span>
		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span><span style="color:#004466">spi_hw_attach</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: spi_hw_attach() failed</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#004466">spi_osfree</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#004466">MFREE</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>osh<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> NULL<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdspi_driver_init</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdspi_driver_init</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s:sdspi_driver_init() failed()</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
			<span style="color:#004466">spi_hw_detach</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#004466">spi_osfree</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#004466">MFREE</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>osh<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t<span style="color:#ff0080; font-weight:bold">));</span>
			<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>NULL<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">spi_register_irq</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> irq<span style="color:#ff0080; font-weight:bold">) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: spi_register_irq() failed for irq = %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> irq<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#004466">spi_hw_detach</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#004466">spi_osfree</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#004466">MFREE</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>osh<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>NULL<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Done</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#bb7977; font-weight:bold">return</span> sd<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_detach</span><span style="color:#ff0080; font-weight:bold">(</span>osl_t <span style="color:#ff0080; font-weight:bold">*</span>osh<span style="color:#ff0080; font-weight:bold">,</span> sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_init_done<span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#004466">sdspi_reset</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>

		<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: detaching from hardware</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#004466">spi_free_irq</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>irq<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#004466">spi_hw_detach</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#004466">spi_osfree</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#004466">MFREE</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>osh<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#ff8000">/* Configure callback to client when we recieve client interrupt */</span>
<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_interrupt_register</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sdioh_cb_fn_t fn<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">void</span> <span style="color:#ff0080; font-weight:bold">*</span>argh<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Entering</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>

	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler <span style="color:#ff0080; font-weight:bold">=</span> fn<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler_arg <span style="color:#ff0080; font-weight:bold">=</span> argh<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler_valid <span style="color:#ff0080; font-weight:bold">=</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_interrupt_deregister</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Entering</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>

	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler_valid <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler <span style="color:#ff0080; font-weight:bold">=</span> NULL<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>intr_handler_arg <span style="color:#ff0080; font-weight:bold">=</span> NULL<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_interrupt_query</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> <span style="color:#ff0080; font-weight:bold">*</span>onoff<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Entering</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#ff0080; font-weight:bold">*</span>onoff <span style="color:#ff0080; font-weight:bold">=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_intr_enabled<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0; font-weight:bold">#if defined(DHD_DEBUG)</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">bool</span>
<span style="color:#004466">sdioh_interrupt_pending</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>
<span style="color:#0080c0; font-weight:bold">#endif</span>

uint
<span style="color:#004466">sdioh_query_iofnum</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#bb7977; font-weight:bold">return</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>num_funcs<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#ff8000">/* IOVar table */</span>
<span style="color:#8080c0; font-weight:bold">enum</span> <span style="color:#ff0080; font-weight:bold">{</span>
	IOV_MSGLEVEL <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span>
	IOV_BLOCKMODE<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_BLOCKSIZE<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_DMA<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_USEINTS<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_NUMINTS<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_NUMLOCALINTS<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_HOSTREG<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_DEVREG<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_DIVISOR<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_SDMODE<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_HISPEED<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_HCIREGS<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_POWER<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_CLOCK<span style="color:#ff0080; font-weight:bold">,</span>
	IOV_CRC
<span style="color:#ff0080; font-weight:bold">};</span>

<span style="color:#8080c0; font-weight:bold">const</span> bcm_iovar_t sdioh_iovars<span style="color:#ff0080; font-weight:bold">[] = {</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_msglevel&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_MSGLEVEL<span style="color:#ff0080; font-weight:bold">,</span> 	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_blockmode&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> IOV_BLOCKMODE<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_BOOL<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_blocksize&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> IOV_BLOCKSIZE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span> <span style="color:#ff8000">/* ((fn &lt;&lt; 16) | size) */</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_dma&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_DMA<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_BOOL<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_ints&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_USEINTS<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_BOOL<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_numints&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_NUMINTS<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_numlocalints&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> IOV_NUMLOCALINTS<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_hostreg&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_HOSTREG<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_BUFFER<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdreg_t<span style="color:#ff0080; font-weight:bold">) },</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_devreg&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_DEVREG<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_BUFFER<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>sdreg_t<span style="color:#ff0080; font-weight:bold">)	},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_divisor&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_DIVISOR<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_power&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_POWER<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_clock&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_CLOCK<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_crc&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_CRC<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_mode&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_SDMODE<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">100</span><span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span><span style="color:#a68500">&quot;sd_highspeed&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>	IOV_HISPEED<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>	IOVT_UINT32<span style="color:#ff0080; font-weight:bold">,</span>	<span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">},</span>
	<span style="color:#ff0080; font-weight:bold">{</span>NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">}</span>
<span style="color:#ff0080; font-weight:bold">};</span>

<span style="color:#8080c0; font-weight:bold">int</span>
<span style="color:#004466">sdioh_iovar_op</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>si<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">const char</span> <span style="color:#ff0080; font-weight:bold">*</span>name<span style="color:#ff0080; font-weight:bold">,</span>
               <span style="color:#8080c0; font-weight:bold">void</span> <span style="color:#ff0080; font-weight:bold">*</span>params<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> plen<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">void</span> <span style="color:#ff0080; font-weight:bold">*</span>arg<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> len<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> set<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">const</span> bcm_iovar_t <span style="color:#ff0080; font-weight:bold">*</span>vi <span style="color:#ff0080; font-weight:bold">=</span> NULL<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> bcmerror <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> val_size<span style="color:#ff0080; font-weight:bold">;</span>
	int32 int_val <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">bool</span> bool_val<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 actionid<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">ASSERT</span><span style="color:#ff0080; font-weight:bold">(</span>name<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#004466">ASSERT</span><span style="color:#ff0080; font-weight:bold">(</span>len <span style="color:#ff0080; font-weight:bold">&gt;=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#ff8000">/* Get must have return space; Set does not take qualifiers */</span>
	<span style="color:#004466">ASSERT</span><span style="color:#ff0080; font-weight:bold">(</span>set <span style="color:#ff0080; font-weight:bold">|| (</span>arg <span style="color:#ff0080; font-weight:bold">&amp;&amp;</span> len<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#004466">ASSERT</span><span style="color:#ff0080; font-weight:bold">(!</span>set <span style="color:#ff0080; font-weight:bold">|| (!</span>params <span style="color:#ff0080; font-weight:bold">&amp;&amp; !</span>plen<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Enter (%s %s)</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">, (</span>set ? <span style="color:#a68500">&quot;set&quot;</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">&quot;get&quot;</span><span style="color:#ff0080; font-weight:bold">),</span> name<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>vi <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">bcm_iovar_lookup</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_iovars<span style="color:#ff0080; font-weight:bold">,</span> name<span style="color:#ff0080; font-weight:bold">)) ==</span> NULL<span style="color:#ff0080; font-weight:bold">) {</span>
		bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_UNSUPPORTED<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">goto</span> exit<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>bcmerror <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">bcm_iovar_lencheck</span><span style="color:#ff0080; font-weight:bold">(</span>vi<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> len<span style="color:#ff0080; font-weight:bold">,</span> set<span style="color:#ff0080; font-weight:bold">)) !=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">)</span>
		<span style="color:#bb7977; font-weight:bold">goto</span> exit<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#ff8000">/* Set up params so get and set can share the convenience variables */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>params <span style="color:#ff0080; font-weight:bold">==</span> NULL<span style="color:#ff0080; font-weight:bold">) {</span>
		params <span style="color:#ff0080; font-weight:bold">=</span> arg<span style="color:#ff0080; font-weight:bold">;</span>
		plen <span style="color:#ff0080; font-weight:bold">=</span> len<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>vi<span style="color:#ff0080; font-weight:bold">-&gt;</span>type <span style="color:#ff0080; font-weight:bold">==</span> IOVT_VOID<span style="color:#ff0080; font-weight:bold">)</span>
		val_size <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">else if</span> <span style="color:#ff0080; font-weight:bold">(</span>vi<span style="color:#ff0080; font-weight:bold">-&gt;</span>type <span style="color:#ff0080; font-weight:bold">==</span> IOVT_BUFFER<span style="color:#ff0080; font-weight:bold">)</span>
		val_size <span style="color:#ff0080; font-weight:bold">=</span> len<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">else</span>
		val_size <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">int</span><span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>plen <span style="color:#ff0080; font-weight:bold">&gt;= (</span><span style="color:#8080c0; font-weight:bold">int</span><span style="color:#ff0080; font-weight:bold">)</span><span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>int_val<span style="color:#ff0080; font-weight:bold">))</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(</span>params<span style="color:#ff0080; font-weight:bold">, &amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>int_val<span style="color:#ff0080; font-weight:bold">));</span>

	bool_val <span style="color:#ff0080; font-weight:bold">= (</span>int_val <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">)</span> ? TRUE <span style="color:#ff0080; font-weight:bold">:</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>

	actionid <span style="color:#ff0080; font-weight:bold">=</span> set ? <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>vi<span style="color:#ff0080; font-weight:bold">-&gt;</span>varid<span style="color:#ff0080; font-weight:bold">) :</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>vi<span style="color:#ff0080; font-weight:bold">-&gt;</span>varid<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">switch</span> <span style="color:#ff0080; font-weight:bold">(</span>actionid<span style="color:#ff0080; font-weight:bold">) {</span>
	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_MSGLEVEL<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>int32<span style="color:#ff0080; font-weight:bold">)</span>sd_msglevel<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_MSGLEVEL<span style="color:#ff0080; font-weight:bold">):</span>
		sd_msglevel <span style="color:#ff0080; font-weight:bold">=</span> int_val<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_BLOCKMODE<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>int32<span style="color:#ff0080; font-weight:bold">)</span>si<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_blockmode<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_BLOCKMODE<span style="color:#ff0080; font-weight:bold">):</span>
		si<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_blockmode <span style="color:#ff0080; font-weight:bold">= (</span><span style="color:#8080c0; font-weight:bold">bool</span><span style="color:#ff0080; font-weight:bold">)</span>int_val<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff8000">/* Haven't figured out how to make non-block mode with DMA */</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span>si<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_blockmode<span style="color:#ff0080; font-weight:bold">)</span>
			si<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_BLOCKSIZE<span style="color:#ff0080; font-weight:bold">):</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>uint32<span style="color:#ff0080; font-weight:bold">)</span>int_val <span style="color:#ff0080; font-weight:bold">&gt;</span> si<span style="color:#ff0080; font-weight:bold">-&gt;</span>num_funcs<span style="color:#ff0080; font-weight:bold">) {</span>
			bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_BADARG<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>int32<span style="color:#ff0080; font-weight:bold">)</span>si<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>int_val<span style="color:#ff0080; font-weight:bold">];</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_BLOCKSIZE<span style="color:#ff0080; font-weight:bold">):</span>
	<span style="color:#ff0080; font-weight:bold">{</span>
		uint func <span style="color:#ff0080; font-weight:bold">= ((</span>uint32<span style="color:#ff0080; font-weight:bold">)</span>int_val <span style="color:#ff0080; font-weight:bold">&gt;&gt;</span> <span style="color:#800080; font-weight:bold">16</span><span style="color:#ff0080; font-weight:bold">);</span>
		uint blksize <span style="color:#ff0080; font-weight:bold">= (</span>uint16<span style="color:#ff0080; font-weight:bold">)</span>int_val<span style="color:#ff0080; font-weight:bold">;</span>
		uint maxsize<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>func <span style="color:#ff0080; font-weight:bold">&gt;</span> si<span style="color:#ff0080; font-weight:bold">-&gt;</span>num_funcs<span style="color:#ff0080; font-weight:bold">) {</span>
			bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_BADARG<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#bb7977; font-weight:bold">switch</span> <span style="color:#ff0080; font-weight:bold">(</span>func<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">:</span> maxsize <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">32</span><span style="color:#ff0080; font-weight:bold">;</span> <span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">:</span> maxsize <span style="color:#ff0080; font-weight:bold">=</span> BLOCK_SIZE_4318<span style="color:#ff0080; font-weight:bold">;</span> <span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">:</span> maxsize <span style="color:#ff0080; font-weight:bold">=</span> BLOCK_SIZE_4328<span style="color:#ff0080; font-weight:bold">;</span> <span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">default</span><span style="color:#ff0080; font-weight:bold">:</span> maxsize <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>blksize <span style="color:#ff0080; font-weight:bold">&gt;</span> maxsize<span style="color:#ff0080; font-weight:bold">) {</span>
			bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_BADARG<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span>blksize<span style="color:#ff0080; font-weight:bold">) {</span>
			blksize <span style="color:#ff0080; font-weight:bold">=</span> maxsize<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#ff8000">/* Now set it */</span>
		<span style="color:#004466">spi_lock</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">);</span>
		bcmerror <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">set_client_block_size</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> blksize<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_DMA<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>int32<span style="color:#ff0080; font-weight:bold">)</span>si<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_DMA<span style="color:#ff0080; font-weight:bold">):</span>
		si<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma <span style="color:#ff0080; font-weight:bold">= (</span><span style="color:#8080c0; font-weight:bold">bool</span><span style="color:#ff0080; font-weight:bold">)</span>int_val<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_USEINTS<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>int32<span style="color:#ff0080; font-weight:bold">)</span>si<span style="color:#ff0080; font-weight:bold">-&gt;</span>use_client_ints<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_USEINTS<span style="color:#ff0080; font-weight:bold">):</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_DIVISOR<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>uint32<span style="color:#ff0080; font-weight:bold">)</span>sd_divisor<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_DIVISOR<span style="color:#ff0080; font-weight:bold">):</span>
		sd_divisor <span style="color:#ff0080; font-weight:bold">=</span> int_val<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span><span style="color:#004466">spi_start_clock</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">, (</span>uint16<span style="color:#ff0080; font-weight:bold">)</span>sd_divisor<span style="color:#ff0080; font-weight:bold">)) {</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;set clock failed!</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
			bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_ERROR<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_POWER<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>uint32<span style="color:#ff0080; font-weight:bold">)</span>sd_power<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_POWER<span style="color:#ff0080; font-weight:bold">):</span>
		sd_power <span style="color:#ff0080; font-weight:bold">=</span> int_val<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_CLOCK<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>uint32<span style="color:#ff0080; font-weight:bold">)</span>sd_clock<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_CLOCK<span style="color:#ff0080; font-weight:bold">):</span>
		sd_clock <span style="color:#ff0080; font-weight:bold">=</span> int_val<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_CRC<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>uint32<span style="color:#ff0080; font-weight:bold">)</span>sd_crc<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_CRC<span style="color:#ff0080; font-weight:bold">):</span>
		<span style="color:#ff8000">/* Apply new setting, but don't change sd_crc until</span>
<span style="color:#ff8000">		 * after the CRC-mode is selected in the device.  This</span>
<span style="color:#ff8000">		 * is required because the software must generate a</span>
<span style="color:#ff8000">		 * correct CRC for the CMD59 in order to be able to</span>
<span style="color:#ff8000">		 * turn OFF the CRC.</span>
<span style="color:#ff8000">		 */</span>
		<span style="color:#004466">sdspi_crc_onoff</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">,</span> int_val ? <span style="color:#800080; font-weight:bold">1</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
		sd_crc <span style="color:#ff0080; font-weight:bold">=</span> int_val<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_SDMODE<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>uint32<span style="color:#ff0080; font-weight:bold">)</span>sd_sdmode<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_SDMODE<span style="color:#ff0080; font-weight:bold">):</span>
		sd_sdmode <span style="color:#ff0080; font-weight:bold">=</span> int_val<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_HISPEED<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>uint32<span style="color:#ff0080; font-weight:bold">)</span>sd_hiok<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_HISPEED<span style="color:#ff0080; font-weight:bold">):</span>
		sd_hiok <span style="color:#ff0080; font-weight:bold">=</span> int_val<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span><span style="color:#004466">sdspi_set_highspeed_mode</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">, (</span><span style="color:#8080c0; font-weight:bold">bool</span><span style="color:#ff0080; font-weight:bold">)</span>sd_hiok<span style="color:#ff0080; font-weight:bold">)) {</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;Failed changing highspeed mode to %d.</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> sd_hiok<span style="color:#ff0080; font-weight:bold">));</span>
			bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_ERROR<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_NUMINTS<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>int32<span style="color:#ff0080; font-weight:bold">)</span>si<span style="color:#ff0080; font-weight:bold">-&gt;</span>intrcount<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_NUMLOCALINTS<span style="color:#ff0080; font-weight:bold">):</span>
		int_val <span style="color:#ff0080; font-weight:bold">= (</span>int32<span style="color:#ff0080; font-weight:bold">)</span>si<span style="color:#ff0080; font-weight:bold">-&gt;</span>local_intrcount<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> val_size<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_HOSTREG<span style="color:#ff0080; font-weight:bold">):</span>
	<span style="color:#ff0080; font-weight:bold">{</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_HOSTREG<span style="color:#ff0080; font-weight:bold">):</span>
	<span style="color:#ff0080; font-weight:bold">{</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;IOV_HOSTREG unsupported</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_GVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_DEVREG<span style="color:#ff0080; font-weight:bold">):</span>
	<span style="color:#ff0080; font-weight:bold">{</span>
		sdreg_t <span style="color:#ff0080; font-weight:bold">*</span>sd_ptr <span style="color:#ff0080; font-weight:bold">= (</span>sdreg_t <span style="color:#ff0080; font-weight:bold">*)</span>params<span style="color:#ff0080; font-weight:bold">;</span>
		uint8 data<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdioh_cfg_read</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">,</span> sd_ptr<span style="color:#ff0080; font-weight:bold">-&gt;</span>func<span style="color:#ff0080; font-weight:bold">,</span> sd_ptr<span style="color:#ff0080; font-weight:bold">-&gt;</span>offset<span style="color:#ff0080; font-weight:bold">, &amp;</span>data<span style="color:#ff0080; font-weight:bold">)) {</span>
			bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_SDIO_ERROR<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		int_val <span style="color:#ff0080; font-weight:bold">= (</span><span style="color:#8080c0; font-weight:bold">int</span><span style="color:#ff0080; font-weight:bold">)</span>data<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">bcopy</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>int_val<span style="color:#ff0080; font-weight:bold">,</span> arg<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>int_val<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">case</span> <span style="color:#004466">IOV_SVAL</span><span style="color:#ff0080; font-weight:bold">(</span>IOV_DEVREG<span style="color:#ff0080; font-weight:bold">):</span>
	<span style="color:#ff0080; font-weight:bold">{</span>
		sdreg_t <span style="color:#ff0080; font-weight:bold">*</span>sd_ptr <span style="color:#ff0080; font-weight:bold">= (</span>sdreg_t <span style="color:#ff0080; font-weight:bold">*)</span>params<span style="color:#ff0080; font-weight:bold">;</span>
		uint8 data <span style="color:#ff0080; font-weight:bold">= (</span>uint8<span style="color:#ff0080; font-weight:bold">)</span>sd_ptr<span style="color:#ff0080; font-weight:bold">-&gt;</span>value<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdioh_cfg_write</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">,</span> sd_ptr<span style="color:#ff0080; font-weight:bold">-&gt;</span>func<span style="color:#ff0080; font-weight:bold">,</span> sd_ptr<span style="color:#ff0080; font-weight:bold">-&gt;</span>offset<span style="color:#ff0080; font-weight:bold">, &amp;</span>data<span style="color:#ff0080; font-weight:bold">)) {</span>
			bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_SDIO_ERROR<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>


	<span style="color:#bb7977; font-weight:bold">default</span><span style="color:#ff0080; font-weight:bold">:</span>
		bcmerror <span style="color:#ff0080; font-weight:bold">=</span> BCME_UNSUPPORTED<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>
exit<span style="color:#ff0080; font-weight:bold">:</span>

	<span style="color:#bb7977; font-weight:bold">return</span> bcmerror<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_cfg_read</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint fnc_num<span style="color:#ff0080; font-weight:bold">,</span> uint32 addr<span style="color:#ff0080; font-weight:bold">,</span> uint8 <span style="color:#ff0080; font-weight:bold">*</span>data<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	SDIOH_API_RC status<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff8000">/* No lock needed since sdioh_request_byte does locking */</span>
	status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdioh_request_byte</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_READ<span style="color:#ff0080; font-weight:bold">,</span> fnc_num<span style="color:#ff0080; font-weight:bold">,</span> addr<span style="color:#ff0080; font-weight:bold">,</span> data<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_cfg_write</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint fnc_num<span style="color:#ff0080; font-weight:bold">,</span> uint32 addr<span style="color:#ff0080; font-weight:bold">,</span> uint8 <span style="color:#ff0080; font-weight:bold">*</span>data<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#ff8000">/* No lock needed since sdioh_request_byte does locking */</span>
	SDIOH_API_RC status<span style="color:#ff0080; font-weight:bold">;</span>
	status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdioh_request_byte</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_WRITE<span style="color:#ff0080; font-weight:bold">,</span> fnc_num<span style="color:#ff0080; font-weight:bold">,</span> addr<span style="color:#ff0080; font-weight:bold">,</span> data<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_cis_read</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint func<span style="color:#ff0080; font-weight:bold">,</span> uint8 <span style="color:#ff0080; font-weight:bold">*</span>cisd<span style="color:#ff0080; font-weight:bold">,</span> uint32 length<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint32 count<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> offset<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 foo<span style="color:#ff0080; font-weight:bold">;</span>
	uint8 <span style="color:#ff0080; font-weight:bold">*</span>cis <span style="color:#ff0080; font-weight:bold">=</span> cisd<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Func = %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>func_cis_ptr<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">]) {</span>
		<span style="color:#004466">bzero</span><span style="color:#ff0080; font-weight:bold">(</span>cis<span style="color:#ff0080; font-weight:bold">,</span> length<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_FAIL<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">spi_lock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#ff0080; font-weight:bold">*</span>cis <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>count <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span> count <span style="color:#ff0080; font-weight:bold">&lt;</span> length<span style="color:#ff0080; font-weight:bold">;</span> count<span style="color:#ff0080; font-weight:bold">++) {</span>
		offset <span style="color:#ff0080; font-weight:bold">=</span>  sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>func_cis_ptr<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">] +</span> count<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdspi_card_regread</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> offset<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">, &amp;</span>foo<span style="color:#ff0080; font-weight:bold">) &lt;</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: regread failed: Can't read CIS</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
			<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_FAIL<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#ff0080; font-weight:bold">*</span>cis <span style="color:#ff0080; font-weight:bold">= (</span>uint8<span style="color:#ff0080; font-weight:bold">)(</span>foo <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xff</span><span style="color:#ff0080; font-weight:bold">);</span>
		cis<span style="color:#ff0080; font-weight:bold">++;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_request_byte</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint rw<span style="color:#ff0080; font-weight:bold">,</span> uint func<span style="color:#ff0080; font-weight:bold">,</span> uint regaddr<span style="color:#ff0080; font-weight:bold">,</span> uint8 <span style="color:#ff0080; font-weight:bold">*</span>byte<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> status<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 cmd_arg<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 rsp5<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">spi_lock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>

	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_FUNCTION<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">);</span>
	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_REG_ADDR<span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">);</span>
	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RW_FLAG<span style="color:#ff0080; font-weight:bold">,</span> rw <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_READ ? <span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>
	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RAW<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_DATA<span style="color:#ff0080; font-weight:bold">,</span> rw <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_READ ? <span style="color:#800080; font-weight:bold">0</span> <span style="color:#ff0080; font-weight:bold">: *</span>byte<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: rw=%d, func=%d, regaddr=0x%08x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> rw<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">,</span>
	                              SDIOH_CMD_52<span style="color:#ff0080; font-weight:bold">,</span> cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, &amp;</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>rsp5 <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0x00</span><span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: rsp5 flags is 0x%x func=%d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		        __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> rsp5<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#ff8000">/* ASSERT(0); */</span>
		<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_FAIL<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>rw <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_READ<span style="color:#ff0080; font-weight:bold">)</span>
		<span style="color:#ff0080; font-weight:bold">*</span>byte <span style="color:#ff0080; font-weight:bold">=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">&gt;&gt;</span> <span style="color:#800080; font-weight:bold">24</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_request_word</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint cmd_type<span style="color:#ff0080; font-weight:bold">,</span> uint rw<span style="color:#ff0080; font-weight:bold">,</span> uint func<span style="color:#ff0080; font-weight:bold">,</span> uint addr<span style="color:#ff0080; font-weight:bold">,</span>
                   uint32 <span style="color:#ff0080; font-weight:bold">*</span>word<span style="color:#ff0080; font-weight:bold">,</span> uint nbytes<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> status<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">spi_lock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>rw <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_READ<span style="color:#ff0080; font-weight:bold">)</span>
		status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regread</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> addr<span style="color:#ff0080; font-weight:bold">,</span> nbytes<span style="color:#ff0080; font-weight:bold">,</span> word<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">else</span>
		status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> addr<span style="color:#ff0080; font-weight:bold">,</span> nbytes<span style="color:#ff0080; font-weight:bold">, *</span>word<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>status <span style="color:#ff0080; font-weight:bold">==</span> SUCCESS ?  SDIOH_API_RC_SUCCESS <span style="color:#ff0080; font-weight:bold">:</span> SDIOH_API_RC_FAIL<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> SDIOH_API_RC
<span style="color:#004466">sdioh_request_buffer</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint pio_dma<span style="color:#ff0080; font-weight:bold">,</span> uint fix_inc<span style="color:#ff0080; font-weight:bold">,</span> uint rw<span style="color:#ff0080; font-weight:bold">,</span> uint func<span style="color:#ff0080; font-weight:bold">,</span>
                     uint addr<span style="color:#ff0080; font-weight:bold">,</span> uint reg_width<span style="color:#ff0080; font-weight:bold">,</span> uint buflen_u<span style="color:#ff0080; font-weight:bold">,</span> uint8 <span style="color:#ff0080; font-weight:bold">*</span>buffer<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">void</span> <span style="color:#ff0080; font-weight:bold">*</span>pkt<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> len<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> buflen <span style="color:#ff0080; font-weight:bold">= (</span><span style="color:#8080c0; font-weight:bold">int</span><span style="color:#ff0080; font-weight:bold">)</span>buflen_u<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">bool</span> fifo <span style="color:#ff0080; font-weight:bold">= (</span>fix_inc <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_DATA_FIX<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#004466">spi_lock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#004466">ASSERT</span><span style="color:#ff0080; font-weight:bold">(</span>reg_width <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">4</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#004466">ASSERT</span><span style="color:#ff0080; font-weight:bold">(</span>buflen_u <span style="color:#ff0080; font-weight:bold">&lt; (</span><span style="color:#800080; font-weight:bold">1</span> <span style="color:#ff0080; font-weight:bold">&lt;&lt;</span> <span style="color:#800080; font-weight:bold">30</span><span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#004466">ASSERT</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">]);</span>

	<span style="color:#004466">sd_data</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: %c len %d r_cnt %d t_cnt %d, pkt &#64;0x%p</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
	         __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> rw <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_READ ? <span style="color:#a68500">'R'</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">'W'</span><span style="color:#ff0080; font-weight:bold">,</span>
	         buflen_u<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>r_cnt<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>t_cnt<span style="color:#ff0080; font-weight:bold">,</span> pkt<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#ff8000">/* Break buffer down into blocksize chunks:</span>
<span style="color:#ff8000">	 * Bytemode: 1 block at a time.</span>
<span style="color:#ff8000">	 */</span>
	<span style="color:#bb7977; font-weight:bold">while</span> <span style="color:#ff0080; font-weight:bold">(</span>buflen <span style="color:#ff0080; font-weight:bold">&gt;</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_blockmode<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#ff8000">/* Max xfer is Page size */</span>
			len <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">MIN</span><span style="color:#ff0080; font-weight:bold">(</span>SD_PAGE<span style="color:#ff0080; font-weight:bold">,</span> buflen<span style="color:#ff0080; font-weight:bold">);</span>

			<span style="color:#ff8000">/* Round down to a block boundry */</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>buflen <span style="color:#ff0080; font-weight:bold">&gt;</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">])</span>
				len <span style="color:#ff0080; font-weight:bold">= (</span>len<span style="color:#ff0080; font-weight:bold">/</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">]) *</span>
				        sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">];</span>
		<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
			<span style="color:#ff8000">/* Byte mode: One block at a time */</span>
			len <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">MIN</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">],</span> buflen<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdspi_card_buf</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> rw<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> fifo<span style="color:#ff0080; font-weight:bold">,</span> addr<span style="color:#ff0080; font-weight:bold">,</span> len<span style="color:#ff0080; font-weight:bold">, (</span>uint32 <span style="color:#ff0080; font-weight:bold">*)</span>buffer<span style="color:#ff0080; font-weight:bold">) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_FAIL<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		buffer <span style="color:#ff0080; font-weight:bold">+=</span> len<span style="color:#ff0080; font-weight:bold">;</span>
		buflen <span style="color:#ff0080; font-weight:bold">-=</span> len<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span>fifo<span style="color:#ff0080; font-weight:bold">)</span>
			addr <span style="color:#ff0080; font-weight:bold">+=</span> len<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">return</span> SDIOH_API_RC_SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_abort</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint func<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint8 spi_databuf<span style="color:#ff0080; font-weight:bold">[] = {</span> <span style="color:#800080; font-weight:bold">0x74</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0x80</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0x00</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0x0C</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0x95</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span>
	                        <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">};</span>
	uint8 spi_rspbuf<span style="color:#ff0080; font-weight:bold">[] = {</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span>
	                       <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">};</span>
	<span style="color:#8080c0; font-weight:bold">int</span> err <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;Sending SPI Abort to F%d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">));</span>
	spi_databuf<span style="color:#ff0080; font-weight:bold">[</span><span style="color:#800080; font-weight:bold">4</span><span style="color:#ff0080; font-weight:bold">] =</span> func <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0x7</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff8000">/* write to function 0, addr 6 (IOABORT) func # in 3 LSBs. */</span>
	<span style="color:#004466">spi_sendrecv</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> spi_databuf<span style="color:#ff0080; font-weight:bold">,</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>spi_databuf<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#bb7977; font-weight:bold">return</span> err<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span>
<span style="color:#004466">sdioh_abort</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint fnum<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> ret<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">spi_lock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
	ret <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_abort</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> fnum<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#bb7977; font-weight:bold">return</span> ret<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">int</span>
<span style="color:#004466">sdioh_start</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> stage<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">int</span>
<span style="color:#004466">sdioh_stop</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>


<span style="color:#ff8000">/*</span>
<span style="color:#ff8000"> * Private/Static work routines</span>
<span style="color:#ff8000"> */</span>
<span style="color:#8080c0; font-weight:bold">static bool</span>
<span style="color:#004466">sdspi_reset</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> host_reset<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> client_reset<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
		<span style="color:#bb7977; font-weight:bold">return</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">spi_lock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#ff8000">/* Reset client card */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>client_reset <span style="color:#ff0080; font-weight:bold">&amp;&amp; (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>adapter_slot <span style="color:#ff0080; font-weight:bold">!= -</span><span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_IOABORT<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0x8</span><span style="color:#ff0080; font-weight:bold">) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Cannot write to card reg 0x%x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
			        __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_IOABORT<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">else</span>
			sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rca <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* The host reset is a NOP in the sd-spi case. */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>host_reset<span style="color:#ff0080; font-weight:bold">) {</span>
		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_mode <span style="color:#ff0080; font-weight:bold">=</span> SDIOH_MODE_SPI<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#004466">spi_unlock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">return</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_host_init</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#004466">sdspi_reset</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#ff8000">/* Default power on mode is SD1 */</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_mode <span style="color:#ff0080; font-weight:bold">=</span> SDIOH_MODE_SPI<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>polled_mode <span style="color:#ff0080; font-weight:bold">=</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>host_init_done <span style="color:#ff0080; font-weight:bold">=</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_init_done <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>adapter_slot <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>SUCCESS<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0; font-weight:bold">#define CMD0_RETRIES 3</span>
<span style="color:#0080c0; font-weight:bold">#define CMD5_RETRIES 10</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">get_ocr</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint32 <span style="color:#ff0080; font-weight:bold">*</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> uint32 <span style="color:#ff0080; font-weight:bold">*</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint32 rsp5<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> retries<span style="color:#ff0080; font-weight:bold">,</span> status<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#ff8000">/* First issue a CMD0 to get the card into SPI mode. */</span>
	<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>retries <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span> retries <span style="color:#ff0080; font-weight:bold">&lt;=</span> CMD0_RETRIES<span style="color:#ff0080; font-weight:bold">;</span> retries<span style="color:#ff0080; font-weight:bold">++) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">,</span>
		                              SDIOH_CMD_0<span style="color:#ff0080; font-weight:bold">, *</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: No response to CMD0</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
			<span style="color:#bb7977; font-weight:bold">continue</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, &amp;</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> SPI_RSP_ILL_CMD<span style="color:#ff0080; font-weight:bold">)) {</span>
			<span style="color:#004466">printf</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#a68500">&quot;%s: Card already initialized (continuing)</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> SPI_RSP_IDLE<span style="color:#ff0080; font-weight:bold">)) {</span>
			<span style="color:#004466">printf</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#a68500">&quot;%s: Card in SPI mode</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>retries <span style="color:#ff0080; font-weight:bold">&gt;</span> CMD0_RETRIES<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Too many retries for CMD0</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* Get the Card's Operation Condition. */</span>
	<span style="color:#ff8000">/* Occasionally the board takes a while to become ready. */</span>
	<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>retries <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span> retries <span style="color:#ff0080; font-weight:bold">&lt;=</span> CMD5_RETRIES<span style="color:#ff0080; font-weight:bold">;</span> retries<span style="color:#ff0080; font-weight:bold">++) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">,</span>
		                              SDIOH_CMD_5<span style="color:#ff0080; font-weight:bold">, *</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: No response to CMD5</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
			<span style="color:#bb7977; font-weight:bold">continue</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#004466">printf</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#a68500">&quot;CMD5 response data was: 0x%08x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data<span style="color:#ff0080; font-weight:bold">);</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data<span style="color:#ff0080; font-weight:bold">,</span> RSP4_CARD_READY<span style="color:#ff0080; font-weight:bold">)) {</span>
			<span style="color:#004466">printf</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#a68500">&quot;%s: Card ready</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>retries <span style="color:#ff0080; font-weight:bold">&gt;</span> CMD5_RETRIES<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Too many retries for CMD5</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff0080; font-weight:bold">*</span>cmd_rsp <span style="color:#ff0080; font-weight:bold">=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sdspi_crc_onoff</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd_crc ? <span style="color:#800080; font-weight:bold">1</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>SUCCESS<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_crc_onoff</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> use_crc<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint32 args<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> status<span style="color:#ff0080; font-weight:bold">;</span>

	args <span style="color:#ff0080; font-weight:bold">=</span> use_crc ? <span style="color:#800080; font-weight:bold">1</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">,</span>
	                              SDIOH_CMD_59<span style="color:#ff0080; font-weight:bold">,</span> args<span style="color:#ff0080; font-weight:bold">,</span> NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: No response to CMD59</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;CMD59 response data was: 0x%08x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;SD-SPI CRC turned %s</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> use_crc ? <span style="color:#a68500">&quot;ON&quot;</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">&quot;OFF&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>SUCCESS<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_client_init</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint8 fn_ints<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Powering up slot %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>adapter_slot<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#ff8000">/* Start at ~400KHz clock rate for initialization */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span><span style="color:#004466">spi_start_clock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">128</span><span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;spi_start_clock failed</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span><span style="color:#004466">sdspi_start_power</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;sdspi_start_power failed</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>num_funcs <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: No IO funcs!</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">sdspi_card_enablefuncs</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#004466">set_client_block_size</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> BLOCK_SIZE_4318<span style="color:#ff0080; font-weight:bold">);</span>
	fn_ints <span style="color:#ff0080; font-weight:bold">=</span> INTR_CTL_FUNC1_EN<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>num_funcs <span style="color:#ff0080; font-weight:bold">&gt;=</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">set_client_block_size</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">,</span> sd_f2_blocksize <span style="color:#ff8000">/* BLOCK_SIZE_4328 */</span><span style="color:#ff0080; font-weight:bold">);</span>
		fn_ints <span style="color:#ff0080; font-weight:bold">|=</span> INTR_CTL_FUNC2_EN<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* Enable/Disable Client interrupts */</span>
	<span style="color:#ff8000">/* Turn on here but disable at host controller */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_INTEN<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span>
	                        <span style="color:#ff0080; font-weight:bold">(</span>fn_ints <span style="color:#ff0080; font-weight:bold">|</span> INTR_CTL_MASTER_EN<span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Could not enable ints in CCCR</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* Switch to High-speed clocking mode if both host and device support it */</span>
	<span style="color:#004466">sdspi_set_highspeed_mode</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, (</span><span style="color:#8080c0; font-weight:bold">bool</span><span style="color:#ff0080; font-weight:bold">)</span>sd_hiok<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#ff8000">/* After configuring for High-Speed mode, set the desired clock rate. */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span><span style="color:#004466">spi_start_clock</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, (</span>uint16<span style="color:#ff0080; font-weight:bold">)</span>sd_divisor<span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;spi_start_clock failed</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_init_done <span style="color:#ff0080; font-weight:bold">=</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_set_highspeed_mode</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> HSMode<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint32 regdata<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> status<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">bool</span> hsmode<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>HSMode <span style="color:#ff0080; font-weight:bold">==</span> TRUE<span style="color:#ff0080; font-weight:bold">) {</span>

		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;Attempting to enable High-Speed mode.</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regread</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_SPEED_CONTROL<span style="color:#ff0080; font-weight:bold">,</span>
		                                 <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">, &amp;</span>regdata<span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>regdata <span style="color:#ff0080; font-weight:bold">&amp;</span> SDIO_SPEED_SHS<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;Device supports High-Speed mode.</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>

			regdata <span style="color:#ff0080; font-weight:bold">|=</span> SDIO_SPEED_EHS<span style="color:#ff0080; font-weight:bold">;</span>

			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;Writing %08x to Card at %08x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
			         regdata<span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_SPEED_CONTROL<span style="color:#ff0080; font-weight:bold">));</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_SPEED_CONTROL<span style="color:#ff0080; font-weight:bold">,</span>
			                                  <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> regdata<span style="color:#ff0080; font-weight:bold">)) !=</span> BCME_OK<span style="color:#ff0080; font-weight:bold">) {</span>
				<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#ff0080; font-weight:bold">}</span>

			hsmode <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>

			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;High-speed clocking mode enabled.</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;Device does not support High-Speed Mode.</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
			hsmode <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regread</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_SPEED_CONTROL<span style="color:#ff0080; font-weight:bold">,</span>
		                                 <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">, &amp;</span>regdata<span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		regdata <span style="color:#ff0080; font-weight:bold">= ~</span>SDIO_SPEED_EHS<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;Writing %08x to Card at %08x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		         regdata<span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_SPEED_CONTROL<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_SPEED_CONTROL<span style="color:#ff0080; font-weight:bold">,</span>
		                                  <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> regdata<span style="color:#ff0080; font-weight:bold">)) !=</span> BCME_OK<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;Low-speed clocking mode enabled.</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
		hsmode <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">spi_controller_highspeed_mode</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> hsmode<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#bb7977; font-weight:bold">return</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">bool</span>
<span style="color:#004466">sdspi_start_power</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint32 cmd_arg<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 cmd_rsp<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#ff8000">/* Get the Card's Operation Condition.  Occasionally the board</span>
<span style="color:#ff8000">	 * takes a while to become ready</span>
<span style="color:#ff8000">	 */</span>

	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">get_ocr</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, &amp;</span>cmd_arg<span style="color:#ff0080; font-weight:bold">, &amp;</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Failed to get OCR; bailing</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;mem_present = %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">,</span> RSP4_MEM_PRESENT<span style="color:#ff0080; font-weight:bold">)));</span>
	<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;num_funcs = %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">,</span> RSP4_NUM_FUNCS<span style="color:#ff0080; font-weight:bold">)));</span>
	<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;card_ready = %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">,</span> RSP4_CARD_READY<span style="color:#ff0080; font-weight:bold">)));</span>
	<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;OCR = 0x%x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">,</span> RSP4_IO_OCR<span style="color:#ff0080; font-weight:bold">)));</span>

	<span style="color:#ff8000">/* Verify that the card supports I/O mode */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">,</span> RSP4_NUM_FUNCS<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Card does not support I/O</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>num_funcs <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">,</span> RSP4_NUM_FUNCS<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#ff8000">/* Examine voltage: Arasan only supports 3.3 volts,</span>
<span style="color:#ff8000">	 * so look for 3.2-3.3 Volts and also 3.3-3.4 volts.</span>
<span style="color:#ff8000">	 */</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_rsp<span style="color:#ff0080; font-weight:bold">,</span> RSP4_IO_OCR<span style="color:#ff0080; font-weight:bold">) &amp; (</span><span style="color:#800080; font-weight:bold">0x3</span> <span style="color:#ff0080; font-weight:bold">&lt;&lt;</span> <span style="color:#800080; font-weight:bold">20</span><span style="color:#ff0080; font-weight:bold">)) ==</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;This client does not support 3.3 volts!</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>


	<span style="color:#bb7977; font-weight:bold">return</span> TRUE<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_driver_init</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span><span style="color:#004466">sdspi_host_init</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">sdspi_client_init</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_card_enablefuncs</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> status<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 regdata<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 regaddr<span style="color:#ff0080; font-weight:bold">,</span> fbraddr<span style="color:#ff0080; font-weight:bold">;</span>
	uint8 func<span style="color:#ff0080; font-weight:bold">;</span>
	uint8 <span style="color:#ff0080; font-weight:bold">*</span>ptr<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#ff8000">/* Get the Card's common CIS address */</span>
	ptr <span style="color:#ff0080; font-weight:bold">= (</span>uint8 <span style="color:#ff0080; font-weight:bold">*) &amp;</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>com_cis_ptr<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>regaddr <span style="color:#ff0080; font-weight:bold">=</span> SDIOD_CCCR_CISPTR_0<span style="color:#ff0080; font-weight:bold">;</span> regaddr <span style="color:#ff0080; font-weight:bold">&lt;=</span> SDIOD_CCCR_CISPTR_2<span style="color:#ff0080; font-weight:bold">;</span> regaddr<span style="color:#ff0080; font-weight:bold">++) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regread</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">, &amp;</span>regdata<span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#ff0080; font-weight:bold">*</span>ptr<span style="color:#ff0080; font-weight:bold">++ = (</span>uint8<span style="color:#ff0080; font-weight:bold">)</span> regdata<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* Only the lower 17-bits are valid */</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>com_cis_ptr <span style="color:#ff0080; font-weight:bold">&amp;=</span> <span style="color:#800080; font-weight:bold">0x0001FFFF</span><span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>func_cis_ptr<span style="color:#ff0080; font-weight:bold">[</span><span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">] =</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>com_cis_ptr<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Card's Common CIS Ptr = 0x%x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>com_cis_ptr<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#ff8000">/* Get the Card's function CIS (for each function) */</span>
	<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>fbraddr <span style="color:#ff0080; font-weight:bold">=</span> SDIOD_FBR_STARTADDR<span style="color:#ff0080; font-weight:bold">,</span> func <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>
	     func <span style="color:#ff0080; font-weight:bold">&lt;=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>num_funcs<span style="color:#ff0080; font-weight:bold">;</span> func<span style="color:#ff0080; font-weight:bold">++,</span> fbraddr <span style="color:#ff0080; font-weight:bold">+=</span> SDIOD_FBR_SIZE<span style="color:#ff0080; font-weight:bold">) {</span>
		ptr <span style="color:#ff0080; font-weight:bold">= (</span>uint8 <span style="color:#ff0080; font-weight:bold">*) &amp;</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>func_cis_ptr<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">];</span>
		<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>regaddr <span style="color:#ff0080; font-weight:bold">=</span> SDIOD_FBR_CISPTR_0<span style="color:#ff0080; font-weight:bold">;</span> regaddr <span style="color:#ff0080; font-weight:bold">&lt;=</span> SDIOD_FBR_CISPTR_2<span style="color:#ff0080; font-weight:bold">;</span> regaddr<span style="color:#ff0080; font-weight:bold">++) {</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regread</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> regaddr <span style="color:#ff0080; font-weight:bold">+</span> fbraddr<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">, &amp;</span>regdata<span style="color:#ff0080; font-weight:bold">))</span>
			    <span style="color:#ff0080; font-weight:bold">!=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">)</span>
				<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>

			<span style="color:#ff0080; font-weight:bold">*</span>ptr<span style="color:#ff0080; font-weight:bold">++ = (</span>uint8<span style="color:#ff0080; font-weight:bold">)</span> regdata<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#ff8000">/* Only the lower 17-bits are valid */</span>
		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>func_cis_ptr<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">] &amp;=</span> <span style="color:#800080; font-weight:bold">0x0001FFFF</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Function %d CIS Ptr = 0x%x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		         __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>func_cis_ptr<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">]));</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: write ESCI bit</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#ff8000">/* Enable continuous SPI interrupt (ESCI bit) */</span>
	<span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_BICTRL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0x60</span><span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: enable f1</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#ff8000">/* Enable function 1 on the card */</span>
	regdata <span style="color:#ff0080; font-weight:bold">=</span> SDIO_FUNC_ENABLE_1<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> SDIOD_CCCR_IOEN<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> regdata<span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">)</span>
		<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: done</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#ff8000">/* Read client card reg */</span>
<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_card_regread</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> func<span style="color:#ff0080; font-weight:bold">,</span> uint32 regaddr<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> regsize<span style="color:#ff0080; font-weight:bold">,</span> uint32 <span style="color:#ff0080; font-weight:bold">*</span>data<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> status<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 cmd_arg<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 rsp5<span style="color:#ff0080; font-weight:bold">;</span>

	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>func <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) || (</span>regsize <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">)) {</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_FUNCTION<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_REG_ADDR<span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RW_FLAG<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_XFER_TYPE_READ<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RAW<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_DATA<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_CMD_52<span style="color:#ff0080; font-weight:bold">,</span> cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">))</span>
		    <span style="color:#ff0080; font-weight:bold">!=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, &amp;</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>rsp5 <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0x00</span><span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: rsp5 flags is 0x%x</span><span style="color:#ff00ff; font-weight:bold">\t</span> <span style="color:#a68500">%d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
			        __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> rsp5<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">));</span>

		<span style="color:#ff0080; font-weight:bold">*</span>data <span style="color:#ff0080; font-weight:bold">=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">&gt;&gt;</span> <span style="color:#800080; font-weight:bold">24</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_BYTE_BLK_CNT<span style="color:#ff0080; font-weight:bold">,</span> regsize<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_OP_CODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_BLK_MODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_FUNCTION<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_REG_ADDR<span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_RW_FLAG<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_XFER_TYPE_READ<span style="color:#ff0080; font-weight:bold">);</span>

		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">=</span> regsize<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#ff8000">/* sdspi_cmd_issue() returns with the command complete bit</span>
<span style="color:#ff8000">		 * in the ISR already cleared</span>
<span style="color:#ff8000">		 */</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_CMD_53<span style="color:#ff0080; font-weight:bold">,</span> cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">))</span>
		    <span style="color:#ff0080; font-weight:bold">!=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, &amp;</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>rsp5 <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0x00</span><span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: rsp5 flags is 0x%x</span><span style="color:#ff00ff; font-weight:bold">\t</span> <span style="color:#a68500">%d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
			        __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> rsp5<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">));</span>

		<span style="color:#ff0080; font-weight:bold">*</span>data <span style="color:#ff0080; font-weight:bold">=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>regsize <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#ff0080; font-weight:bold">*</span>data <span style="color:#ff0080; font-weight:bold">&amp;=</span> <span style="color:#800080; font-weight:bold">0xffff</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: CMD53 func %d, addr 0x%x, size %d, data 0x%08x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		         __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">,</span> regsize<span style="color:#ff0080; font-weight:bold">, *</span>data<span style="color:#ff0080; font-weight:bold">));</span>


	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#ff8000">/* write a client register */</span>
<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> func<span style="color:#ff0080; font-weight:bold">,</span> uint32 regaddr<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> regsize<span style="color:#ff0080; font-weight:bold">,</span> uint32 data<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> status<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> rsp5<span style="color:#ff0080; font-weight:bold">,</span> flags<span style="color:#ff0080; font-weight:bold">;</span>

	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>func <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) || (</span>regsize <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">)) {</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_FUNCTION<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_REG_ADDR<span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RW_FLAG<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_XFER_TYPE_WRITE<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RAW<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_DATA<span style="color:#ff0080; font-weight:bold">,</span> data <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xff</span><span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_CMD_52<span style="color:#ff0080; font-weight:bold">,</span> cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">))</span>
		    <span style="color:#ff0080; font-weight:bold">!=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, &amp;</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>
		flags <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> RSP5_FLAGS<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>flags <span style="color:#ff0080; font-weight:bold">&amp;&amp; (</span>flags <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0x10</span><span style="color:#ff0080; font-weight:bold">))</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: rsp5.rsp5.flags = 0x%x, expecting 0x10</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
			        __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span>  flags<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_BYTE_BLK_CNT<span style="color:#ff0080; font-weight:bold">,</span> regsize<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_OP_CODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_BLK_MODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_FUNCTION<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_REG_ADDR<span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_RW_FLAG<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_XFER_TYPE_WRITE<span style="color:#ff0080; font-weight:bold">);</span>

		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">=</span> regsize<span style="color:#ff0080; font-weight:bold">;</span>
		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>cmd53_wr_data <span style="color:#ff0080; font-weight:bold">=</span> data<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: CMD53 func %d, addr 0x%x, size %d, data 0x%08x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		         __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> regaddr<span style="color:#ff0080; font-weight:bold">,</span> regsize<span style="color:#ff0080; font-weight:bold">,</span> data<span style="color:#ff0080; font-weight:bold">));</span>

		<span style="color:#ff8000">/* sdspi_cmd_issue() returns with the command complete bit</span>
<span style="color:#ff8000">		 * in the ISR already cleared</span>
<span style="color:#ff8000">		 */</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_CMD_53<span style="color:#ff0080; font-weight:bold">,</span> cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> NULL<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">))</span>
		    <span style="color:#ff0080; font-weight:bold">!=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, &amp;</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>rsp5 <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0x00</span><span style="color:#ff0080; font-weight:bold">)</span>
			<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: rsp5 flags = 0x%x, expecting 0x00</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
			        __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span>  rsp5<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">void</span>
<span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> uint32 <span style="color:#ff0080; font-weight:bold">*</span>rsp_buffer<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> count <span style="color:#ff8000">/* num 32 bit words */</span><span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#ff0080; font-weight:bold">*</span>rsp_buffer <span style="color:#ff0080; font-weight:bold">=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_response<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">int</span> max_errors <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>

<span style="color:#0080c0; font-weight:bold">#define SPI_MAX_PKT_LEN		768</span>
uint8	spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>SPI_MAX_PKT_LEN<span style="color:#ff0080; font-weight:bold">];</span>
uint8	spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>SPI_MAX_PKT_LEN<span style="color:#ff0080; font-weight:bold">];</span>

<span style="color:#ff8000">/* datalen is used for CMD53 length only (0 for sd-&gt;data_xfer_count) */</span>
<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> use_dma<span style="color:#ff0080; font-weight:bold">,</span> uint32 cmd<span style="color:#ff0080; font-weight:bold">,</span> uint32 arg<span style="color:#ff0080; font-weight:bold">,</span>
                uint32 <span style="color:#ff0080; font-weight:bold">*</span>data<span style="color:#ff0080; font-weight:bold">,</span> uint32 datalen<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint32 cmd_reg<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> arg<span style="color:#ff0080; font-weight:bold">;</span>
	uint8 cmd_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0x95</span><span style="color:#ff0080; font-weight:bold">;</span>		<span style="color:#ff8000">/* correct CRC for CMD0 and don't care for others. */</span>
	uint16 dat_crc<span style="color:#ff0080; font-weight:bold">;</span>
	uint8 cmd52data <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	uint32 i<span style="color:#ff0080; font-weight:bold">,</span> j<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 spi_datalen <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	uint32 spi_pre_cmd_pad	<span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	uint32 spi_max_response_pad <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">128</span><span style="color:#ff0080; font-weight:bold">;</span>

	cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_DIR<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>
	cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_CMD_INDEX<span style="color:#ff0080; font-weight:bold">,</span> cmd<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RW_FLAG<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">) {</span>	<span style="color:#ff8000">/* Same for CMD52 and CMD53 */</span>
		cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_RW<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">switch</span> <span style="color:#ff0080; font-weight:bold">(</span>cmd<span style="color:#ff0080; font-weight:bold">) {</span>
	<span style="color:#bb7977; font-weight:bold">case</span> SDIOH_CMD_59<span style="color:#ff0080; font-weight:bold">:</span>	<span style="color:#ff8000">/* CRC_ON_OFF (SPI Mode Only) - Response R1 */</span>
		cmd52data <span style="color:#ff0080; font-weight:bold">=</span> arg <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0x1</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">case</span> SDIOH_CMD_0<span style="color:#ff0080; font-weight:bold">:</span>	<span style="color:#ff8000">/* Set Card to Idle State - No Response */</span>
	<span style="color:#bb7977; font-weight:bold">case</span> SDIOH_CMD_5<span style="color:#ff0080; font-weight:bold">:</span>	<span style="color:#ff8000">/* Send Operation condition - Response R4 */</span>
		<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: CMD%d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> cmd<span style="color:#ff0080; font-weight:bold">));</span>
		spi_datalen <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">44</span><span style="color:#ff0080; font-weight:bold">;</span>
		spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">12</span><span style="color:#ff0080; font-weight:bold">;</span>
		spi_max_response_pad <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">28</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> SDIOH_CMD_3<span style="color:#ff0080; font-weight:bold">:</span>	<span style="color:#ff8000">/* Ask card to send RCA - Response R6 */</span>
	<span style="color:#bb7977; font-weight:bold">case</span> SDIOH_CMD_7<span style="color:#ff0080; font-weight:bold">:</span>	<span style="color:#ff8000">/* Select card - Response R1 */</span>
	<span style="color:#bb7977; font-weight:bold">case</span> SDIOH_CMD_15<span style="color:#ff0080; font-weight:bold">:</span>	<span style="color:#ff8000">/* Set card to inactive state - Response None */</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: CMD%d is invalid for SPI Mode.</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> cmd<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">case</span> SDIOH_CMD_52<span style="color:#ff0080; font-weight:bold">:</span>	<span style="color:#ff8000">/* IO R/W Direct (single byte) - Response R5 */</span>
		cmd52data <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_DATA<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> arg<span style="color:#ff0080; font-weight:bold">;</span>
		cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_FUNC<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_FUNCTION<span style="color:#ff0080; font-weight:bold">));</span>
		cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_ADDR<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_REG_ADDR<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#ff8000">/* Display trace for byte write */</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RW_FLAG<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: CMD52: Wr F:%d &#64;0x%04x=%02x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
			          __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span>
			          <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_FUNCTION<span style="color:#ff0080; font-weight:bold">),</span>
			          <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_REG_ADDR<span style="color:#ff0080; font-weight:bold">),</span>
			          cmd52data<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		spi_datalen <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">32</span><span style="color:#ff0080; font-weight:bold">;</span>
		spi_max_response_pad <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">28</span><span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">case</span> SDIOH_CMD_53<span style="color:#ff0080; font-weight:bold">:</span>	<span style="color:#ff8000">/* IO R/W Extended (multiple bytes/blocks) */</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> arg<span style="color:#ff0080; font-weight:bold">;</span>
		cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_FUNC<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_FUNCTION<span style="color:#ff0080; font-weight:bold">));</span>
		cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_ADDR<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_REG_ADDR<span style="color:#ff0080; font-weight:bold">));</span>
		cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_BLKMODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
		cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_OPCODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_OP_CODE<span style="color:#ff0080; font-weight:bold">));</span>
		cmd_reg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_STUFF0<span style="color:#ff0080; font-weight:bold">, (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count<span style="color:#ff0080; font-weight:bold">&gt;&gt;</span><span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">));</span>
		cmd52data <span style="color:#ff0080; font-weight:bold">= (</span>uint8<span style="color:#ff0080; font-weight:bold">)</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count<span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#ff8000">/* Set upper bit in byte count if necessary, but don't set it for 512 bytes. */</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">&gt;</span> <span style="color:#800080; font-weight:bold">255</span><span style="color:#ff0080; font-weight:bold">) &amp;&amp; (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">&lt;</span> <span style="color:#800080; font-weight:bold">512</span><span style="color:#ff0080; font-weight:bold">)) {</span>
			cmd_reg <span style="color:#ff0080; font-weight:bold">|=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_RW<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">) {</span> <span style="color:#ff8000">/* Write */</span>
			spi_max_response_pad <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">32</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_datalen <span style="color:#ff0080; font-weight:bold">= (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">+</span> spi_max_response_pad<span style="color:#ff0080; font-weight:bold">) &amp;</span> <span style="color:#800080; font-weight:bold">0xFFFC</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span> <span style="color:#ff8000">/* Read */</span>

			spi_max_response_pad <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">32</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_datalen <span style="color:#ff0080; font-weight:bold">= (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">+</span> spi_max_response_pad<span style="color:#ff0080; font-weight:bold">) &amp;</span> <span style="color:#800080; font-weight:bold">0xFFFC</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: CMD53: %s F:%d &#64;0x%04x len=0x%02x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		          __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span>
		          <span style="color:#ff0080; font-weight:bold">(</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_reg<span style="color:#ff0080; font-weight:bold">,</span> SPI_RW<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">1</span> ? <span style="color:#a68500">&quot;Wr&quot;</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">&quot;Rd&quot;</span><span style="color:#ff0080; font-weight:bold">),</span>
		          <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_FUNCTION<span style="color:#ff0080; font-weight:bold">),</span>
		          <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_REG_ADDR<span style="color:#ff0080; font-weight:bold">),</span>
		          cmd52data<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">default</span><span style="color:#ff0080; font-weight:bold">:</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Unknown command %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> cmd<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* Set up and issue the SDIO command */</span>
	<span style="color:#004466">memset</span><span style="color:#ff0080; font-weight:bold">(</span>spi_databuf<span style="color:#ff0080; font-weight:bold">,</span> SDSPI_IDLE_PAD<span style="color:#ff0080; font-weight:bold">,</span> spi_datalen<span style="color:#ff0080; font-weight:bold">);</span>
	spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">] = (</span>cmd_reg <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xFF000000</span><span style="color:#ff0080; font-weight:bold">) &gt;&gt;</span> <span style="color:#800080; font-weight:bold">24</span><span style="color:#ff0080; font-weight:bold">;</span>
	spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">] = (</span>cmd_reg <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0x00FF0000</span><span style="color:#ff0080; font-weight:bold">) &gt;&gt;</span> <span style="color:#800080; font-weight:bold">16</span><span style="color:#ff0080; font-weight:bold">;</span>
	spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">] = (</span>cmd_reg <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0x0000FF00</span><span style="color:#ff0080; font-weight:bold">) &gt;&gt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">;</span>
	spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">3</span><span style="color:#ff0080; font-weight:bold">] = (</span>cmd_reg <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0x000000FF</span><span style="color:#ff0080; font-weight:bold">);</span>
	spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">4</span><span style="color:#ff0080; font-weight:bold">] =</span> cmd52data<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#ff8000">/* Generate CRC7 for command, if CRC is enabled, otherwise, a</span>
<span style="color:#ff8000">	 * default CRC7 of 0x95, which is correct for CMD0, is used.</span>
<span style="color:#ff8000">	 */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd_crc<span style="color:#ff0080; font-weight:bold">) {</span>
		cmd_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_crc7</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad<span style="color:#ff0080; font-weight:bold">],</span> <span style="color:#800080; font-weight:bold">5</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#ff0080; font-weight:bold">}</span>
	spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">5</span><span style="color:#ff0080; font-weight:bold">] =</span> cmd_crc<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#0080c0; font-weight:bold">#define SPI_STOP_TRAN		0xFD</span>

	<span style="color:#ff8000">/* for CMD53 Write, put the data into the output buffer  */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>cmd <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_CMD_53<span style="color:#ff0080; font-weight:bold">) &amp;&amp; (</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_RW_FLAG<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>datalen <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">9</span><span style="color:#ff0080; font-weight:bold">] =</span> SDSPI_IDLE_PAD<span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">10</span><span style="color:#ff0080; font-weight:bold">] =</span> SDSPI_START_BLOCK<span style="color:#ff0080; font-weight:bold">;</span>

			<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>i <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span> i <span style="color:#ff0080; font-weight:bold">&lt;</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count<span style="color:#ff0080; font-weight:bold">;</span> i<span style="color:#ff0080; font-weight:bold">++) {</span>
				spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>i <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">11</span> <span style="color:#ff0080; font-weight:bold">+</span> spi_pre_cmd_pad<span style="color:#ff0080; font-weight:bold">] = ((</span>uint8 <span style="color:#ff0080; font-weight:bold">*)</span>data<span style="color:#ff0080; font-weight:bold">)[</span>i<span style="color:#ff0080; font-weight:bold">];</span>
			<span style="color:#ff0080; font-weight:bold">}</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd_crc<span style="color:#ff0080; font-weight:bold">) {</span>
				dat_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_crc16</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">11</span><span style="color:#ff0080; font-weight:bold">],</span> i<span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
				dat_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0xAAAA</span><span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#ff0080; font-weight:bold">}</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>i <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">11</span> <span style="color:#ff0080; font-weight:bold">+</span> spi_pre_cmd_pad<span style="color:#ff0080; font-weight:bold">] = (</span>dat_crc <span style="color:#ff0080; font-weight:bold">&gt;&gt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">) &amp;</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>i <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">12</span> <span style="color:#ff0080; font-weight:bold">+</span> spi_pre_cmd_pad<span style="color:#ff0080; font-weight:bold">] =</span> dat_crc <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">) {</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">9</span><span style="color:#ff0080; font-weight:bold">] =</span> SDSPI_IDLE_PAD<span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">10</span><span style="color:#ff0080; font-weight:bold">] =</span> SDSPI_START_BLOCK<span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">11</span><span style="color:#ff0080; font-weight:bold">]  =</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>cmd53_wr_data <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">12</span><span style="color:#ff0080; font-weight:bold">] = (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>cmd53_wr_data <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0x0000FF00</span><span style="color:#ff0080; font-weight:bold">) &gt;&gt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd_crc<span style="color:#ff0080; font-weight:bold">) {</span>
				dat_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_crc16</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">11</span><span style="color:#ff0080; font-weight:bold">],</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
				dat_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0x22AA</span><span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#ff0080; font-weight:bold">}</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">13</span><span style="color:#ff0080; font-weight:bold">] = (</span>dat_crc <span style="color:#ff0080; font-weight:bold">&gt;&gt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">) &amp;</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">14</span><span style="color:#ff0080; font-weight:bold">] = (</span>dat_crc <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">4</span><span style="color:#ff0080; font-weight:bold">) {</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">9</span><span style="color:#ff0080; font-weight:bold">] =</span> SDSPI_IDLE_PAD<span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">10</span><span style="color:#ff0080; font-weight:bold">] =</span> SDSPI_START_BLOCK<span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">11</span><span style="color:#ff0080; font-weight:bold">]  =</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>cmd53_wr_data <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">12</span><span style="color:#ff0080; font-weight:bold">] = (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>cmd53_wr_data <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0x0000FF00</span><span style="color:#ff0080; font-weight:bold">) &gt;&gt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">13</span><span style="color:#ff0080; font-weight:bold">] = (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>cmd53_wr_data <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0x00FF0000</span><span style="color:#ff0080; font-weight:bold">) &gt;&gt;</span> <span style="color:#800080; font-weight:bold">16</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">14</span><span style="color:#ff0080; font-weight:bold">] = (</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>cmd53_wr_data <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xFF000000</span><span style="color:#ff0080; font-weight:bold">) &gt;&gt;</span> <span style="color:#800080; font-weight:bold">24</span><span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd_crc<span style="color:#ff0080; font-weight:bold">) {</span>
				dat_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_crc16</span><span style="color:#ff0080; font-weight:bold">(&amp;</span>spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">11</span><span style="color:#ff0080; font-weight:bold">],</span> <span style="color:#800080; font-weight:bold">4</span><span style="color:#ff0080; font-weight:bold">);</span>
			<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
				dat_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0x44AA</span><span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#ff0080; font-weight:bold">}</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">15</span><span style="color:#ff0080; font-weight:bold">] = (</span>dat_crc <span style="color:#ff0080; font-weight:bold">&gt;&gt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">) &amp;</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">;</span>
			spi_databuf<span style="color:#ff0080; font-weight:bold">[</span>spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> <span style="color:#800080; font-weight:bold">16</span><span style="color:#ff0080; font-weight:bold">] = (</span>dat_crc <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xFF</span><span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
			<span style="color:#004466">printf</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#a68500">&quot;CMD53 Write: size %d unsupported</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count<span style="color:#ff0080; font-weight:bold">);</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">spi_sendrecv</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> spi_databuf<span style="color:#ff0080; font-weight:bold">,</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">,</span> spi_datalen<span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>i <span style="color:#ff0080; font-weight:bold">=</span> spi_pre_cmd_pad <span style="color:#ff0080; font-weight:bold">+</span> SDSPI_COMMAND_LEN<span style="color:#ff0080; font-weight:bold">;</span> i <span style="color:#ff0080; font-weight:bold">&lt;</span> spi_max_response_pad<span style="color:#ff0080; font-weight:bold">;</span> i<span style="color:#ff0080; font-weight:bold">++) {</span>
		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">] &amp;</span> SDSPI_START_BIT_MASK<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>i <span style="color:#ff0080; font-weight:bold">==</span> spi_max_response_pad<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Did not get a response for CMD%d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> cmd<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* Extract the response. */</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_response <span style="color:#ff0080; font-weight:bold">=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">];</span>

	<span style="color:#ff8000">/* for CMD53 Read, find the start of the response data... */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>cmd <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_CMD_53<span style="color:#ff0080; font-weight:bold">) &amp;&amp; (</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RW_FLAG<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(;</span> i <span style="color:#ff0080; font-weight:bold">&lt;</span> spi_max_response_pad<span style="color:#ff0080; font-weight:bold">;</span> i<span style="color:#ff0080; font-weight:bold">++) {</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">] ==</span> SDSPI_START_BLOCK<span style="color:#ff0080; font-weight:bold">) {</span>
				<span style="color:#bb7977; font-weight:bold">break</span><span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#ff0080; font-weight:bold">}</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>i <span style="color:#ff0080; font-weight:bold">==</span> spi_max_response_pad<span style="color:#ff0080; font-weight:bold">) {</span>
			<span style="color:#004466">printf</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#a68500">&quot;Did not get a start of data phase for CMD%d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> cmd<span style="color:#ff0080; font-weight:bold">);</span>
			max_errors<span style="color:#ff0080; font-weight:bold">++;</span>
			<span style="color:#004466">sdspi_abort</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_FUNCTION<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">];</span>
		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">|=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">] &lt;&lt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">;</span>
		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">|=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">3</span><span style="color:#ff0080; font-weight:bold">] &lt;&lt;</span> <span style="color:#800080; font-weight:bold">16</span><span style="color:#ff0080; font-weight:bold">;</span>
		sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">|=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">4</span><span style="color:#ff0080; font-weight:bold">] &lt;&lt;</span> <span style="color:#800080; font-weight:bold">24</span><span style="color:#ff0080; font-weight:bold">;</span>

		<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>datalen <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">) {</span>
			i<span style="color:#ff0080; font-weight:bold">++;</span>
			<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>j <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span> j <span style="color:#ff0080; font-weight:bold">&lt;</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count<span style="color:#ff0080; font-weight:bold">;</span> j<span style="color:#ff0080; font-weight:bold">++) {</span>
				<span style="color:#ff0080; font-weight:bold">((</span>uint8 <span style="color:#ff0080; font-weight:bold">*)</span>data<span style="color:#ff0080; font-weight:bold">)[</span>j<span style="color:#ff0080; font-weight:bold">] =</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span>j<span style="color:#ff0080; font-weight:bold">];</span>
			<span style="color:#ff0080; font-weight:bold">}</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>sd_crc<span style="color:#ff0080; font-weight:bold">) {</span>
				uint16 recv_crc<span style="color:#ff0080; font-weight:bold">;</span>

				recv_crc <span style="color:#ff0080; font-weight:bold">=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span>j<span style="color:#ff0080; font-weight:bold">] &lt;&lt;</span> <span style="color:#800080; font-weight:bold">8</span> <span style="color:#ff0080; font-weight:bold">|</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span>j<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">];</span>
				dat_crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_crc16</span><span style="color:#ff0080; font-weight:bold">((</span>uint8 <span style="color:#ff0080; font-weight:bold">*)</span>data<span style="color:#ff0080; font-weight:bold">,</span> datalen<span style="color:#ff0080; font-weight:bold">);</span>
				<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>dat_crc <span style="color:#ff0080; font-weight:bold">!=</span> recv_crc<span style="color:#ff0080; font-weight:bold">) {</span>
					<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Incorrect data CRC: expected 0x%04x, &quot;</span>
					        <span style="color:#a68500">&quot;received 0x%04x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
					        __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> dat_crc<span style="color:#ff0080; font-weight:bold">,</span> recv_crc<span style="color:#ff0080; font-weight:bold">));</span>
				<span style="color:#ff0080; font-weight:bold">}</span>
			<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
		<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">4</span><span style="color:#ff0080; font-weight:bold">];</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">|=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">3</span><span style="color:#ff0080; font-weight:bold">] &lt;&lt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">|=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">] &lt;&lt;</span> <span style="color:#800080; font-weight:bold">16</span><span style="color:#ff0080; font-weight:bold">;</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">|=</span> spi_rspbuf<span style="color:#ff0080; font-weight:bold">[</span>i<span style="color:#ff0080; font-weight:bold">+</span><span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">] &lt;&lt;</span> <span style="color:#800080; font-weight:bold">24</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#ff8000">/* Display trace for byte read */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>cmd <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_CMD_52<span style="color:#ff0080; font-weight:bold">) &amp;&amp; (</span><span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD52_RW_FLAG<span style="color:#ff0080; font-weight:bold">) ==</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#004466">sd_trace</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: CMD52: Rd F:%d &#64;0x%04x=%02x</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		          __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span>
		          <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_FUNCTION<span style="color:#ff0080; font-weight:bold">),</span>
		          <span style="color:#004466">GFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_REG_ADDR<span style="color:#ff0080; font-weight:bold">),</span>
		          sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_rsp_data <span style="color:#ff0080; font-weight:bold">&gt;&gt;</span> <span style="color:#800080; font-weight:bold">24</span><span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#ff8000">/*</span>
<span style="color:#ff8000"> * On entry: if single-block or non-block, buffer size &lt;= block size.</span>
<span style="color:#ff8000"> * If multi-block, buffer size is unlimited.</span>
<span style="color:#ff8000"> * Question is how to handle the left-overs in either single- or multi-block.</span>
<span style="color:#ff8000"> * I think the caller should break the buffer up so this routine will always</span>
<span style="color:#ff8000"> * use block size == buffer size to handle the end piece of the buffer</span>
<span style="color:#ff8000"> */</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">sdspi_card_buf</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> rw<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> func<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">bool</span> fifo<span style="color:#ff0080; font-weight:bold">,</span> uint32 addr<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> nbytes<span style="color:#ff0080; font-weight:bold">,</span> uint32 <span style="color:#ff0080; font-weight:bold">*</span>data<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> status<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 cmd_arg<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 rsp5<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> num_blocks<span style="color:#ff0080; font-weight:bold">,</span> blocksize<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">bool</span> local_blockmode<span style="color:#ff0080; font-weight:bold">,</span> local_dma<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">bool</span> read <span style="color:#ff0080; font-weight:bold">=</span> rw <span style="color:#ff0080; font-weight:bold">==</span> SDIOH_READ ? <span style="color:#800080; font-weight:bold">1</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">ASSERT</span><span style="color:#ff0080; font-weight:bold">(</span>nbytes<span style="color:#ff0080; font-weight:bold">);</span>

	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#004466">sd_data</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: %s 53 func %d, %s, addr 0x%x, len %d bytes, r_cnt %d t_cnt %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
	         __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> read ? <span style="color:#a68500">&quot;Rd&quot;</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">&quot;Wr&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> fifo ? <span style="color:#a68500">&quot;FIXED&quot;</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">&quot;INCR&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
	         addr<span style="color:#ff0080; font-weight:bold">,</span> nbytes<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>r_cnt<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>t_cnt<span style="color:#ff0080; font-weight:bold">));</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>read<span style="color:#ff0080; font-weight:bold">)</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>r_cnt<span style="color:#ff0080; font-weight:bold">++;</span> <span style="color:#bb7977; font-weight:bold">else</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>t_cnt<span style="color:#ff0080; font-weight:bold">++;</span>

	local_blockmode <span style="color:#ff0080; font-weight:bold">=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_blockmode<span style="color:#ff0080; font-weight:bold">;</span>
	local_dma <span style="color:#ff0080; font-weight:bold">=</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>sd_use_dma<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#ff8000">/* Don't bother with block mode on small xfers */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>nbytes <span style="color:#ff0080; font-weight:bold">&lt;</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">]) {</span>
		<span style="color:#004466">sd_info</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;setting local blockmode to false: nbytes (%d) != block_size (%d)</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		         nbytes<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">]));</span>
		local_blockmode <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>
		local_dma <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>local_blockmode<span style="color:#ff0080; font-weight:bold">) {</span>
		blocksize <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">MIN</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">],</span> nbytes<span style="color:#ff0080; font-weight:bold">);</span>
		num_blocks <span style="color:#ff0080; font-weight:bold">=</span> nbytes<span style="color:#ff0080; font-weight:bold">/</span>blocksize<span style="color:#ff0080; font-weight:bold">;</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_BYTE_BLK_CNT<span style="color:#ff0080; font-weight:bold">,</span> num_blocks<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_BLK_MODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#ff0080; font-weight:bold">}</span> <span style="color:#bb7977; font-weight:bold">else</span> <span style="color:#ff0080; font-weight:bold">{</span>
		num_blocks <span style="color:#ff0080; font-weight:bold">=</span>  <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>
		blocksize <span style="color:#ff0080; font-weight:bold">=</span> nbytes<span style="color:#ff0080; font-weight:bold">;</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_BYTE_BLK_CNT<span style="color:#ff0080; font-weight:bold">,</span> nbytes<span style="color:#ff0080; font-weight:bold">);</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_BLK_MODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>fifo<span style="color:#ff0080; font-weight:bold">)</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_OP_CODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">else</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_OP_CODE<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>

	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_FUNCTION<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">);</span>
	cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_REG_ADDR<span style="color:#ff0080; font-weight:bold">,</span> addr<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>read<span style="color:#ff0080; font-weight:bold">)</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_RW_FLAG<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_XFER_TYPE_READ<span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">else</span>
		cmd_arg <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">SFIELD</span><span style="color:#ff0080; font-weight:bold">(</span>cmd_arg<span style="color:#ff0080; font-weight:bold">,</span> CMD53_RW_FLAG<span style="color:#ff0080; font-weight:bold">,</span> SDIOH_XFER_TYPE_WRITE<span style="color:#ff0080; font-weight:bold">);</span>

	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>data_xfer_count <span style="color:#ff0080; font-weight:bold">=</span> nbytes<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>func <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">2</span><span style="color:#ff0080; font-weight:bold">) &amp;&amp; (</span>fifo <span style="color:#ff0080; font-weight:bold">==</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">)) {</span>
		<span style="color:#004466">sd_data</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: %s 53 func %d, %s, addr 0x%x, len %d bytes, r_cnt %d t_cnt %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		         __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> read ? <span style="color:#a68500">&quot;Rd&quot;</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">&quot;Wr&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">,</span> fifo ? <span style="color:#a68500">&quot;FIXED&quot;</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">&quot;INCR&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		         addr<span style="color:#ff0080; font-weight:bold">,</span> nbytes<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>r_cnt<span style="color:#ff0080; font-weight:bold">,</span> sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>t_cnt<span style="color:#ff0080; font-weight:bold">));</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* sdspi_cmd_issue() returns with the command complete bit</span>
<span style="color:#ff8000">	 * in the ISR already cleared</span>
<span style="color:#ff8000">	 */</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">((</span>status <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_cmd_issue</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> local_dma<span style="color:#ff0080; font-weight:bold">,</span>
	                              SDIOH_CMD_53<span style="color:#ff0080; font-weight:bold">,</span> cmd_arg<span style="color:#ff0080; font-weight:bold">,</span>
	                              data<span style="color:#ff0080; font-weight:bold">,</span> nbytes<span style="color:#ff0080; font-weight:bold">)) !=</span> SUCCESS<span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: cmd_issue failed for %s</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">, (</span>read ? <span style="color:#a68500">&quot;read&quot;</span> <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#a68500">&quot;write&quot;</span><span style="color:#ff0080; font-weight:bold">)));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> status<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#004466">sdspi_cmd_getrsp</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">, &amp;</span>rsp5<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">);</span>

	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>rsp5 <span style="color:#ff0080; font-weight:bold">!=</span> <span style="color:#800080; font-weight:bold">0x00</span><span style="color:#ff0080; font-weight:bold">) {</span>
		<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: rsp5 flags = 0x%x, expecting 0x00</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span>
		        __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span>  rsp5<span style="color:#ff0080; font-weight:bold">));</span>
		<span style="color:#bb7977; font-weight:bold">return</span> ERROR<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">return</span> SUCCESS<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#8080c0; font-weight:bold">static int</span>
<span style="color:#004466">set_client_block_size</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> func<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> block_size<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> base<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> err <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#004466">sd_err</span><span style="color:#ff0080; font-weight:bold">((</span><span style="color:#a68500">&quot;%s: Setting block size %d, func %d</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#a68500">&quot;</span><span style="color:#ff0080; font-weight:bold">,</span> __FUNCTION__<span style="color:#ff0080; font-weight:bold">,</span> block_size<span style="color:#ff0080; font-weight:bold">,</span> func<span style="color:#ff0080; font-weight:bold">));</span>
	sd<span style="color:#ff0080; font-weight:bold">-&gt;</span>client_block_size<span style="color:#ff0080; font-weight:bold">[</span>func<span style="color:#ff0080; font-weight:bold">] =</span> block_size<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#ff8000">/* Set the block size in the SDIO Card register */</span>
	base <span style="color:#ff0080; font-weight:bold">=</span> func <span style="color:#ff0080; font-weight:bold">*</span> SDIOD_FBR_SIZE<span style="color:#ff0080; font-weight:bold">;</span>
	err <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> base <span style="color:#ff0080; font-weight:bold">+</span> SDIOD_CCCR_BLKSIZE_0<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span> block_size <span style="color:#ff0080; font-weight:bold">&amp;</span> <span style="color:#800080; font-weight:bold">0xff</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(!</span>err<span style="color:#ff0080; font-weight:bold">) {</span>
		err <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#004466">sdspi_card_regwrite</span><span style="color:#ff0080; font-weight:bold">(</span>sd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span> base <span style="color:#ff0080; font-weight:bold">+</span> SDIOD_CCCR_BLKSIZE_1<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">,</span>
		                          <span style="color:#ff0080; font-weight:bold">(</span>block_size <span style="color:#ff0080; font-weight:bold">&gt;&gt;</span> <span style="color:#800080; font-weight:bold">8</span><span style="color:#ff0080; font-weight:bold">) &amp;</span> <span style="color:#800080; font-weight:bold">0xff</span><span style="color:#ff0080; font-weight:bold">);</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/*</span>
<span style="color:#ff8000">	 * Do not set the block size in the SDIO Host register; that</span>
<span style="color:#ff8000">	 * is func dependent and will get done on an individual</span>
<span style="color:#ff8000">	 * transaction basis.</span>
<span style="color:#ff8000">	 */</span>

	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>err ? BCME_SDIO_ERROR <span style="color:#ff0080; font-weight:bold">:</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#ff8000">/* Reset and re-initialize the device */</span>
<span style="color:#8080c0; font-weight:bold">int</span>
<span style="color:#004466">sdioh_sdio_reset</span><span style="color:#ff0080; font-weight:bold">(</span>sdioh_info_t <span style="color:#ff0080; font-weight:bold">*</span>si<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	si<span style="color:#ff0080; font-weight:bold">-&gt;</span>card_init_done <span style="color:#ff0080; font-weight:bold">=</span> FALSE<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#004466">sdspi_client_init</span><span style="color:#ff0080; font-weight:bold">(</span>si<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0; font-weight:bold">#define CRC7_POLYNOM	0x09</span>
<span style="color:#0080c0; font-weight:bold">#define CRC7_CRCHIGHBIT	0x40</span>

<span style="color:#8080c0; font-weight:bold">static</span> uint8 <span style="color:#004466">sdspi_crc7</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">unsigned char</span><span style="color:#ff0080; font-weight:bold">*</span> p<span style="color:#ff0080; font-weight:bold">,</span> uint32 len<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint8 c<span style="color:#ff0080; font-weight:bold">,</span> j<span style="color:#ff0080; font-weight:bold">,</span> bit<span style="color:#ff0080; font-weight:bold">,</span> crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>
	uint32 i<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>i <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span> i <span style="color:#ff0080; font-weight:bold">&lt;</span> len<span style="color:#ff0080; font-weight:bold">;</span> i<span style="color:#ff0080; font-weight:bold">++) {</span>
		c <span style="color:#ff0080; font-weight:bold">= *</span>p<span style="color:#ff0080; font-weight:bold">++;</span>
		<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>j <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0x80</span><span style="color:#ff0080; font-weight:bold">;</span> j<span style="color:#ff0080; font-weight:bold">;</span> j <span style="color:#ff0080; font-weight:bold">&gt;&gt;=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">) {</span>
			bit <span style="color:#ff0080; font-weight:bold">=</span> crc <span style="color:#ff0080; font-weight:bold">&amp;</span> CRC7_CRCHIGHBIT<span style="color:#ff0080; font-weight:bold">;</span>
			crc <span style="color:#ff0080; font-weight:bold">&lt;&lt;=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>c <span style="color:#ff0080; font-weight:bold">&amp;</span> j<span style="color:#ff0080; font-weight:bold">)</span> bit ^<span style="color:#ff0080; font-weight:bold">=</span> CRC7_CRCHIGHBIT<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>bit<span style="color:#ff0080; font-weight:bold">)</span> crc ^<span style="color:#ff0080; font-weight:bold">=</span> CRC7_POLYNOM<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#ff8000">/* Convert the CRC7 to an 8-bit SD CRC */</span>
	crc <span style="color:#ff0080; font-weight:bold">= (</span>crc <span style="color:#ff0080; font-weight:bold">&lt;&lt;</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">) |</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>crc<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#ff0080; font-weight:bold">}</span>

<span style="color:#0080c0; font-weight:bold">#define CRC16_POLYNOM	0x1021</span>
<span style="color:#0080c0; font-weight:bold">#define CRC16_CRCHIGHBIT	0x8000</span>

<span style="color:#8080c0; font-weight:bold">static</span> uint16 <span style="color:#004466">sdspi_crc16</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">unsigned char</span><span style="color:#ff0080; font-weight:bold">*</span> p<span style="color:#ff0080; font-weight:bold">,</span> uint32 len<span style="color:#ff0080; font-weight:bold">)</span>
<span style="color:#ff0080; font-weight:bold">{</span>
	uint32 i<span style="color:#ff0080; font-weight:bold">;</span>
	uint16 j<span style="color:#ff0080; font-weight:bold">,</span> c<span style="color:#ff0080; font-weight:bold">,</span> bit<span style="color:#ff0080; font-weight:bold">;</span>
	uint16 crc <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>i <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">;</span> i <span style="color:#ff0080; font-weight:bold">&lt;</span> len<span style="color:#ff0080; font-weight:bold">;</span> i<span style="color:#ff0080; font-weight:bold">++) {</span>
		c <span style="color:#ff0080; font-weight:bold">= *</span>p<span style="color:#ff0080; font-weight:bold">++;</span>
		<span style="color:#bb7977; font-weight:bold">for</span> <span style="color:#ff0080; font-weight:bold">(</span>j <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0x80</span><span style="color:#ff0080; font-weight:bold">;</span> j<span style="color:#ff0080; font-weight:bold">;</span> j <span style="color:#ff0080; font-weight:bold">&gt;&gt;=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">) {</span>
			bit <span style="color:#ff0080; font-weight:bold">=</span> crc <span style="color:#ff0080; font-weight:bold">&amp;</span> CRC16_CRCHIGHBIT<span style="color:#ff0080; font-weight:bold">;</span>
			crc <span style="color:#ff0080; font-weight:bold">&lt;&lt;=</span> <span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>c <span style="color:#ff0080; font-weight:bold">&amp;</span> j<span style="color:#ff0080; font-weight:bold">)</span> bit ^<span style="color:#ff0080; font-weight:bold">=</span> CRC16_CRCHIGHBIT<span style="color:#ff0080; font-weight:bold">;</span>
			<span style="color:#bb7977; font-weight:bold">if</span> <span style="color:#ff0080; font-weight:bold">(</span>bit<span style="color:#ff0080; font-weight:bold">)</span> crc ^<span style="color:#ff0080; font-weight:bold">=</span> CRC16_POLYNOM<span style="color:#ff0080; font-weight:bold">;</span>
		<span style="color:#ff0080; font-weight:bold">}</span>
	<span style="color:#ff0080; font-weight:bold">}</span>

	<span style="color:#bb7977; font-weight:bold">return</span> <span style="color:#ff0080; font-weight:bold">(</span>crc<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#ff0080; font-weight:bold">}</span>
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated  by cgit v0.8.3.1 at 2011-01-03 14:36:20 (GMT)</div>
</div> <!-- id=cgit -->
</body>
</html>
