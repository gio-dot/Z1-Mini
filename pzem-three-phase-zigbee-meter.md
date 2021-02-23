## [Z1-Mini](https://gio-dot.github.io/Z1-Mini/)/PZEM THREE-PHASE ZIGBEE METER

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Z1%20Mini-3xPZEM-016_bb-900PX.png?raw=true">

To use 3 PZEM, modbus ID address of each one must be changed (otherwise all have the same). To do so Peacefair PC software (Windows only) can be used.
Download the [software](https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/docs/PZEM014%2C016-Master-English.zip) and unzip in a folder of your choice (no installation needed); connect PZEM (each at a time) to the computer using a RS485 to USB converter and change PZEM address in Set parameters section (see image below). Repeat this step for each PZEM setting 1, 2 and 3.

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/2021-02-23%2011_22_35-PZEM014%20Master%20-%20Ningbo%20Peacefair%20Electronic%20Technology%20Co.,Ltd.png?raw=true">

### Home assistant lovelace panel:

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/PZEM-Zigbee-trifase-lovelace.png?raw=true">

With setting below, data are fetched every 20s (Expert tab, Reporting interval).

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Firmware%20configurator%203xpzem.png?raw=true">

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Firmware%20configurator%203xpzem-expert.png?raw=true">

### Home assistant configuration to extract mqtt attributes as entities:

 ```
 sensor:
   - platform: mqtt
     name: "PZEM Volt R"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "V"
     value_template: "{{ value_json.voltage_l1 }}"
   - platform: mqtt
     name: "PZEM Amp R"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "A"
     value_template: "{{ value_json.current_l1 }}"
   - platform: mqtt
     name: "PZEM Watt R"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "W"
     value_template: "{{ value_json.power_l1 }}"
   - platform: mqtt
     name: "PZEM Power Factor R"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: ""
     value_template: "{{ value_json.power_factor_l1 }}"
   - platform: mqtt
     name: "PZEM Frequency R"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "Hz"
     value_template: "{{ value_json.frequency_l1 }}" 
   - platform: mqtt
     name: "PZEM Energy R"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "Wh"
     value_template: "{{ value_json.energy_l1 }}"  

   - platform: mqtt
     name: "PZEM Volt S"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "V"
     value_template: "{{ value_json.voltage_l2 }}"
   - platform: mqtt
     name: "PZEM Amp S"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "A"
     value_template: "{{ value_json.current_l2 }}"
   - platform: mqtt
     name: "PZEM Watt S"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "W"
     value_template: "{{ value_json.power_l2 }}"
   - platform: mqtt
     name: "PZEM Power Factor S"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: ""
     value_template: "{{ value_json.power_factor_l2 }}"
   - platform: mqtt
     name: "PZEM Frequency S"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "Hz"
     value_template: "{{ value_json.frequency_l2 }}" 
   - platform: mqtt
     name: "PZEM Energy S"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "Wh"
     value_template: "{{ value_json.energy_l2 }}" 

   - platform: mqtt
     name: "PZEM Volt T"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "V"
     value_template: "{{ value_json.voltage_l3 }}"
   - platform: mqtt
     name: "PZEM Amp T"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "A"
     value_template: "{{ value_json.current_l3 }}"
   - platform: mqtt
     name: "PZEM Watt T"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "W"
     value_template: "{{ value_json.power_l3 }}"
   - platform: mqtt
     name: "PZEM Power Factor T"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: ""
     value_template: "{{ value_json.power_factor_l3 }}"
   - platform: mqtt
     name: "PZEM Frequency T"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "Hz"
     value_template: "{{ value_json.frequency_l3 }}" 
   - platform: mqtt
     name: "PZEM Energy T"
     state_topic: "zigbee2mqtt/0x00124b0022608e5a"
     unit_of_measurement: "Wh"
     value_template: "{{ value_json.energy_l3 }}"   
    
    
  ```

