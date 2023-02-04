int timeA;
int timeB;
void setup()
{

  pinMode(LED_BUILTIN, OUTPUT);

}

void loop()
{
	timeA= millis();
  if(timeA - timeB > 1000){
    timeB = timeA;
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  }


}