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

for further guidance follow the following tutorial: https://create.arduino.cc/projecthub/arjun/programming-attiny85-with-arduino-uno-afb829
