int TEMP = 0;

void setup() {
 Serial.begin(9600);
}

void loop() {
  int reading = analogRead(TEMP);
  float voltage = reading * 5.0;
    voltage /= 1024.0;
  Serial.print(voltage); Serial.println(" volts");
  float temperatureC = voltage * 100;
  Serial.print (temperatureC); Serial.println(" degrees C");
  delay(1000);
}