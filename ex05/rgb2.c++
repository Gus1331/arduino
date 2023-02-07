int color;
void setup()
{
	Serial.begin(9600);
}

void loop()
{

  Serial.println("Select the number to change the led color RGB:");

  Serial.println("1: Red");
  Serial.println("2: Green");
  Serial.println("3: Blue");
  
  while (!Serial.available()) {}
  color = Serial.parseInt();
  
  Serial.println("This color is ");
  
  switch(color){
    case 1:
    changeColor(255, 0, 0);
    Serial.println("Red");
    break;
  
    case 2:
    changeColor(0, 255, 0);
    Serial.println("Green");
    break;
    
    case 3:
    changeColor(0, 0, 255);
    Serial.println("Blue");
    break;
    
    default:
    changeColor(0, 0, 0);
    Serial.print("ERROR: 1, 2 or 3 number expected");
    break;
  }
  
  Serial.println(" ");
  Serial.println(" ");
}

void changeColor(int _red, int _green, int _blue){
    analogWrite(11, _red);
  analogWrite(10, _green);
	analogWrite(9, _blue);
}