# Smart Energy Monitoring System

## Overview

This project implements a real-time electrical monitoring system using an ESP32 microcontroller and a PZEM-004T power monitoring module.

The system measures:

- Voltage
- Current
- Power
- Energy
- Frequency

## Hardware

- ESP32 DevKit V1
- PZEM-004T-100A V4.0
- Current Transformer (CT)
- 25W Incandescent Lamp
- AC Power Source

## Software

- Arduino IDE
- C++
- PZEM004Tv30 Library

## Results

Measured Results:

- Voltage: ~123 V
- Current: ~0.20 A
- Power: ~24.6 W
- Frequency: ~60 Hz

Theoretical Validation:

- Current Error: 0.99%
- Power Error: 1.6%

## Engineering Concepts

- AC Circuit Analysis
- Ohm's Law
- Power Calculations
- Current Transformer Operation
- UART Communication
- Embedded Systems Design

## Future Improvements

- LCD/OLED Display
- Wireless Monitoring
- Mobile Application
- Data Logging
