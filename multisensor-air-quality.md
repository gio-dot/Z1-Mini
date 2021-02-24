## [Z1-Mini](https://gio-dot.github.io/Z1-Mini/)/PZEM ZIGBEE METER

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Z1%20Mini-PZEM-004T_bb-900PX.png?raw=true">

### Home assistant lovelace panel:

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/PZEM-Zigbee-monofase-lovelace.png?raw=true">

With setting below, data are fetched every 20s (Expert tab, Reporting interval).

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Firmware%20configurator%20pzem-004t.png?raw=true">

<img src="https://github.com/Gio-dot/Z1-Mini/blob/gh-pages/images/Firmware%20configurator%20pzem-004t-expert.png?raw=true">

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
  ```
