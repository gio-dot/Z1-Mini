## [Z1-Mini](https://gio-dot.github.io/Z1-Mini/)/MULTISENSOR AIR QUALITY

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Z1%20Mini-air%20quality_bb.png?raw=true">

This configuration will give readings coming from ***BME280 (temperature, humidity and barometric pressure)*** and from ***gas sensor MQ-2*** on ***FC-22 board***. This board will give readings from about 0,4V (clean air) to about 3.3V with maximum gas exposure (follow [this thread](https://forum.arduino.cc/index.php?topic=416377.msg2867438#msg2867438), especially post 5); result zigbee reading will vary from about 120 on clean air, to 1024 with maximum gas concentration. Below firmware configuration.
4k7 resistor is used in case MQ-2 output rise above 3.3V to protect CC2530.

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Air%20quality%20sensor%20PTVO.png?raw=true">
