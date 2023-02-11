  int r;
  int g;
  int b;
void setup()
{
	Serial.begin(9600);
}

void loop()
{

  Serial.println("Change the led color based on RGB:");

  Serial.println("Choose the RED value");
  while(!Serial.available()){}
  r = Serial.parseInt();
  Serial.println(r);

  Serial.println("Choose the GREEN value");
  while(!Serial.available()){}
  
  g = Serial.parseInt();
  Serial.println(g);

  Serial.println("Choose the BLUE value");
  while(!Serial.available()){}
  b = Serial.parseInt();
  Serial.println(b);

  changeColor(r, g, b);

  Serial.println("This color is: ");
  
  Serial.print("R: ");
  Serial.print(r);
  Serial.print(" ");

  Serial.print("G: ");
  Serial.print(g);
  Serial.print(" ");
 
  Serial.print("B: ");
  Serial.print(b);
  Serial.print(" ");
  
  
  Serial.println(" ");
  Serial.println(" ");
  Serial.println(" ");
}

void changeColor(int _red, int _green, int _blue){
    analogWrite(11, _red);
  analogWrite(10, _green);
	analogWrite(9, _blue);
}