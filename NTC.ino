float temperatura;

void setup(){
	Serial.begin(115200);
}

void loop(){
	temperatura = analogRead(A0)*0.0488;
	Serial.print(temperatura);
	Serial.println(" ºC");
}