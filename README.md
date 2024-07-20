# Obstacle Detection System for Visually Impaired

This project is an obstacle detection system designed for visually impaired individuals. It uses ultrasonic sensors to detect obstacles and a water sensor to detect water presence. The system activates an alarm through a buzzer and a vibrator when an obstacle or water is detected.

## Components Used

- **Arduino Board** (e.g., Arduino Uno)
- **Ultrasonic Sensor** (HC-SR04 or similar)
- **Water Sensor** (analog type)
- **Buzzer**
- **Vibrator**
- **Jumper Wires**

## Project Structure
````
Obstacle_Detection_System/
│
├── UltrasonicSensor.h
├── UltrasonicSensor.cpp
├── WaterSensor.h
├── WaterSensor.cpp
├── Alarm.h
├── Alarm.cpp
└── ObstacleDetection.ino
````

## File Descriptions

- **`ObstacleDetection.ino`**: Main Arduino sketch that includes the setup and loop functions for running the system.
- **`UltrasonicSensor.h` and `UltrasonicSensor.cpp`**: Header and implementation files for the ultrasonic sensor class.
- **`WaterSensor.h` and `WaterSensor.cpp`**: Header and implementation files for the water sensor class.
- **`Alarm.h` and `Alarm.cpp`**: Header and implementation files for the alarm system class.

## Installation and Setup

1. **Clone the Repository**

   ```bash
   git clone https://github.com/NelushGayashan/Obstacle_Detection_System.git
   ```
2. **Open in Arduino IDE**
        Launch the Arduino IDE.
        Go to File > Open and select the ObstacleDetection.ino file from the cloned project folder.

3. **Verify and Upload**
        Connect your Arduino board to your computer.
        Select the correct board and port from the Tools menu.
        Click on the Verify button to compile the code.
        Click on the Upload button to upload the code to your Arduino board.

## Usage

- The system will continuously monitor the distance using the ultrasonic sensor and check for water presence.
- If the distance to an obstacle is below the defined threshold or if water is detected, the buzzer and vibrator will be activated for 1 second.

## Troubleshooting

- Include Path Errors: Ensure that the Arduino IDE has been correctly installed and that all necessary libraries are present.
- Compilation Issues: Make sure all the required libraries are included and correctly referenced in the Arduino IDE.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.
