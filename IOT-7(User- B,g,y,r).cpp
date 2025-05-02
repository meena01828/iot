#define GREEN_LED 7
#define YELLOW_LED 8
#define RED_LED 9

char userInput;

void setup() {
  Serial.begin(9600);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);

  Serial.println("Enter B, g, y, or r:");
}

void loop() {
  if (Serial.available() > 0) {
    userInput = Serial.read();

    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);

    switch (userInput) {
      case 'B':  
        for (int i = 0; i < 5; i++) {
          digitalWrite(GREEN_LED, HIGH);
          delay(300);
          digitalWrite(GREEN_LED, LOW);
          delay(300);
        }
        break;

      case 'g':
        digitalWrite(GREEN_LED, HIGH);
        break;

      case 'y':
        digitalWrite(YELLOW_LED, HIGH);
        break;

      case 'r':
        digitalWrite(RED_LED, HIGH);
        break;

      default:
        Serial.println("Invalid input. Enter B, g, y, or r.");
        break;
    }

    Serial.println("Enter B, g, y, or r:"); 
  }
}
