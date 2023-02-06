void setup()
{
  Serial.begin(9600);
  
  Serial.println("Calculator...");
  Serial.println("First, insert your oparation:");
  
  Serial.println("( +, -, *, / )");
  
  while(!Serial.available()){
  }
  String op = Serial.readString();
  Serial.println(">" + op);
  
  Serial.println("First Number of your operation:");
  while(!Serial.available()){
  }
  int number1 = Serial.parseInt();
  Serial.print(">");
  Serial.println(number1);
  
  Serial.println("Second Number of your operation");
  while(!Serial.available()){
  }
  int number2 = Serial.parseInt();
  Serial.print(">");
  Serial.println(number2);
  
  int result;
  
  if(op == "+"){
    result = number1 + number2;
  }
  else if(op == "-"){
    result = number1 - number2;
  }
  else if(op == "*"){
    result = number1 * number2;
  }
  else if(op == "/"){
  result = number1 / number2;
  }
  else{
    Serial.print("ERROR, PLEASE RESET");
    int Error = true;
    while(Error == true){
    }
  }
  Serial.print("Your result is: ");
  Serial.print(number1);
  Serial.print(" ");
  Serial.print(op);
  Serial.print(" ");
  Serial.print(number2);
  Serial.print(" = ");
  Serial.print(result);
}

void loop(){}