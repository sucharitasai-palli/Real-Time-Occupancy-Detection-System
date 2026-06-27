# Real-Time Occupancy Detection System

## Project Overview

The **Real-Time Occupancy Detection System** is an Arduino Uno-based embedded system that detects human presence using a Passive Infrared (PIR) motion sensor. It monitors human movement to determine whether a room is occupied or vacant. Based on the occupancy status, the system controls an LED indicator and displays the room status on the Serial Monitor. By enabling the automatic control of electrical appliances, it helps conserve energy and reduce unnecessary power consumption. This project demonstrates a simple, cost-effective, and energy-efficient solution that can be extended for smart home and IoT-based automation.

---

## Problem Statement

In homes, offices, classrooms, and other indoor environments, electrical appliances such as lights and fans are often left switched on even when rooms are unoccupied. This results in unnecessary energy consumption, increased electricity costs, and reduced energy efficiency. An automated occupancy detection system can help address this issue by detecting human movement and enabling occupancy-based control of electrical appliances, promoting efficient energy utilization.

---

## Objectives

- Detect human movement using a PIR motion sensor.
- Determine the occupancy status of a room based on detected motion.
- Indicate room occupancy using an LED indicator.
- Display the occupancy status on the Arduino Serial Monitor.
- Develop a simple, reliable, and low-cost occupancy detection system.

---

## Hardware Requirements

The following hardware components are required to implement the proposed occupancy detection system:

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| HC-SR501 PIR Motion Sensor | 1 |
| LED | 1 |
| 220 Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## Software Requirements

- Arduino IDE
- Arduino C/C++

---

## Working Principle

The system uses a Passive Infrared (PIR) motion sensor to detect changes in infrared radiation caused by human movement. The PIR sensor continuously monitors the surrounding area and sends a HIGH signal to the Arduino Uno when motion is detected.

The Arduino processes the sensor input, turns on the LED indicator, and displays the room status as **"Occupied"** on the Serial Monitor. If no motion is detected for a predefined duration, the Arduino updates the room status to **"Vacant"** and turns the LED indicator off.

This process is repeated continuously to provide real-time occupancy monitoring.
