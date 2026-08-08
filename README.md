# Smart Distance Alarm using Embedded C

A **Smart Distance Alarm** system developed using **Embedded C** and Arduino Uno to detect nearby objects using an **HC-SR04 ultrasonic sensor**. The system continuously measures the distance, displays the measured value on a **16×2 LCD**, and activates a buzzer when an object comes within a predefined threshold.

The project was developed and simulated using **Wokwi**, demonstrating ultrasonic sensor interfacing, LCD interfacing, GPIO control, and real-time embedded programming.

---

# Project Overview

The Smart Distance Alarm is an embedded system designed for real-time object detection and distance monitoring.

The **HC-SR04 ultrasonic sensor** measures the distance between the sensor and a nearby object. The Arduino Uno processes the sensor signal and calculates the distance. The measured distance is displayed on the LCD, while the buzzer provides an audible alert when the object comes within the predefined safety range.

The complete system was designed and tested using the **Wokwi simulation platform**.

---

# Features

- Real-Time Distance Measurement
- HC-SR04 Ultrasonic Sensor Interfacing
- 16×2 LCD Display
- Buzzer Alert System
- Configurable Distance Threshold
- Serial Monitor Output
- Embedded C Programming
- GPIO Control
- Real-Time Object Detection
- Wokwi Simulation

---

# Hardware Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- 16×2 LCD Display
- Buzzer
- Connecting Wires

---

# Software and Tools

| Tool | Purpose |
|------|---------|
| Embedded C | Program Development |
| Arduino IDE | Code Development |
| Wokwi | Circuit Design and Simulation |

---

# System Architecture

```text
                 Object
                    |
                    v
          +-------------------+
          |  HC-SR04 Sensor   |
          +-------------------+
                    |
              Distance Data
                    |
                    v
          +-------------------+
          |    Arduino Uno    |
          |   Embedded C      |
          +-------------------+
                |       |
                |       |
                v       v
       +------------+  +---------+
       | 16×2 LCD   |  | Buzzer  |
       | Distance   |  |  Alert  |
       +------------+  +---------+
```

---

# Working Principle

1. The HC-SR04 ultrasonic sensor generates an ultrasonic pulse.
2. The pulse reflects from a nearby object and returns to the sensor.
3. The Arduino measures the echo duration.
4. The distance is calculated using the time taken by the ultrasonic wave to return.
5. The measured distance is displayed on the 16×2 LCD.
6. The distance is also transmitted through the Serial Monitor.
7. If the measured distance is less than **20 cm**, the buzzer is activated.
8. If the distance is **20 cm or greater**, the buzzer remains OFF.

---

# Distance Detection Logic

```text
             Start
               |
               v
       Measure Distance
               |
               v
       Display Distance
          on LCD
               |
               v
        Distance < 20 cm?
          /          \
        Yes           No
         |             |
         v             v
    Buzzer ON      Buzzer OFF
         |             |
         +------->-----+
                  |
                  v
              Repeat
```

---

# Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| LCD RS | D12 |
| LCD EN | D11 |
| LCD D4 | D5 |
| LCD D5 | D4 |
| LCD D6 | D3 |
| LCD D7 | D2 |
| Buzzer | D8 |
| HC-SR04 Trigger | D9 |
| HC-SR04 Echo | D10 |

---

# Project Structure

```text
Smart-Distance-Alarm
│
├── README.md
├── sketch.ino
├── diagram.json
├── libraries.txt
├── wokwi-project.txt
├── circuit_diagram.png
└── simulation_output.png
```

---

# Source Code

The main program is implemented using Embedded C/Arduino C++ and contains the following operations:

- LCD initialization
- Serial communication initialization
- Ultrasonic sensor interfacing
- Trigger pulse generation
- Echo pulse measurement
- Distance calculation
- LCD distance display
- Serial Monitor output
- Buzzer control

---

# Simulation

The complete project was designed and tested using **Wokwi**.

The simulation verifies:

- Ultrasonic distance measurement
- LCD display operation
- Serial Monitor output
- Buzzer control
- Real-time object detection

---

# Simulation Output

During simulation, the measured distance is displayed on the LCD.

Example:

```text
Dist: 397 cm
```

The Serial Monitor also displays:

```text
Distance: 397
Distance: 397
Distance: 397
```

Since the measured distance is greater than the **20 cm threshold**, the buzzer remains OFF.

---

# Circuit Diagram

The Wokwi circuit consists of an Arduino Uno connected to the HC-SR04 ultrasonic sensor, 16×2 LCD, and buzzer.

![Circuit Diagram](circuit_diagram.png)

---

# Simulation Result

The running simulation demonstrates real-time distance measurement and LCD output.

![Simulation Output](simulation_output.png)

---

# Results

The Smart Distance Alarm successfully demonstrates:

✔ Real-Time Distance Measurement

✔ HC-SR04 Ultrasonic Sensor Interfacing

✔ 16×2 LCD Display

✔ Serial Monitor Output

✔ Buzzer Alert Control

✔ Embedded C Programming

✔ GPIO Interfacing

✔ Wokwi Simulation

---

# Learning Outcomes

- Embedded C Programming
- Arduino Microcontroller Programming
- Ultrasonic Sensor Interfacing
- LCD Interfacing
- GPIO Control
- Serial Communication
- Real-Time Embedded Systems
- Wokwi Circuit Simulation

---

# Future Improvements

- Add OLED Display
- Add adjustable distance threshold
- Add LED indicators for different distance ranges
- Add Bluetooth-based alerts
- Add IoT-based monitoring
- Add mobile notification system

---

# Author

**Nischita Naik**

Electronics and Communication Engineering Student

## Areas of Interest

- Embedded Systems
- VLSI Design
- Digital Electronics
- Microcontrollers
- IoT

---

# License

This project is intended for educational and portfolio purposes.
