LM35 :

#define TEMP_PIN A0

void setup() {
  Serial.begin(9600);
  Serial.println("Reading Temperature Sensor...");
}

void loop() {
  int rawValue = analogRead(TEMP_PIN); 
  float voltage = rawValue * (5.0 / 1023.0); 
  float temperature = voltage * 100.0;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);
}


DHT11 :

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Reading Temperature and Humidity...");
}

void loop() {
  float temperature = dht.readTemperature(); 
  float humidity = dht.readHumidity();       
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT11 sensor!");
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}
