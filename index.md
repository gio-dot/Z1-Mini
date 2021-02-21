- [Firmware getting started guide](#how-to-flash) 
- [How to flash](#how-to-flash)
- [Cookbook](#cookbook)
- [Where to find Z1-Mini](#how-to-flash) 


Z1 Mini is a **development board** based on **cc2530** chip (with Ebyte module). 
Whit this board and great firmwares [like this one](https://ptvo.info/zigbee-switch-configurable-firmware-v2-210/), it is possible to build various **custom zigbee end devices**.
The board can use standard cc2530 (4dBm module E18-MS1-PCB) or amplified cc2530 type (20dBm module E18-MS1PA2-PCB).
It is provided with standard ICSP connector; the firmware can be flashed using **CC-debugger**, **SmartRF04EB** or a **Raspberry used as programmer**.
Available I/O and electrical features are shown in the picture below.

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Z1%20Mini%20Pinout.png?raw=true" width="850">

Board can be powered on +V pin with a voltage of **max 13.2V**. It is possible to use 3.3V available on relative pin to power sensors etc. Maximum available current is about **200mA**.
Voltage level on all pins is **+3.3V**. For 5V level a 1k to 5.1k must be added in series (not recommended, risk of damage may exist. Use of voltage level translator recommended).


## HOW TO FLASH
Z1-Mini can be flashed in two ways: 

### With flasher/debugger CC-debugger or SmartRF04EB
- download and install [Texas Instruments Smart RF Flash Programmer](https://www.ti.com/tool/FLASH-PROGRAMMER) (**version 1.12.8**)
- connect the debugger using 10 pin flat cable (**!!! pay attention to pin 1 position and to the correct alignement of the flat connector with the board connector !!!**)

## COOKBOOK

- [PZEM ZIGBEE METER](https://gio-dot.github.io/Z1-Mini/pzem-zigbee-meter)

- [PZEM THREE-PHASE ZIGBEE METER](https://gio-dot.github.io/Z1-Mini/pzem-three-phase-zigbee-meter)




