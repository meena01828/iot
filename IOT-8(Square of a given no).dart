int number;
int squaredNumber;

void setup() {
  Serial.begin(9600);
  Serial.println("Enter a number:");
}

void loop() {
  if (Serial.available() > 0) {
    number = Serial.parseInt();  
    squaredNumber = number * number;

    Serial.print("You entered: ");
    Serial.println(number);

    Serial.print("Squared value: ");
    Serial.println(squaredNumber);

    while (Serial.available() > 0) {
      Serial.read();
    }

    Serial.println("\nEnter another number:");
  }
}
