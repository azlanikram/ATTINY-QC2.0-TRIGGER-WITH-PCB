# ATTINY-QC2.0-TRIGGER-WITH-PCB
This Arduino code uses ATTINY-85 to negotiate QC2.0 voltage (5V,9V,12V) with compatible QC Charger/PowerBank.

Possible Applications
Driving 12V LED Stripes
Powering RF transmitters/receivers for longer range
Driving 12V Relays, Motors etc
Get any voltage between 1.25 to 10 volts using a LM317 or LM2596
9V IR remote drive
Robotic Car Power
Laptop Charging with 20V
Any system up to 18 Watts like WiFI, LTE, S2E devices for IoT application
Backup power for remote systems
Most LCD, LED Monitors, Printers, Scanners
Low Power portable PC

Components Required are:

ATTINY-85.
2x10k 1/4W resistors.
2x2.2k 1/4W resistors.
1x1k 1/4W resistors.
3mm Red Led.
USB TYPE-A Male Connector.
USB TYPE-A Female Connector.
Push Botton.
DIP-8 IC Holder.
LM-7805/7803 Linear Regulator.
104 Ceramic Capacitor
15v 10uF Electrolytic Capacitor.

The QC Voltage are negotiated with Data+ and Data- wires over standard USB Connection.
Different Voltage Can be achieved by selecting different voltage configurations of D+ and D-.
The Table below can be used for that purpose.
![QC Table](https://user-images.githubusercontent.com/74979748/201460979-635a45f4-8513-4e2a-bf72-a8c297db8638.png)


The wiring Schematic is as follows:

![QC Schematic](https://user-images.githubusercontent.com/74979748/201461057-299589d1-7b60-437c-9b28-a15e340a6238.png)

ATTINY can be programmed with Arduino IDE by following this wiring diagram.

![ATTINY85-Programming](https://user-images.githubusercontent.com/74979748/201461312-1432fb15-edef-4c28-8319-39aae036062d.png)

For further guidance follow the following tutorial: https://create.arduino.cc/projecthub/arjun/programming-attiny85-with-arduino-uno-afb829

PCB design is shown below:

![ATTINY-85 PCB 2D](https://user-images.githubusercontent.com/74979748/201461479-f970f262-62e2-4269-bc55-c66433978e6f.png)


![ATTINY-85 PCB 3D](https://user-images.githubusercontent.com/74979748/201461485-6a316e55-dc61-4e1b-b4c3-cf745424c1da.png)

Real PCB is made using one layer (using etching technique) with second layer with standard 26AWG wires and AMS1117 3.3V instead of LM-7803.

![IMG-20221112-WA0008](https://user-images.githubusercontent.com/74979748/201461582-c45fb978-707c-46f8-a3a8-f8e3694bd08e.jpg)


![IMG-20221112-WA0010](https://user-images.githubusercontent.com/74979748/201461587-94925fb3-17be-437c-8072-60d141bc8bf2.jpg)


![IMG-20221112-WA0009](https://user-images.githubusercontent.com/74979748/201461589-e239f4b5-0731-4d2a-a2e1-028f2932e94c.jpg)

![IMG-20221112-WA0011](https://user-images.githubusercontent.com/74979748/201461591-f2df72b5-d10b-4011-9d6a-c96dc08b7d68.jpg)
