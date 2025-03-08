# ATTINY Quick Charge 2.0/3.0 Trigger with PCB
This Arduino code uses ATTINY-85 to negotiate QC2.0 voltage (5V,9V,12V) with compatible QC Charger/PowerBank.
This project is inspired by the following. If you like my work please give them a thumbs up too.

https://www.youtube.com/watch?v=dw3MehLAyWU&t=563s&ab_channel=AndreasSpiess


## Possible Applications

Get any voltage between 5 to 12 volts to power system up to 18 Watts like WiFI, LTE, S2E devices for IoT application.

Driving 12V LED Stripes. Driving 12V Relays, Motors etc.

Powering RF transmitters/receivers for longer range.

Backup power for remote systems / Low Power portable PC.

## Required Components

| Component                     | Quantity |
|--------------------------------|----------|
| ATTINY-85                     | 1        |
| 10kΩ 1/4W Resistor            | 2        |
| 2.2kΩ 1/4W Resistor           | 2        |
| 1kΩ 1/4W Resistor             | 1        |
| 3mm Red LED                   | 1        |
| USB Type-A Male Connector      | 1        |
| USB Type-A Female Connector    | 1        |
| Push Button                   | 1        |
| DIP-8 IC Holder               | 1        |
| LM-7805/7803 Linear Regulator  | 1        |
| 104 Ceramic Capacitor          | 1        |
| 15V 10uF Electrolytic Capacitor | 1        |


## Quick Charge Voltage Negotiation Table

The QC Voltage are negotiated with Data+ and Data- wires over standard USB Connection.
Different Voltage Can be achieved by selecting different voltage configurations of D+ and D-.
The Table below can be used for that purpose.
![QC Table](https://user-images.githubusercontent.com/74979748/201460979-635a45f4-8513-4e2a-bf72-a8c297db8638.png)


## Wiring Schematic
The wiring Schematic is as follows:

![QC Schematic](https://user-images.githubusercontent.com/74979748/201461057-299589d1-7b60-437c-9b28-a15e340a6238.png)

## Wiring diagram for programming ATTINY with Arduino Uno
ATTINY can be programmed with Arduino IDE by following this wiring diagram.

![ATTINY85-Programming](https://user-images.githubusercontent.com/74979748/201461312-1432fb15-edef-4c28-8319-39aae036062d.png)

For further guidance follow the following tutorial: https://create.arduino.cc/projecthub/arjun/programming-attiny85-with-arduino-uno-afb829

## PCB Design
PCB design is shown below:

![ATTINY-85 PCB 2D](https://user-images.githubusercontent.com/74979748/201461479-f970f262-62e2-4269-bc55-c66433978e6f.png)

## 3D View
3D View of the PCB:
![ATTINY-85 PCB 3D](https://user-images.githubusercontent.com/74979748/201461485-6a316e55-dc61-4e1b-b4c3-cf745424c1da.png)

## PCB Results
PCB realized using single layer (using etching technique) with second layer with standard 26AWG wires and AMS1117 3.3V instead of LM-7803.

![IMG-20221112-WA0008](https://user-images.githubusercontent.com/74979748/201461582-c45fb978-707c-46f8-a3a8-f8e3694bd08e.jpg)


![IMG-20221112-WA0010](https://user-images.githubusercontent.com/74979748/201461587-94925fb3-17be-437c-8072-60d141bc8bf2.jpg)


![IMG-20221112-WA0009](https://user-images.githubusercontent.com/74979748/201461589-e239f4b5-0731-4d2a-a2e1-028f2932e94c.jpg)

![IMG-20221112-WA0011](https://user-images.githubusercontent.com/74979748/201461591-f2df72b5-d10b-4011-9d6a-c96dc08b7d68.jpg)
