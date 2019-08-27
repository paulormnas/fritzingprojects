#define LED 6

void setup() {
  // put your setup code here, to run once:
	pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

	digitalWrite(LED, HIGH);
	delay(1000);
	digitalWrite(LED, LOW);
	delay(1000);
}