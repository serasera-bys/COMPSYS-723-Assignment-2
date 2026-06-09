# Cruise Control System

## Overview

This project implements a modular Cruise Control System using synchronous reactive programming principles.

The system manages vehicle cruise control functionality through a collection of interacting modules responsible for state management, speed regulation, throttle control, brake detection, accelerator detection, and speed limit monitoring.

The design follows a deterministic state machine architecture suitable for real time embedded and automotive control systems.

---

## Features

- Cruise control activation and deactivation
- Resume functionality
- Cruise speed setting
- Quick acceleration adjustment
- Quick deceleration adjustment
- Brake override detection
- Accelerator override detection
- Speed limit enforcement
- Automatic throttle regulation
- Real time state transitions

---

## System Architecture

```text
Driver Inputs
│
├── On / Off
├── Resume
├── Set
├── QuickAccel
├── QuickDecel
├── Brake
├── Accelerator
└── Vehicle Speed
        │
        ▼
Cruise Control Module
        │
 ┌──────┼────────┐
 │      │        │
 ▼      ▼        ▼
State  Speed   Throttle
Ctrl   Ctrl    Ctrl
 │      │        │
 └──────┼────────┘
        ▼
 Vehicle Output
```

---

## Cruise Control States

| State | Description |
|---------|-------------|
| OFF | Cruise control disabled |
| ON | Cruise control actively regulating speed |
| STANDBY | Cruise control temporarily suspended |
| DISABLE | Cruise control overridden by driver input |

### State Transitions

- OFF → ON when cruise control is enabled and speed is within limits
- ON → STANDBY when the brake pedal is pressed
- ON → DISABLE when accelerator override occurs
- STANDBY → ON when Resume is pressed
- DISABLE → ON when accelerator override is released

---

## Modules

### CruiseStateController

Manages cruise control state transitions and overall system behaviour.

Responsibilities:

- Enable cruise control
- Disable cruise control
- Handle brake events
- Handle accelerator override events
- Process resume requests

### CruiseSpeedController

Maintains and updates the target cruise speed.

Functions include:

- Set current vehicle speed as target speed
- Increase cruise speed
- Decrease cruise speed
- Enforce minimum and maximum speed limits

### ThrottleController

Regulates throttle output based on:

- Current vehicle speed
- Target cruise speed
- Cruise control state

### BrakeCheck

Detects brake pedal activation.

### AccelCheck

Detects accelerator pedal activation.

### SpeedLimitCheck

Verifies that vehicle speed remains within the permitted cruise control operating range.

---

## Operating Limits

| Parameter | Value |
|------------|--------|
| Minimum Cruise Speed | 30 km/h |
| Maximum Cruise Speed | 150 km/h |
| Speed Increment | 2.5 km/h |
| Pedal Activation Threshold | 3.0 |

---

## Inputs

| Signal | Description |
|----------|-------------|
| On | Enable cruise control |
| Off | Disable cruise control |
| Resume | Resume previous cruise speed |
| Set | Store current speed as cruise speed |
| QuickAccel | Increase cruise speed |
| QuickDecel | Decrease cruise speed |
| Accel | Accelerator pedal position |
| Brake | Brake pedal position |
| Speed | Current vehicle speed |

---

## Outputs

| Signal | Description |
|----------|-------------|
| CruiseSpeed | Target cruise speed |
| ThrottleCmd | Throttle command output |
| CruiseState | Current cruise control state |

---

## Technologies

- Esterel / SystemJ
- Reactive Programming
- Finite State Machines (FSM)
- Embedded Systems Design
- Automotive Control Systems

---

## Learning Outcomes

This project demonstrates:

- State machine implementation
- Reactive system design
- Modular software architecture
- Real time control systems
- Embedded software development
- Cruise control algorithms
- Deterministic event driven programming

---

## Author

Shaolong Zhu

Master of Engineering Studies (Computer Systems Engineering)

University of Auckland
