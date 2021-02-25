## [Z1-Mini](https://gio-dot.github.io/Z1-Mini/)/MULTISENSOR AIR QUALITY

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Z1%20Mini-air%20quality_bb.png?raw=true">

This configuration will give readings coming from [BME280](https://www.amazon.com/Dmyond-Atmospheric-Pressure-Temperature-Humidity/dp/B07XKSBQ9B/ref=sr_1_2?dchild=1&keywords=bme280&qid=1614215664&sr=8-2) ***(temperature, humidity and barometric pressure)*** and from ***gas sensor MQ-2*** on [FC-22 board](https://it.aliexpress.com/item/32730415859.html?spm=a2g0o.productlist.0.0.54556631AY9wbU&algo_pvid=363ae0f4-6e1a-4951-98d6-e2a2eef000e9&algo_expid=363ae0f4-6e1a-4951-98d6-e2a2eef000e9-20&btsid=0b0a0ac216142153742094135e7d93&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_). This board will give readings from about 0,4V (clean air) to about 3.3V with maximum gas exposure (follow [this thread](https://forum.arduino.cc/index.php?topic=416377.msg2867438#msg2867438), especially post 5); result zigbee reading will vary from about 120 on clean air, to 1024 with maximum gas concentration, considering the fact that input range of CC2530 ADC is 0-3.3V. Below firmware configuration.
4k7 resistor is used in case MQ-2 output rise above 3.3V to protect CC2530.

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Air%20quality%20sensor%20PTVO.png?raw=true">
