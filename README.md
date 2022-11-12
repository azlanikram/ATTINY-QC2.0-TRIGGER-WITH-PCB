# ATTINY-QC2.0-TRIGGER-WITH-PCB
This Arduino code uses ATTINY-85 to negotiate QC2.0 voltage (5V,9V,12V) with compatible QC Charger/PowerBank.

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
