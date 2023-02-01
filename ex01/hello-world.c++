
void setup()
{
  Serial.begin(9600);
  Serial.println("Hello world!");
  Serial.println("Insert your name...");
  while(!Serial.available()){
  }
  String name = Serial.readString();
  Serial.println(">" + name);
  
  Serial.println("How old are you?");
  while(!Serial.available()){
  }
  int age = Serial.parseInt();
  Serial.print(">");
  Serial.println(age);
  Serial.print("Hello " + name + " age " + age + ", Nice to meet you!");
}


void loop()
{
	
}