## [Z1-Mini](https://gio-dot.github.io/Z1-Mini/)/How to flash


Once a .hex file is created, **there are 2 ways to flash Z1-Mini** whit it:

### Using CC-Debugger or SmartRF04EB

<p float="left">
  <img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/SmartRF04EB.jpg?raw=true" width="300" />
  <img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/CC-debugger.jpg?raw=true" width="300" /> 
</p>

1. Download and install SmartRF Flash programmer 1.12.8 (not V2) from [Texas Instruments site](http://www.ti.com/tool/flash-programmer)
2. Connect CC-Debugger or SmartRF04EB to PC: check if driver are automatically recognized in device manager.
3. Disconnect CC-Debugger or SmartRF04EB from PC; connect 10 pin flat cable between programmer and Z1-Mini. Pay attention to the **correct connector alignment and orientation (pin 1 on pin 1)!!!**. Connect again debugger to the PC.
4. Open Flash programmer software: debugger and CC2530 should appear in System on chip section; if not press reset button on debugger.
5. Set options as image below and choose .hex file to flash in Flash image frame.
6. Press Perform action and wait until Program and verify OK message appear.
7. Done! Z1-Mini start and try to connect to the available coordinator (orange led flash quickly). Once connected led will flash slowly. Now can shut off, disconnect programmer and PC.

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/2021-02-20%2023_53_19-Texas%20Instruments%20SmartRF%C2%AE%20Flash%20Programmer.png?raw=true" />


### Using a Raspberry without any programmer

1. Install Wiringpi:
```
sudo apt-get install wiringpi
```
2. Install software flash_cc2531:
```
git clone https://github.com/jmichault/flash_cc2531.git
```
3. Turn off; connect Z1-Mini to Raspberry as image below.
4. Turn On and check connection and installation:
```
cd flash_cc2531
./cc_chipid
```
should return..
```
ID = b524
```
5. Using WinSCP copy .hex created firmware to flash in **flash_cc2531** folder of the raspberry.
6. Again in SSH: erase cc2530 chip:
```
./cc_erase
```
7. Flash .hex firmware file on cc2530:
```
./cc_write NAME-OF-YOUR-FILE.hex -m 300
```
8. Done! Z1-Mini start and try to connect to the available coordinator (orange led flash quickly). Once connected led will flash slowly. Now can shut ofF and disconnect Z1-Mini from Raspberry.


<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Flash-Z1%20Mini-Raspberry_bb.800PX.png?raw=true"  />


