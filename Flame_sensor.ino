int LED = 8;
int FlamePin = 7;  
int isFlame = HIGH;  

void setup() {
  pinMode(LED, OUTPUT); 
  pinMode(FlamePin, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  isFlame = digitalRead(FlamePin);
  if (isFlame== LOW)  
  {
    Serial.println("FLAME is on"); 
    digitalWrite(LED, HIGH);  
    delay(1000);
  }
  else                           
  {                               
    Serial.println("No Flame"); 
    digitalWrite(LED, LOW); 
    delay(1000);
  }
}
