#define ledCarroVermelho 		12
#define ledCarroAmarelo  		11
#define ledCarroVerde    		10
#define botao						 		9
#define ledPedestreVermelho 3
#define ledPedestreVerde	  2

void setup(){
	pinMode(ledCarroVermelho, OUTPUT);
	pinMode(ledCarroAmarelo, OUTPUT);
	pinMode(ledCarroVerde, OUTPUT);
	pinMode(ledPedestreVermelho, OUTPUT);
	pinMode(ledPedestreVerde, OUTPUT);
	pinMode(botao, INPUT);
}

void loop(){
	if(digitalRead(botao)){
		delay(1000);
		digitalWrite(ledCarroVerde, LOW);
		digitalWrite(ledCarroAmarelo, HIGH);
		delay(1000);
		digitalWrite(ledCarroAmarelo, LOW);
		digitalWrite(ledCarroVermelho, HIGH);
		digitalWrite(ledPedestreVermelho, LOW);
		digitalWrite(ledPedestreVerde, HIGH);
		delay(5000);

	}else{
		digitalWrite(ledCarroVermelho, LOW);
		digitalWrite(ledCarroAmarelo, LOW);
		digitalWrite(ledCarroVerde, HIGH);
		digitalWrite(ledPedestreVermelho, HIGH);
		digitalWrite(ledPedestreVerde, LOW);
	}

}