//Define os pinos para o trigger e echo
#define pino_trigger 5
#define pino_echo 4
 
//Inicializa o sensor nos pinos definidos acima
 
void setup()
{
  pinMode(pino_trigger, OUTPUT);
  pinMode(pino_echo, INPUT);
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}
 
void loop(){
  digitalWrite(pino_trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pino_trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pino_trigger, LOW);
  long usec = pulseIn(pino_echo , HIGH);
  Serial.print("distancia em cm: ");
  Serial.println(usec*0.000001*34000/2);
  delay(1000);
}