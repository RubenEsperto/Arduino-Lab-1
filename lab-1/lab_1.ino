/****************************************************
	Programmer......: (c) Rúben Esperto
    Date............: 11/12/2024
    Observations....: First Arduino Lab
    
    				  Led control
****************************************************/

const int LED_PIN = 7;
const int WAIT_TIME_MS = 1000;

void setup(){
  pinMode(LED_PIN, OUTPUT);
}

void loop(){
  digitalWrite(LED_PIN, HIGH);
  delay(WAIT_TIME_MS);
  digitalWrite(LED_PIN, LOW);
  delay(WAIT_TIME_MS);
}