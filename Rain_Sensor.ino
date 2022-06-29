#define BUZZER_PIN 13
void setup() {
  pinMode(BUZZER_PIN,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if(sensorValue<400)
  {
    digitalWrite(BUZZER_PIN,HIGH);
  }
  else
  {
    digitalWrite(BUZZER_PIN,LOW);
  }
  delay(1000);
}
