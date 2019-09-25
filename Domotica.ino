#include <Servo.h>
Servo servo1;
int duracion=250; 
int fMin=2000; 
int fMax=4000; 
int i=0;
int estado=0;
int retardo=100;
int analogo=0;
int pir=2;
int value=0;
float tempC;
int pinLM35 = 1;

void setup() {
servo1.attach(4);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(8,OUTPUT);
pinMode(pir,INPUT);
Serial.begin(9600);
delay(1000);
}
void loop() {

tempC = analogRead(pinLM35); 
   
  
tempC = (5.0 * tempC * 100.0)/1023.0; 
 
  
Serial.print(tempC);
  
Serial.print("\n");
  
  
delay(2000);{

 if(Serial.available()>0){
   estado = Serial.read();
 }
 if( estado== 'a' ){
     digitalWrite(13,HIGH);
}
if(estado== 'b' ){
     digitalWrite(13,LOW);
    }
 if( estado== 'c' ){
     digitalWrite(12,HIGH);
}
if(estado== 'd' ){
     digitalWrite(12,LOW);
    }
 if( estado== 'e' ){
     digitalWrite(11,HIGH);
}
if(estado== 'f' ){
     digitalWrite(11,LOW);
    }    
if(estado== 'g' ){

digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);  

for (i=fMin;i<=fMax; i++)
     tone(8, i, duracion);
  
for (i=fMax;i>=fMin; i--)
    tone(8, i, duracion);  
    }

if (estado== 'h'){
  digitalWrite(8,LOW);
}

if(estado== 'i' ){
digitalWrite (13, HIGH);
digitalWrite (11, HIGH);
delay(50);

digitalWrite (13, LOW); 
digitalWrite (11, LOW);
delay(50);

digitalWrite (13, HIGH);
digitalWrite (11, HIGH);
delay(50);

digitalWrite (13, LOW); 
digitalWrite (11, LOW);
delay(50);

digitalWrite (13, HIGH);
digitalWrite (11, HIGH);
delay(50);

digitalWrite (13, LOW); 
digitalWrite (11, LOW);
delay(50);//mira ve 6

digitalWrite (12, HIGH);
digitalWrite (11, HIGH);
delay(50);

digitalWrite (12, LOW); 
digitalWrite (11, LOW);
delay(50);

digitalWrite (12, HIGH);
digitalWrite (11, HIGH);
delay(50);

digitalWrite (12, LOW); 
digitalWrite (11, LOW);
delay(50);

digitalWrite (12, HIGH);
digitalWrite (11, HIGH);
delay(50);

digitalWrite (12, LOW); 
digitalWrite (11, LOW);
delay(50);// mira ve 6*2

digitalWrite (12, HIGH);
digitalWrite (13, HIGH);
delay(50);

digitalWrite (12, LOW); 
digitalWrite (13, LOW);
delay(50);

digitalWrite (12, HIGH);
digitalWrite (13, HIGH);
delay(50);

digitalWrite (12, LOW); 
digitalWrite (13, LOW);
delay(50);

digitalWrite (12, HIGH);
digitalWrite (13, HIGH);
delay(50);

digitalWrite (12, LOW); 
digitalWrite (13, LOW);
delay(50);// mira ve 6*3
 }

if(estado== 'j' ){
 digitalWrite(13,LOW);
 digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 }

 ///Sensor de Movimiento.

 if(estado== 'k' )
          {
              int value= digitalRead(pir);

              if (value== HIGH)
              {
               digitalWrite(13,HIGH);
               digitalWrite(12,HIGH);
               digitalWrite(11,HIGH);
               delay(500);
              }
              else 
              {
              digitalWrite(13,LOW);
              digitalWrite(12,LOW);
              digitalWrite(11,LOW); 
              delay(500);
              }
 }
 
  if(estado== 'l' ){
 digitalWrite(13,LOW);
 digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 }

 /// TEmperatura
  
 
}
}
