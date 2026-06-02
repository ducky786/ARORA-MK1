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
