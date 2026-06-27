# Real-Time Occupancy Detection System

## Project Overview

The **Real-Time Occupancy Detection System** is an Arduino Uno-based embedded system that monitors the number of people entering and exiting a room using two Infrared (IR) sensors. By detecting the sequence of entry and exit, the system maintains the real-time occupancy count. Based on the occupancy status, the Arduino controls a relay module to automate electrical appliances, helping reduce unnecessary energy consumption. This project demonstrates a simple, cost-effective, and scalable occupancy monitoring solution suitable for smart homes, offices, classrooms, and other indoor environments.

---

## Problem Statement

In homes, offices, classrooms, and other indoor environments, electrical appliances such as lights and fans are often left switched on even when rooms are unoccupied. This results in unnecessary energy consumption, increased electricity costs, and reduced energy efficiency. An automated occupancy detection system that accurately tracks the number of people inside a room can help address this issue by controlling electrical appliances based on real-time occupancy.

---

## Objectives

- Count the number of people entering and exiting a room using two IR sensors.
- Maintain the real-time occupancy count.
- Automatically control electrical appliances using a relay module based on occupancy.
- Display the occupancy count through the Arduino.
- Develop a simple, reliable, and low-cost occupancy detection system.

---

## Hardware Requirements

- Arduino Uno
- 2 × IR Sensors
- 8-Channel Relay Module
- Breadboard
- Jumper Wires
- USB Cable

---

## Software Requirements

- Arduino IDE
- Arduino C/C++
- Tinkercad *(for circuit simulation)*

---

## Working Principle

The system uses two Infrared (IR) sensors positioned at the entrance of a room to detect the direction of movement. When a person enters, the first sensor is triggered before the second sensor, causing the Arduino Uno to increment the occupancy count. When a person exits, the second sensor is triggered before the first sensor, causing the occupancy count to decrement.

The Arduino continuously monitors the occupancy count and controls the relay module accordingly. If the occupancy count is greater than zero, the relay remains activated to indicate that the room is occupied. When the occupancy count becomes zero, the relay is deactivated, indicating that the room is vacant. This process is repeated continuously to provide real-time occupancy monitoring.

---

## Block Diagram

The block diagram below illustrates the overall architecture of the proposed occupancy detection system.

![Block Diagram](images/block_diagram.png)

---

## Circuit Diagram

The circuit diagram below shows the hardware connections between the Arduino Uno, IR sensors, relay module, and supporting components.

![Circuit Diagram](images/circuit_diagram.png)

---

## Circuit Simulation

The circuit was simulated using Tinkercad to verify the hardware connections and system functionality before physical implementation.

![Circuit Simulation](images/simulation.png)

---

## Source Code

The complete Arduino source code for this project is available in the repository.

**Source File:**

- `Occupancy_Detection.ino`

The program reads data from the two IR sensors, determines the direction of movement, updates the occupancy count, and controls the relay module accordingly.

---

## Applications

- Smart homes
- Offices and workplaces
- Classrooms
- Conference rooms
- Libraries
- Commercial buildings
- Building automation systems

---

## Future Scope

- Integration with IoT platforms for remote monitoring.
- Cloud-based occupancy monitoring and data logging.
- Mobile application for occupancy monitoring and control.
- Multi-room occupancy detection using multiple sensor pairs.
- Integration with security and access control systems.

---

## Author

**Sucharita Sai Palli**<br>
24BES7051<br>
B.Tech in Electronics and Communication Engineering<br>
VIT-AP University
