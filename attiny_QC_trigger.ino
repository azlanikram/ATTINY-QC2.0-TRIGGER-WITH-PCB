///========================= Algorithm ========================///

/*
  First, Connect the D+ pin to a voltage 0.325 to 2 volts and keep the D- floating, then wait at least 2 seconds.

  Two actions happen during this 2 seconds:

  The D+ and D- voltage equal a voltage between 0.325 to 2 volts for 1.25 seconds.
  (because the D+ and D- pins connect together inside the CHY100 at first)

  Then the D+ keeps at a voltage between 0.325 to 2 volts and the D- voltage decrease to zero.
  (because the D+ and D- pins disconnect and a resistor inside the CHY100 discharges the D-)*** CHY100 is a QC 2.0 Protocol interface chip inside Power bank/charger ........ other QC 2.0 chips are probably similar

  Make D+ above 3.0 V first and then connect the D- to a voltage between 0.325 to 2 volts. The VBUS jumps to 9V.

  While keeping the D- connection with a voltage between 0.325 to 2 volts,make D+  a voltage between 0.325 to 2 volts.
  The VBUS jumps to 12V. (because the D+ and D- voltage are between 2V and 0.325V)

  Disconnect the D+ from a voltage between 0.325 to 2 volts . VBUS jumps to 5V, Because the QC2.0 exits Voltage changing
  mode and VBUS goes to the default value 5V. start from beginning when needing to enter QC2.0 again)
*/
//  ============  IMPORTANT NOTE ================  //

// *** Sequence of making pins HIGH and LOW is important
// *** If D+ falls below 0.325V during transition because of wrong GPIO Switching Sequence
// *** QC 2.0 will exit High Voltage Mode and VBUS will go back to 5 Volts

//  ==============================================  //

#define PUSH_SWITCH 0
#define Dp_2k2 4
#define Dp_10k 3
#define Dn_2k2 2
#define Dn_10k 1

#include <EEPROM.h>
int Press_Detect = 0;
byte voltage = EEPROM.read(0);
bool V9_flag = false;
bool V12_flag = false;

void setup()
{
  pinMode(PUSH_SWITCH, INPUT_PULLUP);
  // Now Initiating QC Handshake by making D+ 0.6 v keeping D- at Gnd
  Init_QC();
  switch (voltage)
  {
    case 9:
      Set_9V();
      V9_flag = true;
      break;
    case 12:
      Set_12V();
      V12_flag = true;
      break;
    default:
      break;
  }
}

void loop()
{
  //// 5V ////
  if (!debounce(PUSH_SWITCH, bool(digitalRead(PUSH_SWITCH))))
{
  if ((!V9_flag) && (!V12_flag))
      {
        Set_9V();
        V9_flag = true;
        V12_flag = false;
        EEPROM.update(0, 9);
        delay(250);
      }
      else if ((V9_flag) && (!V12_flag))
      {
        Set_12V();
        V9_flag = false;
        V12_flag = true;
        EEPROM.update(0, 12);
        delay(250);
      }
      else if ((!V9_flag) && (V12_flag))
    {
      Set_5V();
        V9_flag = false;
        V12_flag = false;
        EEPROM.update(0, 5);
        delay(250);
      }
    }
  }



///********************** Functions **********************///

void Init_QC()
{
  //pinMode(Dn_2k2, INPUT);
  //pinMode(Dn_10k, INPUT);

  pinMode(Dp_2k2, OUTPUT);
  pinMode(Dp_10k, OUTPUT);
  digitalWrite(Dp_2k2, LOW);
  digitalWrite(Dp_10k, HIGH);

  delay(3000);
  // now QC protocol is active

}

void Set_9V()
{
  pinMode(Dp_2k2, OUTPUT);
  pinMode(Dp_10k, OUTPUT);
  digitalWrite(Dp_10k, HIGH);
  digitalWrite(Dp_2k2, HIGH);
  pinMode(Dn_2k2, OUTPUT);
  pinMode(Dn_10k, OUTPUT);
  digitalWrite(Dn_2k2, LOW);
  digitalWrite(Dn_10k, HIGH);
}

void Set_12V()
{
  pinMode(Dp_2k2, OUTPUT);
  pinMode(Dp_10k, OUTPUT);
  pinMode(Dn_2k2, OUTPUT);
  pinMode(Dn_10k, OUTPUT);
  digitalWrite(Dn_2k2, LOW);
  digitalWrite(Dn_10k, HIGH);
  digitalWrite(Dp_10k, HIGH);
  digitalWrite(Dp_2k2, LOW);
}

void Set_5V()
{
  pinMode(Dp_2k2, OUTPUT);
  pinMode(Dp_10k, OUTPUT);
  digitalWrite(Dp_10k, HIGH);
  digitalWrite(Dp_2k2, LOW);
  pinMode(Dn_2k2, OUTPUT);
  pinMode(Dn_10k, OUTPUT);
  digitalWrite(Dn_2k2, LOW);
  digitalWrite(Dn_10k, LOW);

}

void Set_20V()
{
  // change Voltage Regulator !!!
  // do at your own risk
}

void v_up()
{
  
}


void v_down()
{
  
}
boolean debounce(int pin, boolean state)          //recursive function checks the value twice to avoid bounce issues/change sampling interval
{ delay(50);
  boolean stateNow = digitalRead(pin);
  if (state != stateNow)
  {
    bool x;
    x = debounce(pin, digitalRead(pin));
    return x;
  }
  return stateNow;
}
