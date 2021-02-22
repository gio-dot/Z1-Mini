## [Z1-Mini](https://gio-dot.github.io/Z1-Mini/)/Firmware getting started guide

In order to build custom zigbee end devices, a dedicated firmware is needed. There is a great project for this: [PTVO created a great firmware configurator](https://ptvo.info/zigbee-configurable-firmware-features/) for CC2530. With this can be created zigbee end devices like sensors, switches, and many other configurations.
Below a quick start guide to use firmware configurator; for more information follow the author site and/or [CookBook](https://gio-dot.github.io/Z1-Mini/#cookbook) section.

1. Download and unpack, in a folder of your choice, the [Firmware configurator PC software](https://ptvo.info/zigbee-switch-configurable-firmware-v2-210/#download) (only for Windows); no installation is needed.
2. Open "FirmwareConfig.exe" to start Firmware configurator; configure Board Type [1]: CC2530 for E18-MS1-PCB module or CC2530+RFX2401 for E18-MS1PA2-PCB module; in this second case configure also control pins on Expert section [2].
3. Choose if zigbee end device act also as zigbee router or not.
4. Configure onboard led [3] and desired I/O pins (and related function in left drop down menu).
5. Click Save to generate the .hex firmware ready to be flashed on Z1 Mini board; in next window choose where to save it; a .txt file with firmware configuration resume it is also created.
