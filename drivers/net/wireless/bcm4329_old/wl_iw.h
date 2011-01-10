<<<<<<< HEAD
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='en' lang='en'>
<head>
<title>zendroid - Zen kernel for android</title>
<meta name='generator' content='cgit v0.8.3.1'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit.css'/>
<link rel='alternate' title='Atom feed' href='http://git.zen-kernel.org/zendroid/atom/drivers/net/wireless/bcm4329/wl_iw.h?h=ZENDROID-2.6.35' type='application/atom+xml'/>
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
<a href='/zendroid/?h=ZENDROID-2.6.35'>summary</a><a href='/zendroid/refs/?h=ZENDROID-2.6.35'>refs</a><a href='/zendroid/log/?h=ZENDROID-2.6.35'>log</a><a class='active' href='/zendroid/tree/?h=ZENDROID-2.6.35'>tree</a><a href='/zendroid/commit/?h=ZENDROID-2.6.35'>commit</a><a href='/zendroid/diff/?h=ZENDROID-2.6.35'>diff</a><a href='/zendroid/about/?h=ZENDROID-2.6.35'>about</a></td><td class='form'><form class='right' method='get' action='/zendroid/log/drivers/net/wireless/bcm4329/wl_iw.h'>
<input type='hidden' name='h' value='ZENDROID-2.6.35'/><select name='qt'>
<option value='grep'>log msg</option>
<option value='author'>author</option>
<option value='committer'>committer</option>
</select>
<input class='txt' type='text' size='10' name='q' value=''/>
<input type='submit' value='search'/>
</form>
</td></tr></table>
<div class='content'>path: <a href='/zendroid/tree/?h=ZENDROID-2.6.35'>root</a>/<a href='/zendroid/tree/drivers?h=ZENDROID-2.6.35'>drivers</a>/<a href='/zendroid/tree/drivers/net?h=ZENDROID-2.6.35'>net</a>/<a href='/zendroid/tree/drivers/net/wireless?h=ZENDROID-2.6.35'>wireless</a>/<a href='/zendroid/tree/drivers/net/wireless/bcm4329?h=ZENDROID-2.6.35'>bcm4329</a>/<a href='/zendroid/tree/drivers/net/wireless/bcm4329/wl_iw.h?h=ZENDROID-2.6.35'>wl_iw.h</a> (<a href='/zendroid/plain/drivers/net/wireless/bcm4329/wl_iw.h?h=ZENDROID-2.6.35'>plain</a>)<br/>blob: fd82091478f11681c3893d65e01e3ecea0c8e361
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
</pre></td>
<td class='lines'><pre><code><span style="color:#ff8000">/*</span>
<span style="color:#ff8000"> * Linux Wireless Extensions support</span>
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
<span style="color:#ff8000"> * $Id: wl_iw.h,v 1.5.34.1.6.36.4.1 2010/09/10 19:24:30 Exp $</span>
<span style="color:#ff8000"> */</span>


<span style="color:#0080c0; font-weight:bold">#ifndef _wl_iw_h_</span>
<span style="color:#0080c0; font-weight:bold">#define _wl_iw_h_</span>

<span style="color:#0080c0; font-weight:bold">#include &lt;linux/wireless.h&gt;</span>

<span style="color:#0080c0; font-weight:bold">#include &lt;typedefs.h&gt;</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;proto/ethernet.h&gt;</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;wlioctl.h&gt;</span>

<span style="color:#0080c0; font-weight:bold">#define WL_SCAN_PARAMS_SSID_MAX 	10</span>
<span style="color:#0080c0; font-weight:bold">#define GET_SSID</span>			<span style="color:#0000ff">&quot;SSID=&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define GET_CHANNEL</span>			<span style="color:#0000ff">&quot;CH=&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define GET_NPROBE</span> 			<span style="color:#0000ff">&quot;NPROBE=&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define GET_ACTIVE_ASSOC_DWELL</span>  	<span style="color:#0000ff">&quot;ACTIVE=&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define GET_PASSIVE_ASSOC_DWELL</span>  	<span style="color:#0000ff">&quot;PASSIVE=&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define GET_HOME_DWELL</span>  		<span style="color:#0000ff">&quot;HOME=&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define GET_SCAN_TYPE</span>			<span style="color:#0000ff">&quot;TYPE=&quot;</span><span style="color:#0080c0; font-weight:bold"></span>

<span style="color:#0080c0; font-weight:bold">#define BAND_GET_CMD</span>				<span style="color:#0000ff">&quot;GETBAND&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define BAND_SET_CMD</span>				<span style="color:#0000ff">&quot;SETBAND&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define DTIM_SKIP_GET_CMD</span>			<span style="color:#0000ff">&quot;DTIMSKIPGET&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define DTIM_SKIP_SET_CMD</span>			<span style="color:#0000ff">&quot;DTIMSKIPSET&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define SETSUSPEND_CMD</span>				<span style="color:#0000ff">&quot;SETSUSPEND&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define PNOSSIDCLR_SET_CMD</span>			<span style="color:#0000ff">&quot;PNOSSIDCLR&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define PNOSETUP_SET_CMD</span>			<span style="color:#0000ff">&quot;PNOSETUP &quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define PNOENABLE_SET_CMD</span>			<span style="color:#0000ff">&quot;PNOFORCE&quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define PNODEBUG_SET_CMD</span>			<span style="color:#0000ff">&quot;PNODEBUG&quot;</span><span style="color:#0080c0; font-weight:bold"></span>

<span style="color:#0080c0; font-weight:bold">#define MAC2STR(a) (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]</span>
<span style="color:#0080c0; font-weight:bold">#define MACSTR</span> <span style="color:#0000ff">&quot;%02x:%02x:%02x:%02x:%02x:%02x&quot;</span><span style="color:#0080c0; font-weight:bold"></span>


<span style="color:#0080c0">typedef</span> <span style="color:#8080c0; font-weight:bold">struct</span> wl_iw_extra_params <span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">int</span> 	target_channel<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span> wl_iw_extra_params_t<span style="color:#ff0080; font-weight:bold">;</span>

<span style="color:#0080c0; font-weight:bold">#define	WL_IW_RSSI_MINVAL	-200</span>
<span style="color:#0080c0; font-weight:bold">#define	WL_IW_RSSI_NO_SIGNAL	-91</span>
<span style="color:#0080c0; font-weight:bold">#define	WL_IW_RSSI_VERY_LOW	-80</span>
<span style="color:#0080c0; font-weight:bold">#define	WL_IW_RSSI_LOW		-70</span>
<span style="color:#0080c0; font-weight:bold">#define	WL_IW_RSSI_GOOD		-68</span>
<span style="color:#0080c0; font-weight:bold">#define	WL_IW_RSSI_VERY_GOOD	-58</span>
<span style="color:#0080c0; font-weight:bold">#define	WL_IW_RSSI_EXCELLENT	-57</span>
<span style="color:#0080c0; font-weight:bold">#define	WL_IW_RSSI_INVALID	 0</span>
<span style="color:#0080c0; font-weight:bold">#define MAX_WX_STRING		80</span>
<span style="color:#0080c0; font-weight:bold">#define isprint(c)		bcm_isprint(c)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_IW_SET_ACTIVE_SCAN	(SIOCIWFIRSTPRIV+1)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_IW_GET_RSSI		(SIOCIWFIRSTPRIV+3)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_IW_SET_PASSIVE_SCAN	(SIOCIWFIRSTPRIV+5)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_IW_GET_LINK_SPEED	(SIOCIWFIRSTPRIV+7)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_IW_GET_CURR_MACADDR	(SIOCIWFIRSTPRIV+9)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_IW_SET_STOP		(SIOCIWFIRSTPRIV+11)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_IW_SET_START		(SIOCIWFIRSTPRIV+13)</span>


<span style="color:#0080c0; font-weight:bold">#define WL_SET_AP_CFG           (SIOCIWFIRSTPRIV+15)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_AP_STA_LIST          (SIOCIWFIRSTPRIV+17)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_AP_MAC_FLTR	        (SIOCIWFIRSTPRIV+19)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_AP_BSS_START         (SIOCIWFIRSTPRIV+21)</span>
<span style="color:#0080c0; font-weight:bold">#define AP_LPB_CMD              (SIOCIWFIRSTPRIV+23)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_AP_STOP              (SIOCIWFIRSTPRIV+25)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_FW_RELOAD            (SIOCIWFIRSTPRIV+27)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_COMBO_SCAN           (SIOCIWFIRSTPRIV+29)</span>
<span style="color:#0080c0; font-weight:bold">#define WL_AP_SPARE3            (SIOCIWFIRSTPRIV+31)</span>
<span style="color:#0080c0; font-weight:bold">#define G_SCAN_RESULTS		(8*1024)</span>
<span style="color:#0080c0; font-weight:bold">#define WE_ADD_EVENT_FIX	0x80</span>
<span style="color:#0080c0; font-weight:bold">#define G_WLAN_SET_ON		0</span>
<span style="color:#0080c0; font-weight:bold">#define G_WLAN_SET_OFF		1</span>

<span style="color:#0080c0; font-weight:bold">#define CHECK_EXTRA_FOR_NULL(extra) \</span>
<span style="color:#0080c0; font-weight:bold">if (!extra) { \</span>
<span style="color:#0080c0; font-weight:bold">	WL_ERROR((</span><span style="color:#0000ff">&quot;%s: error : extra is null pointer</span><span style="color:#ff00ff; font-weight:bold">\n</span><span style="color:#0000ff">&quot;</span><span style="color:#0080c0; font-weight:bold">, __FUNCTION__)); \</span>
<span style="color:#0080c0; font-weight:bold">	return -EINVAL; \</span>
<span style="color:#0080c0; font-weight:bold">}</span>

<span style="color:#0080c0">typedef</span> <span style="color:#8080c0; font-weight:bold">struct</span> wl_iw <span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">char</span> nickname<span style="color:#ff0080; font-weight:bold">[</span>IW_ESSID_MAX_SIZE<span style="color:#ff0080; font-weight:bold">];</span>

	<span style="color:#8080c0; font-weight:bold">struct</span> iw_statistics wstats<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#8080c0; font-weight:bold">int</span> spy_num<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 pwsec<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 gwsec<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">bool</span> privacy_invoked<span style="color:#ff0080; font-weight:bold">;</span>

	<span style="color:#8080c0; font-weight:bold">struct</span> ether_addr spy_addr<span style="color:#ff0080; font-weight:bold">[</span>IW_MAX_SPY<span style="color:#ff0080; font-weight:bold">];</span>
	<span style="color:#8080c0; font-weight:bold">struct</span> iw_quality spy_qual<span style="color:#ff0080; font-weight:bold">[</span>IW_MAX_SPY<span style="color:#ff0080; font-weight:bold">];</span>
	<span style="color:#8080c0; font-weight:bold">void</span>  <span style="color:#ff0080; font-weight:bold">*</span>wlinfo<span style="color:#ff0080; font-weight:bold">;</span>
	dhd_pub_t <span style="color:#ff0080; font-weight:bold">*</span> pub<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span> wl_iw_t<span style="color:#ff0080; font-weight:bold">;</span>

<span style="color:#0080c0; font-weight:bold">#define WLC_IW_SS_CACHE_MAXLEN				512</span>
<span style="color:#0080c0; font-weight:bold">#define WLC_IW_SS_CACHE_CTRL_FIELD_MAXLEN	32</span>
<span style="color:#0080c0; font-weight:bold">#define WLC_IW_BSS_INFO_MAXLEN 				\</span>
<span style="color:#0080c0; font-weight:bold">	(WLC_IW_SS_CACHE_MAXLEN - WLC_IW_SS_CACHE_CTRL_FIELD_MAXLEN)</span>

<span style="color:#0080c0">typedef</span> <span style="color:#8080c0; font-weight:bold">struct</span> wl_iw_ss_cache <span style="color:#ff0080; font-weight:bold">{</span>
	uint32 buflen<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 version<span style="color:#ff0080; font-weight:bold">;</span>
	uint32 count<span style="color:#ff0080; font-weight:bold">;</span>
	wl_bss_info_t bss_info<span style="color:#ff0080; font-weight:bold">[</span><span style="color:#800080; font-weight:bold">1</span><span style="color:#ff0080; font-weight:bold">];</span>
	<span style="color:#8080c0; font-weight:bold">char</span> dummy<span style="color:#ff0080; font-weight:bold">[</span>WLC_IW_BSS_INFO_MAXLEN <span style="color:#ff0080; font-weight:bold">-</span> <span style="color:#bb7977; font-weight:bold">sizeof</span><span style="color:#ff0080; font-weight:bold">(</span>wl_bss_info_t<span style="color:#ff0080; font-weight:bold">)];</span>
	<span style="color:#8080c0; font-weight:bold">int</span> dirty<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">struct</span> wl_iw_ss_cache <span style="color:#ff0080; font-weight:bold">*</span>next<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span> wl_iw_ss_cache_t<span style="color:#ff0080; font-weight:bold">;</span>

<span style="color:#0080c0">typedef</span> <span style="color:#8080c0; font-weight:bold">struct</span> wl_iw_ss_cache_ctrl <span style="color:#ff0080; font-weight:bold">{</span>
	wl_iw_ss_cache_t <span style="color:#ff0080; font-weight:bold">*</span>m_cache_head<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> m_link_down<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">int</span> m_timer_expired<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">char</span> m_active_bssid<span style="color:#ff0080; font-weight:bold">[</span>ETHER_ADDR_LEN<span style="color:#ff0080; font-weight:bold">];</span>
	uint m_prev_scan_mode<span style="color:#ff0080; font-weight:bold">;</span>
	uint m_cons_br_scan_cnt<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">struct</span> timer_list <span style="color:#ff0080; font-weight:bold">*</span>m_timer<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span> wl_iw_ss_cache_ctrl_t<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#0080c0">typedef</span> <span style="color:#8080c0; font-weight:bold">enum</span> broadcast_first_scan <span style="color:#ff0080; font-weight:bold">{</span>
	BROADCAST_SCAN_FIRST_IDLE <span style="color:#ff0080; font-weight:bold">=</span> <span style="color:#800080; font-weight:bold">0</span><span style="color:#ff0080; font-weight:bold">,</span>
	BROADCAST_SCAN_FIRST_STARTED<span style="color:#ff0080; font-weight:bold">,</span>
	BROADCAST_SCAN_FIRST_RESULT_READY<span style="color:#ff0080; font-weight:bold">,</span>
	BROADCAST_SCAN_FIRST_RESULT_CONSUMED
<span style="color:#ff0080; font-weight:bold">}</span> broadcast_first_scan_t<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#0080c0; font-weight:bold">#ifdef SOFTAP</span>
<span style="color:#0080c0; font-weight:bold">#define SSID_LEN	33</span>
<span style="color:#0080c0; font-weight:bold">#define SEC_LEN		16</span>
<span style="color:#0080c0; font-weight:bold">#define KEY_LEN		65</span>
<span style="color:#0080c0; font-weight:bold">#define PROFILE_OFFSET	32</span>
<span style="color:#8080c0; font-weight:bold">struct</span> ap_profile <span style="color:#ff0080; font-weight:bold">{</span>
	uint8	ssid<span style="color:#ff0080; font-weight:bold">[</span>SSID_LEN<span style="color:#ff0080; font-weight:bold">];</span>
	uint8	sec<span style="color:#ff0080; font-weight:bold">[</span>SEC_LEN<span style="color:#ff0080; font-weight:bold">];</span>
	uint8	key<span style="color:#ff0080; font-weight:bold">[</span>KEY_LEN<span style="color:#ff0080; font-weight:bold">];</span>
	uint32	channel<span style="color:#ff0080; font-weight:bold">;</span>
	uint32	preamble<span style="color:#ff0080; font-weight:bold">;</span>
	uint32	max_scb<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">};</span>


<span style="color:#0080c0; font-weight:bold">#define MACLIST_MODE_DISABLED	0</span>
<span style="color:#0080c0; font-weight:bold">#define MACLIST_MODE_ENABLED	1</span>
<span style="color:#0080c0; font-weight:bold">#define MACLIST_MODE_ALLOW	2</span>
<span style="color:#8080c0; font-weight:bold">struct</span> mflist <span style="color:#ff0080; font-weight:bold">{</span>
	uint count<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">struct</span> ether_addr ea<span style="color:#ff0080; font-weight:bold">[</span><span style="color:#800080; font-weight:bold">16</span><span style="color:#ff0080; font-weight:bold">];</span>
<span style="color:#ff0080; font-weight:bold">};</span>

<span style="color:#8080c0; font-weight:bold">struct</span> mac_list_set <span style="color:#ff0080; font-weight:bold">{</span>
	uint32	mode<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">struct</span> mflist white_list<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">struct</span> mflist black_list<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">};</span>
<span style="color:#0080c0; font-weight:bold">#endif</span>

<span style="color:#0080c0; font-weight:bold">#if WIRELESS_EXT &gt; 12</span>
<span style="color:#0080c0; font-weight:bold">#include &lt;net/iw_handler.h&gt;</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">const struct</span> iw_handler_def wl_iw_handler_def<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#0080c0; font-weight:bold">#endif</span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_iw_ioctl</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">struct</span> ifreq <span style="color:#ff0080; font-weight:bold">*</span>rq<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> cmd<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">void</span> <span style="color:#004466">wl_iw_event</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> wl_event_msg_t <span style="color:#ff0080; font-weight:bold">*</span>e<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">void</span><span style="color:#ff0080; font-weight:bold">*</span> data<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_iw_get_wireless_stats</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">struct</span> iw_statistics <span style="color:#ff0080; font-weight:bold">*</span>wstats<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_iw_attach</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">void</span> <span style="color:#ff0080; font-weight:bold">*</span> dhdp<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">void</span> <span style="color:#004466">wl_iw_detach</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">void</span><span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_control_wl_start</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_wake_lock</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_wake_unlock</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_wake_lock_timeout</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_wake_lock_timeout_enable</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_set_suspend_disable</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> val<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_set_suspend</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> val<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_set_dtim_skip</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> val<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_set_packet_filter</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> val<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">net_os_send_hang_message</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#0080c0; font-weight:bold">#if LINUX_VERSION_CODE &gt;= KERNEL_VERSION(2, 6, 27)</span>
<span style="color:#0080c0; font-weight:bold">#define IWE_STREAM_ADD_EVENT(info, stream, ends, iwe, extra) \</span>
<span style="color:#0080c0; font-weight:bold">	iwe_stream_add_event(info, stream, ends, iwe, extra)</span>
<span style="color:#0080c0; font-weight:bold">#define IWE_STREAM_ADD_VALUE(info, event, value, ends, iwe, event_len) \</span>
<span style="color:#0080c0; font-weight:bold">	iwe_stream_add_value(info, event, value, ends, iwe, event_len)</span>
<span style="color:#0080c0; font-weight:bold">#define IWE_STREAM_ADD_POINT(info, stream, ends, iwe, extra) \</span>
<span style="color:#0080c0; font-weight:bold">	iwe_stream_add_point(info, stream, ends, iwe, extra)</span>
<span style="color:#0080c0; font-weight:bold">#else</span>
<span style="color:#0080c0; font-weight:bold">#define IWE_STREAM_ADD_EVENT(info, stream, ends, iwe, extra) \</span>
<span style="color:#0080c0; font-weight:bold">	iwe_stream_add_event(stream, ends, iwe, extra)</span>
<span style="color:#0080c0; font-weight:bold">#define IWE_STREAM_ADD_VALUE(info, event, value, ends, iwe, event_len) \</span>
<span style="color:#0080c0; font-weight:bold">	iwe_stream_add_value(event, value, ends, iwe, event_len)</span>
<span style="color:#0080c0; font-weight:bold">#define IWE_STREAM_ADD_POINT(info, stream, ends, iwe, extra) \</span>
<span style="color:#0080c0; font-weight:bold">	iwe_stream_add_point(stream, ends, iwe, extra)</span>
<span style="color:#0080c0; font-weight:bold">#endif</span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">dhd_pno_enable</span><span style="color:#ff0080; font-weight:bold">(</span>dhd_pub_t <span style="color:#ff0080; font-weight:bold">*</span>dhd<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> pfn_enabled<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">dhd_pno_clean</span><span style="color:#ff0080; font-weight:bold">(</span>dhd_pub_t <span style="color:#ff0080; font-weight:bold">*</span>dhd<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">dhd_pno_set</span><span style="color:#ff0080; font-weight:bold">(</span>dhd_pub_t <span style="color:#ff0080; font-weight:bold">*</span>dhd<span style="color:#ff0080; font-weight:bold">,</span> wlc_ssid_t<span style="color:#ff0080; font-weight:bold">*</span> ssids_local<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> nssid<span style="color:#ff0080; font-weight:bold">,</span> ushort  scan_fr<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">dhd_pno_get_status</span><span style="color:#ff0080; font-weight:bold">(</span>dhd_pub_t <span style="color:#ff0080; font-weight:bold">*</span>dhd<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">dhd_dev_pno_reset</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">dhd_dev_pno_set</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span> wlc_ssid_t<span style="color:#ff0080; font-weight:bold">*</span> ssids_local<span style="color:#ff0080; font-weight:bold">,</span> \
				 <span style="color:#8080c0; font-weight:bold">int</span> nssid<span style="color:#ff0080; font-weight:bold">,</span> ushort  scan_fr<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">dhd_dev_pno_enable</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">,</span>  <span style="color:#8080c0; font-weight:bold">int</span> pfn_enabled<span style="color:#ff0080; font-weight:bold">);</span>
<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">dhd_dev_get_pno_status</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">struct</span> net_device <span style="color:#ff0080; font-weight:bold">*</span>dev<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#0080c0; font-weight:bold">#define PNO_TLV_PREFIX</span>			<span style="color:#0000ff">'S'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define PNO_TLV_VERSION			1</span>
<span style="color:#0080c0; font-weight:bold">#define PNO_TLV_SUBVERSION 		1</span>
<span style="color:#0080c0; font-weight:bold">#define PNO_TLV_RESERVED		0</span>
<span style="color:#0080c0; font-weight:bold">#define PNO_TLV_TYPE_SSID_IE</span>		<span style="color:#0000ff">'S'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define PNO_TLV_TYPE_TIME</span>		<span style="color:#0000ff">'T'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define  PNO_EVENT_UP</span>			<span style="color:#0000ff">&quot;PNO_EVENT&quot;</span><span style="color:#0080c0; font-weight:bold"></span>

<span style="color:#0080c0">typedef</span> <span style="color:#8080c0; font-weight:bold">struct</span> cmd_tlv <span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">char</span> prefix<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">char</span> version<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">char</span> subver<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">char</span> reserved<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span> cmd_tlv_t<span style="color:#ff0080; font-weight:bold">;</span>

<span style="color:#0080c0; font-weight:bold">#if defined(CSCAN)</span>

<span style="color:#0080c0">typedef</span> <span style="color:#8080c0; font-weight:bold">struct</span> cscan_tlv <span style="color:#ff0080; font-weight:bold">{</span>
	<span style="color:#8080c0; font-weight:bold">char</span> prefix<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">char</span> version<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">char</span> subver<span style="color:#ff0080; font-weight:bold">;</span>
	<span style="color:#8080c0; font-weight:bold">char</span> reserved<span style="color:#ff0080; font-weight:bold">;</span>
<span style="color:#ff0080; font-weight:bold">}</span> cscan_tlv_t<span style="color:#ff0080; font-weight:bold">;</span>

<span style="color:#0080c0; font-weight:bold">#define CSCAN_COMMAND</span>				<span style="color:#0000ff">&quot;CSCAN &quot;</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_PREFIX</span> 			<span style="color:#0000ff">'S'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_VERSION			1</span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_SUBVERSION			0</span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_TYPE_SSID_IE</span>			<span style="color:#0000ff">'S'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_TYPE_CHANNEL_IE</span>		<span style="color:#0000ff">'C'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_TYPE_NPROBE_IE</span>		<span style="color:#0000ff">'N'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_TYPE_ACTIVE_IE</span>		<span style="color:#0000ff">'A'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_TYPE_PASSIVE_IE</span>		<span style="color:#0000ff">'P'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_TYPE_HOME_IE</span>			<span style="color:#0000ff">'H'</span><span style="color:#0080c0; font-weight:bold"></span>
<span style="color:#0080c0; font-weight:bold">#define CSCAN_TLV_TYPE_STYPE_IE</span>			<span style="color:#0000ff">'T'</span><span style="color:#0080c0; font-weight:bold"></span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_iw_parse_channel_list_tlv</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">char</span><span style="color:#ff0080; font-weight:bold">**</span> list_str<span style="color:#ff0080; font-weight:bold">,</span> uint16<span style="color:#ff0080; font-weight:bold">*</span> channel_list<span style="color:#ff0080; font-weight:bold">,</span> \
					<span style="color:#8080c0; font-weight:bold">int</span> channel_num<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#ff0080; font-weight:bold">*</span>bytes_left<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_iw_parse_data_tlv</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">char</span><span style="color:#ff0080; font-weight:bold">**</span> list_str<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">void</span>  <span style="color:#ff0080; font-weight:bold">*</span>dst<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> dst_size<span style="color:#ff0080; font-weight:bold">,</span> \
					<span style="color:#8080c0; font-weight:bold">const char</span> token<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> input_size<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#ff0080; font-weight:bold">*</span>bytes_left<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_iw_parse_ssid_list_tlv</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">char</span><span style="color:#ff0080; font-weight:bold">**</span> list_str<span style="color:#ff0080; font-weight:bold">,</span> wlc_ssid_t<span style="color:#ff0080; font-weight:bold">*</span> ssid<span style="color:#ff0080; font-weight:bold">,</span> \
					<span style="color:#8080c0; font-weight:bold">int</span> max<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#ff0080; font-weight:bold">*</span>bytes_left<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_iw_parse_ssid_list</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">char</span><span style="color:#ff0080; font-weight:bold">**</span> list_str<span style="color:#ff0080; font-weight:bold">,</span> wlc_ssid_t<span style="color:#ff0080; font-weight:bold">*</span> ssid<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> idx<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> max<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#0080c0">extern</span> <span style="color:#8080c0; font-weight:bold">int</span> <span style="color:#004466">wl_iw_parse_channel_list</span><span style="color:#ff0080; font-weight:bold">(</span><span style="color:#8080c0; font-weight:bold">char</span><span style="color:#ff0080; font-weight:bold">**</span> list_str<span style="color:#ff0080; font-weight:bold">,</span> uint16<span style="color:#ff0080; font-weight:bold">*</span> channel_list<span style="color:#ff0080; font-weight:bold">,</span> <span style="color:#8080c0; font-weight:bold">int</span> channel_num<span style="color:#ff0080; font-weight:bold">);</span>

<span style="color:#0080c0; font-weight:bold">#endif</span>

<span style="color:#0080c0; font-weight:bold">#endif</span>
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated  by cgit v0.8.3.1 at 2011-01-03 14:39:26 (GMT)</div>
</div> <!-- id=cgit -->
</body>
</html>
=======
/*
 * Linux Wireless Extensions support
 *
 * Copyright (C) 1999-2010, Broadcom Corporation
 * 
 *      Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2 (the "GPL"),
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the
 * following added to such license:
 * 
 *      As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy and
 * distribute the resulting executable under terms of your choice, provided that
 * you also meet, for each linked independent module, the terms and conditions of
 * the license of that module.  An independent module is a module which is not
 * derived from this software.  The special exception does not apply to any
 * modifications of the software.
 * 
 *      Notwithstanding the above, under no circumstances may you combine this
 * software in any way with any other Broadcom software provided under a license
 * other than the GPL, without Broadcom's express prior written consent.
 *
 * $Id: wl_iw.h,v 1.5.34.1.6.35 2010/08/20 02:42:33 Exp $
 */


#ifndef _wl_iw_h_
#define _wl_iw_h_

#include <linux/wireless.h>

#include <typedefs.h>
#include <proto/ethernet.h>
#include <wlioctl.h>

#define WL_SCAN_PARAMS_SSID_MAX 	10
#define GET_SSID			"SSID="
#define GET_CHANNEL			"CH="
#define GET_NPROBE 			"NPROBE="
#define GET_ACTIVE_ASSOC_DWELL  	"ACTIVE="
#define GET_PASSIVE_ASSOC_DWELL  	"PASSIVE="
#define GET_HOME_DWELL  		"HOME="
#define GET_SCAN_TYPE			"TYPE="

#define BAND_GET_CMD				"GETBAND"
#define BAND_SET_CMD				"SETBAND"
#define DTIM_SKIP_GET_CMD			"DTIMSKIPGET"
#define DTIM_SKIP_SET_CMD			"DTIMSKIPSET"
#define SETSUSPEND_CMD				"SETSUSPEND"
#define PNOSSIDCLR_SET_CMD			"PNOSSIDCLR"
#define PNOSETUP_SET_CMD			"PNOSETUP"
#define PNOENABLE_SET_CMD			"PNOFORCE"
#define PNODEBUG_SET_CMD			"PNODEBUG"

#define MAC2STR(a) (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]
#define MACSTR "%02x:%02x:%02x:%02x:%02x:%02x"


typedef struct wl_iw_extra_params {
	int 	target_channel;
} wl_iw_extra_params_t;

#define	WL_IW_RSSI_MINVAL	-200
#define	WL_IW_RSSI_NO_SIGNAL	-91
#define	WL_IW_RSSI_VERY_LOW	-80
#define	WL_IW_RSSI_LOW		-70
#define	WL_IW_RSSI_GOOD		-68
#define	WL_IW_RSSI_VERY_GOOD	-58
#define	WL_IW_RSSI_EXCELLENT	-57
#define	WL_IW_RSSI_INVALID	 0
#define MAX_WX_STRING		80
#define isprint(c)		bcm_isprint(c)
#define WL_IW_SET_ACTIVE_SCAN	(SIOCIWFIRSTPRIV+1)
#define WL_IW_GET_RSSI		(SIOCIWFIRSTPRIV+3)
#define WL_IW_SET_PASSIVE_SCAN	(SIOCIWFIRSTPRIV+5)
#define WL_IW_GET_LINK_SPEED	(SIOCIWFIRSTPRIV+7)
#define WL_IW_GET_CURR_MACADDR	(SIOCIWFIRSTPRIV+9)
#define WL_IW_SET_STOP		(SIOCIWFIRSTPRIV+11)
#define WL_IW_SET_START		(SIOCIWFIRSTPRIV+13)


#define WL_SET_AP_CFG           (SIOCIWFIRSTPRIV+15)
#define WL_AP_STA_LIST          (SIOCIWFIRSTPRIV+17)
#define WL_AP_MAC_FLTR	        (SIOCIWFIRSTPRIV+19)
#define WL_AP_BSS_START         (SIOCIWFIRSTPRIV+21)
#define AP_LPB_CMD              (SIOCIWFIRSTPRIV+23)
#define WL_AP_STOP              (SIOCIWFIRSTPRIV+25)
#define WL_FW_RELOAD            (SIOCIWFIRSTPRIV+27)
#define WL_COMBO_SCAN           (SIOCIWFIRSTPRIV+29)
#define WL_AP_SPARE3            (SIOCIWFIRSTPRIV+31)
#define G_SCAN_RESULTS		(8*1024)
#define WE_ADD_EVENT_FIX	0x80
#define G_WLAN_SET_ON		0
#define G_WLAN_SET_OFF		1

#define CHECK_EXTRA_FOR_NULL(extra) \
if (!extra) { \
	WL_ERROR(("%s: error : extra is null pointer\n", __FUNCTION__)); \
	return -EINVAL; \
}

typedef struct wl_iw {
	char nickname[IW_ESSID_MAX_SIZE];

	struct iw_statistics wstats;

	int spy_num;
	uint32 pwsec;
	uint32 gwsec;
	bool privacy_invoked;

	struct ether_addr spy_addr[IW_MAX_SPY];
	struct iw_quality spy_qual[IW_MAX_SPY];
	void  *wlinfo;
	dhd_pub_t * pub;
} wl_iw_t;

#define WLC_IW_SS_CACHE_MAXLEN				512
#define WLC_IW_SS_CACHE_CTRL_FIELD_MAXLEN	32
#define WLC_IW_BSS_INFO_MAXLEN 				\
	(WLC_IW_SS_CACHE_MAXLEN - WLC_IW_SS_CACHE_CTRL_FIELD_MAXLEN)

typedef struct wl_iw_ss_cache {
	uint32 buflen;
	uint32 version;
	uint32 count;
	wl_bss_info_t bss_info[1];
	char dummy[WLC_IW_BSS_INFO_MAXLEN - sizeof(wl_bss_info_t)];
	int dirty;
	struct wl_iw_ss_cache *next;
} wl_iw_ss_cache_t;

typedef struct wl_iw_ss_cache_ctrl {
	wl_iw_ss_cache_t *m_cache_head;	
	int m_link_down;		
	int m_timer_expired;		
	char m_active_bssid[ETHER_ADDR_LEN];	
	uint m_prev_scan_mode;	
	uint m_cons_br_scan_cnt;	
	struct timer_list *m_timer;	
} wl_iw_ss_cache_ctrl_t;
typedef enum broadcast_first_scan {
	BROADCAST_SCAN_FIRST_IDLE = 0,
	BROADCAST_SCAN_FIRST_STARTED,
	BROADCAST_SCAN_FIRST_RESULT_READY,
	BROADCAST_SCAN_FIRST_RESULT_CONSUMED
} broadcast_first_scan_t;
#ifdef SOFTAP
#define SSID_LEN	33
#define SEC_LEN		16
#define KEY_LEN		65
#define PROFILE_OFFSET	32
struct ap_profile {
	uint8	ssid[SSID_LEN];
	uint8	sec[SEC_LEN];
	uint8	key[KEY_LEN];
	uint32	channel;
	uint32	preamble;
	uint32	max_scb;
};


#define MACLIST_MODE_DISABLED	0
#define MACLIST_MODE_ENABLED	1
#define MACLIST_MODE_ALLOW	2
struct mflist {
	uint count;
	struct ether_addr ea[16];
};

struct mac_list_set {
	uint32	mode;
	struct mflist white_list;
	struct mflist black_list;
};
#endif

#if WIRELESS_EXT > 12
#include <net/iw_handler.h>
extern const struct iw_handler_def wl_iw_handler_def;
#endif

extern int wl_iw_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
extern void wl_iw_event(struct net_device *dev, wl_event_msg_t *e, void* data);
extern int wl_iw_get_wireless_stats(struct net_device *dev, struct iw_statistics *wstats);
int wl_iw_attach(struct net_device *dev, void * dhdp);
void wl_iw_detach(void);
int wl_control_wl_start(struct net_device *dev);

extern int net_os_wake_lock(struct net_device *dev);
extern int net_os_wake_unlock(struct net_device *dev);
extern int net_os_wake_lock_timeout(struct net_device *dev);
extern int net_os_wake_lock_timeout_enable(struct net_device *dev);
extern int net_os_set_suspend_disable(struct net_device *dev, int val);
extern int net_os_set_suspend(struct net_device *dev, int val);
extern int net_os_set_dtim_skip(struct net_device *dev, int val);
extern int net_os_set_packet_filter(struct net_device *dev, int val);
extern int net_os_send_hang_message(struct net_device *dev);

#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 6, 27)
#define IWE_STREAM_ADD_EVENT(info, stream, ends, iwe, extra) \
	iwe_stream_add_event(info, stream, ends, iwe, extra)
#define IWE_STREAM_ADD_VALUE(info, event, value, ends, iwe, event_len) \
	iwe_stream_add_value(info, event, value, ends, iwe, event_len)
#define IWE_STREAM_ADD_POINT(info, stream, ends, iwe, extra) \
	iwe_stream_add_point(info, stream, ends, iwe, extra)
#else
#define IWE_STREAM_ADD_EVENT(info, stream, ends, iwe, extra) \
	iwe_stream_add_event(stream, ends, iwe, extra)
#define IWE_STREAM_ADD_VALUE(info, event, value, ends, iwe, event_len) \
	iwe_stream_add_value(event, value, ends, iwe, event_len)
#define IWE_STREAM_ADD_POINT(info, stream, ends, iwe, extra) \
	iwe_stream_add_point(stream, ends, iwe, extra)
#endif

extern int dhd_pno_enable(dhd_pub_t *dhd, int pfn_enabled);
extern int dhd_pno_clean(dhd_pub_t *dhd);
extern int dhd_pno_set(dhd_pub_t *dhd, wlc_ssid_t* ssids_local, int nssid, uchar  scan_fr);
extern int dhd_pno_get_status(dhd_pub_t *dhd);
extern int dhd_dev_pno_reset(struct net_device *dev);
extern int dhd_dev_pno_set(struct net_device *dev, wlc_ssid_t* ssids_local, \
				 int nssid, uchar  scan_fr);
extern int dhd_dev_pno_enable(struct net_device *dev,  int pfn_enabled);
extern int dhd_dev_get_pno_status(struct net_device *dev);

#define PNO_TLV_PREFIX			'S'
#define PNO_TLV_VERSION			1
#define PNO_TLV_SUBVERSION 		0
#define PNO_TLV_RESERVED		0
#define PNO_TLV_TYPE_SSID_IE		'S'
#define PNO_TLV_TYPE_TIME		'T'
#define  PNO_EVENT_UP			"PNO_EVENT"

typedef struct cmd_tlv {
	char prefix;
	char version;
	char subver;
	char reserved;
} cmd_tlv_t;

#if defined(CSCAN)

typedef struct cscan_tlv {
	char prefix;
	char version;
	char subver;
	char reserved;
} cscan_tlv_t;

#define CSCAN_COMMAND				"CSCAN "
#define CSCAN_TLV_PREFIX 			'S'
#define CSCAN_TLV_VERSION			1
#define CSCAN_TLV_SUBVERSION			0
#define CSCAN_TLV_TYPE_SSID_IE			'S'
#define CSCAN_TLV_TYPE_CHANNEL_IE		'C'
#define CSCAN_TLV_TYPE_NPROBE_IE		'N'
#define CSCAN_TLV_TYPE_ACTIVE_IE		'A'
#define CSCAN_TLV_TYPE_PASSIVE_IE		'P'
#define CSCAN_TLV_TYPE_HOME_IE			'H'
#define CSCAN_TLV_TYPE_STYPE_IE			'T'

extern int wl_iw_parse_channel_list_tlv(char** list_str, uint16* channel_list, \
					int channel_num, int *bytes_left);

extern int wl_iw_parse_data_tlv(char** list_str, void  *dst, int dst_size, \
					const char token, int input_size, int *bytes_left);

extern int wl_iw_parse_ssid_list_tlv(char** list_str, wlc_ssid_t* ssid, \
					int max, int *bytes_left);

extern int wl_iw_parse_ssid_list(char** list_str, wlc_ssid_t* ssid, int idx, int max);

extern int wl_iw_parse_channel_list(char** list_str, uint16* channel_list, int channel_num);

#endif 

#endif 
>>>>>>> a81a44f... net: wireless: bcm4329: Update to Version 4.218.248
