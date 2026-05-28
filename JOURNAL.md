---
title: "Arduino Ultrasonic Sonar Scanner"
author: "paul-sopin"
description: "Simple arduino sonar scanner that detects objects using an ultrasonic sensor attached to a servo."
created_at: "2026-05-26"
---

# May 26: Learning + Beginning Build

Today, I continued learning about the Arduino, especially important components to building this project such as the 180 degree non-continous servo, RGB leds, active/passive buzzers, and ultrasonic sensors. The most important part to this project is the ultrasonic sensor, where the 
transmitter (trigger) sends sound signals with very high frequencies (ultrasound), which eventually hit a surface and are received by the receivor (echo). I began working on building the project, and ending for the day after setting up a few wires and connecting the servo,
as attaching the servo to the ultrasonic sensor and keeping everything stable was difficult.

<img width="4284" height="5712" alt="IMG_8987" src="https://github.com/user-attachments/assets/06d2fb1a-c636-44c0-903c-a4043d93b6dd" />


**Total time spent: 4 hours**

# May 27: Continuing/Finishing Main Build + Programming

Because my strategy of simply taping everything together did not work at all, I searched online to find how others attached the two components. Since I didn't want to use hot glue (would render ultrasonic + servo useless for later projects), I decided to use zip ties I had found in my
garage. I attached the ultrasonic sensor to the servo, and settled on connecting the servo to the board via tape (not very stable). With that problem out of the way, I completed the rest of the build (buzzer, RGB led, wiring). I got to programming the project and using everything
I had learned earlier about ultrasonic logic, I successfully finished programming. The project now worked well, but I really did not like that the buzzer was extremely loud and that the RGB LED hurt my eyes after looking at it for a short period of time. I replaced the logic that
set the RGB lights to either on or off, to a variable brightness using analogWrite(). However this version of the code did not work with the color red very oddly. After a very long time debugging, I found out the internal Timer2 module was causing the problems, so I changed the RGB 
lights back to digitalWrite. To deal with the overly loud buzzer, I switched it to a passive (from previously active), and introduced a resistor + lowered the frequency. 

<img width="4284" height="5712" alt="IMG_8983" src="https://github.com/user-attachments/assets/e39812b9-f50c-4b06-b2be-7e9832b939f4" />


https://github.com/user-attachments/assets/90a0f805-c63e-4a47-ae20-55adaf0215f8


**Total time spent: 5 hours**
