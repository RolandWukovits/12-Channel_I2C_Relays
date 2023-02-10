#include <Wire.h>
#include <PCF8575.h>              // this uses the PCF8575 library by Rob Tillaart, please install it first

PCF8575 PCF_01(0x20);

int relayPin1=0;
int relayPin2=1;
int relayPin3=2;
int relayPin4=3;
int relayPin5=4;
int relayPin6=5;
int relayPin7=6;
int relayPin8=7;
int relayPin9=8;
int relayPin10=9;
int relayPin11=10;
int relayPin12=11;
int switchPin1=12;
int switchPin2=13;

byte switch1;
byte switch2;

void setup() {

  // initialize i2c interface
  Wire.begin();
  PCF_01.begin();
  // initialize serial interface
  Serial.begin(9600);

  delay(1000);

  PCF_01.write(relayPin1,HIGH);
  PCF_01.write(relayPin2,HIGH);
  PCF_01.write(relayPin3,HIGH);
  PCF_01.write(relayPin4,HIGH);
  PCF_01.write(relayPin5,HIGH);
  PCF_01.write(relayPin6,HIGH);
  PCF_01.write(relayPin7,HIGH);
  PCF_01.write(relayPin8,HIGH);
  PCF_01.write(relayPin9,HIGH);
  PCF_01.write(relayPin10,HIGH);
  PCF_01.write(relayPin11,HIGH);
  PCF_01.write(relayPin12,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  switch1=PCF_01.read(switchPin1);            // this is reading the 2 switches
  if (switch1==HIGH){
    Serial.println("Switch 1: ON");
  }
  else{
    Serial.println("Switch 1: OFF");  
  }
  
  switch2=PCF_01.read(switchPin2);
  if (switch2==HIGH){
    Serial.println("Switch 2: ON");
  }
  else{
    Serial.println("Switch 2: OFF");  
  }  

  PCF_01.write(relayPin1,LOW);                // this is checking individual relays one by one
  delay(1000);
  PCF_01.write(relayPin1,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin2,LOW);
  delay(1000);
  PCF_01.write(relayPin2,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin3,LOW);
  delay(1000);
  PCF_01.write(relayPin3,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin4,LOW);
  delay(1000);
  PCF_01.write(relayPin4,HIGH);
  delay(1000);

  PCF_01.write(relayPin5,LOW);
  delay(1000);
  PCF_01.write(relayPin5,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin6,LOW);
  delay(1000);
  PCF_01.write(relayPin6,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin7,LOW);
  delay(1000);
  PCF_01.write(relayPin7,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin8,LOW);
  delay(1000);
  PCF_01.write(relayPin8,HIGH);
  delay(1000);
 
  PCF_01.write(relayPin9,LOW);
  delay(1000);
  PCF_01.write(relayPin9,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin10,LOW);
  delay(1000);
  PCF_01.write(relayPin10,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin11,LOW);
  delay(1000);
  PCF_01.write(relayPin11,HIGH);
  delay(1000);
  
  PCF_01.write(relayPin12,LOW);
  delay(1000);
  PCF_01.write(relayPin12,HIGH);
  delay(2000);

  
  PCF_01.write(relayPin1,LOW);                     // this turns on all relays one after the other
  delay(1000);
  PCF_01.write(relayPin2,LOW);
  delay(1000);
  PCF_01.write(relayPin3,LOW);
  delay(1000);
  PCF_01.write(relayPin4,LOW);
  delay(1000);
  PCF_01.write(relayPin5,LOW);
  delay(1000);
  PCF_01.write(relayPin6,LOW);
  delay(1000);
  PCF_01.write(relayPin7,LOW);
  delay(1000);
  PCF_01.write(relayPin8,LOW);
  delay(1000);
  PCF_01.write(relayPin9,LOW);
  delay(1000);
  PCF_01.write(relayPin10,LOW);
  delay(1000);
  PCF_01.write(relayPin11,LOW);
  delay(1000);
  PCF_01.write(relayPin12,LOW);
  delay(1000);
  

  delay(10000);

}
