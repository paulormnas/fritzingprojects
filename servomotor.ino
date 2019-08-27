#include <Servo.h>
 
#define SERVO 11    // Porta Digital 11 PWM
#define LED 4       //Porta do LED

Servo s;            // Variável Servo
int pos;            // Posiçao Servo
int luminosidade;   // Variável para armazenar valor de luminosidade
float temperatura;  // Variável para armazenar valor de temperatura

 
void setup ()
{
  s.attach(SERVO);
  Serial.begin(115200);
  s.write(0); // Inicia motor posiçao zero
  pinMode(LED, OUTPUT);
}
 
void loop(){
  ligaLuz();
  ligaVentilador();
}

void ligaVentilador{
  temperatura = analogRead(A5)*0.0048;
  if(temeratura > 25){
    for(pos = 0; pos <= 180; pos++){
      s.write(pos);
      delay(15);
    }
    delay(1000);
    for(pos = 180; pos >= 0; pos--){
      s.write(pos);
      delay(5);
    }
    delay(1000);
  }
}

void LigaLuz(){
   luminosidade = analogRead(A4);
   if(luminosidade  < 400){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
    
}

