
void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH); 
  digitalWrite(10, LOW); 
  delay(2000);            
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW); 
  delay(5000); 
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW); 
  delay(5000);
}