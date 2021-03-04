## [Z1-Mini](https://gio-dot.github.io/Z1-Mini/)/ZIGBEE RFID TAG READER

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Z1-Mini%20Wiegand_bb-850.png?raw=true">

With this project a cool zigbee RFID tag reader can be built. Tag reader is realized with a cheap arduino nano that communicate with Z1-Mini using UART. Arduino code can be easily adapted to work with various tag readers: RC522, PN532, Wiegand etc. Z1-Mini setting is the same for all. Readed codes can be managed in Home assistant using mqtt binary sensors. It is even possible to send text commands from Home assistant to arduino to command outputs. In this example a time-delay relay is connected to arduino for door opening. It can be driven from home assistant sending a text command.


 ```
 sensor:
   
 ```
