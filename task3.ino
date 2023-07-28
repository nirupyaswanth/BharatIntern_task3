int systolicPressure, diastolicPressure, heartRate;
float bloodSugar;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}
void loop() {
  systolicPressure = random(100, 140);
  diastolicPressure = random(60, 90);
  bloodSugar = random(70, 150) + (random(0, 9) / 10.0);
  heartRate = random(60, 100);
  Serial.print("Blood Pressure: ");
  Serial.print(systolicPressure);
  Serial.print("/");
  Serial.print(diastolicPressure);
  Serial.println(" mmHg");
  Serial.print("Blood Sugar Level: ");
  Serial.print(bloodSugar);
  Serial.println(" mg/dL");
  Serial.print("Heart Rate: ");
  Serial.print(heartRate);
  Serial.println(" bpm");
  delay(5000);
}
