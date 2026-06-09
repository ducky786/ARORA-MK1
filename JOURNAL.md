---
title: ARORA MK1
author: Rehan Shaik
description: Arora is an ESP32 flight controller designed to go on any vehicle such as a model rocket or a Gokart to collect and send back live talematry Data.
created_at: 2026-06-2
---

# June 2 Planning and PCB layout

I am creating this project beucase in the near future I want to create a a TVC controlled rocket and many other things. For that I wanted to create a flight controller that already contians the essential telematry sensors and components to meet the minimum requirments for the projects instead of having a hudge wiring mess!

I started off my planning by deciding what microcontroller the brain of my flight controller should be. I looked around and came across the teensy which was actually widly used in flight controller and also came across the ESP32 I ended up settling on the ESP32 because of its bluetooth and wifi connectivity which I think will help me with wirless comunications between two controllers. This could allow me to have a ground station and a controling computer which recive live telemetry data. I also found good reliable sensors which will do the job perfectly for my flight controller.

* BMP 180
* MPU 6050

These are great sensors with well supported librarys to make the coding a lot easier. I also added an SD card so I could log data during operations so I could look at it later through graphs.

After that was sttled I started to create the scematic for my PCB. This was only my 3rd time using KICAD so I was still learning my way around the software. But I felt pretty good on how the schematic turned out. This prossess took me so long beucase I had to read data sheets and find schematic examples to help me through this prossess. I am deffenety not an electrical pro but am very proud of how things turned out.

In my schematic, I added an XT30 connected with a 5v step down so the esp and other components could use it freely. I also added a buzzer and LEDs as status and indicators so I could get visual feedback to help me with code debuging or just updates in general.

<img width="1177" height="838" alt="image" src="https://github.com/user-attachments/assets/f383ab85-869a-4222-bb6a-131ee5d72331" />

**Total time spent: 5 hours**

# June 9 Routing the PCB

After finishing the schematic, I started pacing components in their respective places and stqarted routing them. This is when I define the PCB demention, and I took a good amount of time finding a proper demention for the flight controller. This was beucase in the future I plan on using Arora for a model rocket with TVC. So, having a compact PCB will deffently make my life a lot more easier in the future. I finally settled on a 2.25in X 3.5in pcb I really hope this is small enough beucase I was not able to fit anything in an even smaller footprint. I finallt started routing the PCB which took me ages. I wanted it to be clean and clear for anyone looking at ARORA. It looks ok... I guess. It was just hard to weave around the components with the traces. So, decided to fill the pcb with GND on the front and back side which ended up helping a ton. 

I was pretty proud with the final routed PCB. This was my first time routing a big PCB like this so it felt good seeing how it turned out! After this all I have left is to create a simple code which can test out all the instraments on my PCB which shouldnt take too long.

<img width="427" height="602" alt="image" src="https://github.com/user-attachments/assets/22a65974-dd18-445b-afbd-470adc93a5ba" />

**Total time spent: 2 hours**
