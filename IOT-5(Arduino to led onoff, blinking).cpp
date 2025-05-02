Single LED on/off:

#define LED_PIN 7

void setup() {
  pinMode(LED_PIN, OUTPUT);  
}

void loop() {
  digitalWrite(LED_PIN, HIGH); 
  delay(1000);                 
  digitalWrite(LED_PIN, LOW);  
  delay(1000);                 



Multiple LED Blinking :

#define LED1 7
#define LED2 8
#define LED3 9

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH); 
  delay(500);               
  digitalWrite(LED1, LOW);  

  digitalWrite(LED2, HIGH); 
  delay(500);
  digitalWrite(LED2, LOW);  

  digitalWrite(LED3, HIGH); 
  delay(500);
  digitalWrite(LED3, LOW);  

  delay(1000);              
}
