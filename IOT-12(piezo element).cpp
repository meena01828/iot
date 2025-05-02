#define PIEZO_PIN A0 
#define BUZZER_PIN 9 
#define THRESHOLD 100 
void setup() { 
Serial.begin(9600); 
pinMode(BUZZER_PIN, OUTPUT); 
Serial.println("Waiting for a knock..."); 
} 
void loop() { 
int knockValue = analogRead(PIEZO_PIN); 
Serial.println(knockValue); 

if (knockValue > THRESHOLD) { 
Serial.println("Knock detected! Playing tune..."); 
tone(BUZZER_PIN, 262, 300); 
delay(400); 
tone(BUZZER_PIN, 330, 300); 
delay(400); 
tone(BUZZER_PIN, 392, 300); 
delay(400); 
tone(BUZZER_PIN, 523, 500);  
delay(600); 
noTone(BUZZER_PIN); 
Serial.println("Waiting for next knock..."); 
} 
delay(100); 
} 