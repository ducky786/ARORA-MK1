# ARORA-MK1
Arora is an ESP32 flight controller designed to go on any vehicle such as a model rocket or a Gokart to collect and send back live talematry Data.

# Why did I build it? 
I built arora to be a flight controller for some of my upcoming projects. some of them include a TVC controller rocket and a completly race ready go-kart. I am hoping that using arora, I could abtain usefull data from these projects to inhasnce their performace. This data includes acceleration, altatude, speed and pressure. All this is being collected by the MPU 6050 and bmp 180. In the future I am hoping to upgrade arora to include more sensors and have a CAN BUS so I could even control motors for reaction wheels and much more!

# Schematic and PCB lay out.

The brain of the board is an esp 32. There are many options out there but I mosly chose this because its capabilites of wifi and bluetooth. The controller uses a 2s lipo battery whichs connects via an XT30 connecter. This gets stepped down to 5v and used accross the diffrent divices and connections through out the board. On the board there are 3 servo pins. 2 for x and y for TVC and one for AUX. The board also has 2 pyro channels which could be used for ignighting stuff which could maybe be used to deploy parachutes. Another important part of the controller that I decided to add is the SD card slot. This would be used to log data during flight. whats the point of getting data if you cannt look at it later? lol. 

After creating the schematic, I started the physical pcb. I wanted this to be small and compact so I settled on 2.25in x 3.00in. I feel that should be a good comfortable size for the controller. I made sure to place all the components in good carefully thought out positions. The esp and the SD card slot are placed so they face out the the same direction so I dont have to deal with messy wirires coming out the controller. The MPU nad BMP are set direcly in the center and with one pyro channel to the left and one pyro channel facing down along with the 2 x and y servos. At the very Top of the PCB are two LEDs one wouldlight up if the esp has power, the other one is an RGB led that is used as a visual indicartor along with the buzzer for state changes and debugging. 

<img width="1099" height="758" alt="image" src="https://github.com/user-attachments/assets/dd549d27-600c-48a9-9fe3-fa1726c668a8" />

<img width="423" height="632" alt="image" src="https://github.com/user-attachments/assets/5657663b-c9bb-42ab-9ee7-5c16e4f69e36" />

#Firmware
The current firware for ARORA is very simple. It simpletests all components for the on the controller. This is going to be used as a very simple diagnostics test for the controller if I ever run into any problems.

<img width="302" height="696" alt="image" src="https://github.com/user-attachments/assets/241c1caa-e0c2-4bac-8ed8-54be9cea35ed" />

# ARORA BOM
| Part              | Quantity     | Cost   | Link                                                                                                                                                                                                               |
|-------------------|--------------|--------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| ESP32             | 1            | $9.99  | Amazon.com: HiLetgo ESP-WROOM-32 ESP32 ESP-32S Development Board 2.4GHz Dual-Mode WiFi + Bluetooth Dual Cores Microcontroller Processor Integrated with Antenna RF AMP Filter AP STA for Arduino IDE : Electronics |
| MPU6050           | 1            | $6.99  | HiLetgo GY-521 MPU-6050 MPU6050 3 Axis Accelerometer Gyroscope Module 6 DOF 6-axis Accelerometer Gyroscope Sensor Module 16 Bit AD Converter Data Output IIC I2C for Arduino: Amazon.com: Industrial & Scientific  |
| BMP180            | 1            | $5.49  | HiLetgo BMP180 GY-68 Digital Barometric Pressure Sensor Module Replace BMP085 for Arduino: Amazon.com: Industrial & Scientific                                                                                     |
| 220 omh resistors | pack 100 min | $0.50  | RC1206FR-07220RL \| YAGEO \| Price \| In Stock \| LCSC Electronics                                                                                                                                                 |
| 470 ohm resistor  | pack 100 min | $0.50  | RC0805FR-07470RL \| YAGEO \| Price \| In Stock \| LCSC Electronics                                                                                                                                                 |
| SD card socket    | 10 min       | $0.60  | TF-CARD H1.8 \| SHOU HAN \| Price \| In Stock \| LCSC Electronics                                                                                                                                                  |
| buzzer            | 15min        | $7.99  | Amazon.com: UPEYXDQR DC 3V Active Buzzer 2 Terminals 12x9.5mm,Electronic Buzzer 15Pcs : Electronics                                                                                                                |
| RGB               | 1            | $5.99  | DIYables RGB LED for Arduino, ESP32, ESP8266, Raspberry Pi, Common Cathode, 50 Pieces: Amazon.com: Industrial & Scientific                                                                                         |
|                   |              |        |                                                                                                                                                                                                                    |
| Total             |              | $38.05 |                                                                                                                                                                                                                    |
