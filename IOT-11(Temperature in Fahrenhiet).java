#define TEMP_PIN A0  

float maxTemp = -1000;  
float minTemp = 1000;   

void setup() {
  Serial.begin(9600);
  Serial.println("Temperature Monitor Started");
}

void loop() {
  int analogValue = analogRead(TEMP_PIN);

  float voltage = analogValue * (5.0 / 1023.0);
  float tempC = voltage * 100.0;  
  float tempF = (tempC * 9.0 / 5.0) + 32.0;

  if (tempF > maxTemp) {
    maxTemp = tempF;
  }
  if (tempF < minTemp) {
    minTemp = tempF;
  }

  Serial.print("Current Temperature (F): ");
  Serial.println(tempF);
  Serial.print("Max Temperature (F): ");
  Serial.println(maxTemp);
  Serial.print("Min Temperature (F): ");
  Serial.println(minTemp);
  Serial.println("-----------------------------");

  delay(2000); 
}
