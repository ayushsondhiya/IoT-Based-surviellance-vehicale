# IoT-Based-surviellance-vehicale


IoT surveillance vehicle: An Arduino-based project that combines IoT technology with a vehicle for monitoring and surveillance purposes.


The IoT surveillance vehicle is a project that combines IoT technology with a vehicle for monitoring and surveillance purposes. It utilizes various sensors and actuators to gather information and perform actions. The vehicle is equipped with a camera to capture visual data, a microphone for audio monitoring, an infrared camera for night vision, and an ultrasonic sensor to detect obstacles. The vehicle's movements are controlled by servo motors, which can be adjusted based on accelerometer readings from an ADXL335 sensor for stability. This project aims to provide a remote surveillance solution with the ability to capture and transmit real-time data for monitoring and security applications.

I'm sorry, but as a text-based AI, I'm unable to provide photographs. However, I can still provide you with a detailed description of the Arduino project for the surveillance vehicle.

The Arduino-based surveillance vehicle is designed to collect information using various sensors and control servomotors on a wheeler chassis stabilized with an ADXL335 accelerometer. Here's a detailed breakdown:

1. Wheeled Chassis: The surveillance vehicle is built on a wheeled chassis that provides mobility. The chassis can be a 2-wheel or 4-wheel configuration, depending on the project requirements.

2. Stabilization with ADXL335: To enhance stability, an ADXL335 accelerometer is used. The accelerometer measures acceleration forces acting on the vehicle and provides feedback to maintain balance while moving.

3. Camera: A camera module is attached to the surveillance vehicle to capture visual data. It can be a USB camera or an Arduino-compatible camera module. The camera enables the vehicle to transmit real-time video feed for monitoring purposes.

4. Microphone: A microphone is integrated into the surveillance vehicle to capture audio data. It enables the vehicle to record and transmit live audio feed for surveillance applications.

5. Infrared Camera: An infrared (IR) camera module is utilized to enable night vision capabilities. The IR camera captures images or video in low light conditions or complete darkness using infrared radiation.

6. Ultrasonic Sensor: An ultrasonic sensor is employed to detect obstacles in the vehicle's path. It emits ultrasonic waves and measures the time taken for the waves to bounce back. By analyzing the reflected waves, the sensor can determine the distance to objects, helping the vehicle avoid collisions.

7. Servomotors: Servomotors are used to control the movement of the surveillance vehicle. By adjusting the angles of the servomotors, the vehicle can turn, move forward or backward, and change direction.

The Arduino board acts as the central control unit, receiving sensor data and sending commands to the servomotors. The code running on the Arduino board processes the data from the various sensors, allowing the vehicle to react accordingly. Communication can be established through wireless technologies such as Wi-Fi, Bluetooth, or RF modules to enable remote monitoring and control of the surveillance vehicle.

Remember, while this description provides an overview of the project, the actual implementation may vary depending on your specific hardware and design choices.
