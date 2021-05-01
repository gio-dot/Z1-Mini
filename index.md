- [Firmware getting started guide](https://gio-dot.github.io/Z1-Mini/firmware-getting-started)
- [How to flash](https://gio-dot.github.io/Z1-Mini/how-to-flash)
- [Cookbook](#cookbook)
- [Where to find it](#where-to-find-z1-mini)

Z1 Mini is a **development board** based on **cc2530** chip (Ebyte module). 
With this board and great firmwares [like this one](https://ptvo.info/zigbee-switch-configurable-firmware-v2-210/), it is possible to build various **custom zigbee end devices**.
The board can use standard cc2530 (4dBm module E18-MS1-PCB) or amplified cc2530 type (20dBm module E18-MS1PA2-PCB).
It is provided with standard ICSP connector; the firmware can be flashed using **CC-debugger**, **SmartRF04EB** or a **Raspberry used as programmer**.
Available I/O and electrical features are shown in the picture below.

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Z1%20Mini%20Pinout.png?raw=true" width="850">

Board can be powered on +V pin with a voltage of **max 13.2V**. It is possible to use 3.3V available on relative pin to power sensors etc. Maximum available current is about **200mA**.
Voltage level on all pins is **+3.3V**. For 5V level a 1k to 5.1k must be added in series (not recommended, risk of damage may exist. Use of voltage level translator recommended).
Z1 Mini with standard E18-MS1-PCB zigbee module can be used in most cases; where there are issues related to distance and/or obstacles, version equipped with E18-MS1PA2-PCB amplified module, may be recommended.


## COOKBOOK

- [8 RELAY - 8 BUTTONS](https://gio-dot.github.io/Z1-Mini/8relay-8buttons)

- [PZEM ZIGBEE METER](https://gio-dot.github.io/Z1-Mini/pzem-zigbee-meter)

- [PZEM THREE-PHASE ZIGBEE METER](https://gio-dot.github.io/Z1-Mini/pzem-three-phase-zigbee-meter)

- [MULTISENSOR AIR QUALITY](https://gio-dot.github.io/Z1-Mini/multisensor-air-quality)

- [MULTISENSOR AIR QUALITY CO2](https://gio-dot.github.io/Z1-Mini/multisensor-air-quality-co2)

- [ZIGBEE RFID TAG READER](https://gio-dot.github.io/Z1-Mini/zigbee-rfid-tag-reader)

## Where to find Z1-Mini

Z1-Mini assembled and tested can be found on [Tindie](https://www.tindie.com/products/22856/)




