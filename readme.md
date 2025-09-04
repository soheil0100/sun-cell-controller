# Arduino Motor Control with Multiple Sensor Inputs

This project is a device that detects the amount of sunlight at different angles. During the day, LDR sensors at different angles measure the amount and angle of sunlight. Whichever one absorbs more light, Arduino uses the motor driver to set the motor to turn left or right and rotate the plate containing the solar cell in that direction.  

---

## Features
- Reads values from multiple analog inputs (A0–A5, pins 9 and 10)  
- Determines the maximum input and selects motor direction accordingly  
- Controls motor speed with PWM (ENA pin)  
- Stops or reverses the motor based on conditions  
- Example logic for decision-making using sensors  

---

## Hardware Requirements
- Arduino Uno (or compatible board)  
- L298N or L293D H-Bridge motor driver  
- DC motor  
- Multiple sensors (connected to A0–A5, 9, and 10)  
- External power supply for motor (recommended)  
- Breadboard and jumper wires  

---

## Pin Configuration
- **IN1 (13)**: Motor driver input  
- **IN2 (12)**: Motor driver input  
- **ENA (11)**: Motor driver enable (PWM for speed control)  
- **A0–A5, 9, 10**: Sensor inputs  
- **D2**: Digital input (stop condition)  

---

## How to Use
1. Connect the Arduino to the motor driver (IN1, IN2, ENA).  
2. Connect sensors to A0–A5 and pins 9 and 10.  
3. Upload the code to the Arduino.  
4. The motor will run in the direction and speed based on the highest sensor input value.  
5. If certain conditions are met, the motor will stop or reverse.  

---

## Required Libraries
No external libraries are required.  
The code only uses standard Arduino functions (`digitalWrite`, `analogWrite`, `analogRead`).  

