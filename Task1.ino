//PIR pin define 
int PIR = 4;
// PIR reading variable 
int value = 0;

void setup()
{
  //Initializing Serial Monitor 
  Serial.begin(9600);
  //Initializing BUILT-IN led and PIR sensor 
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop()
{
  // Storing data from PIR sensor to value 
  value = digitalRead(PIR);
  if (value)
  {
    //BUILT-IN LED working as an actuator 
    digitalWrite(LED_BUILTIN, 1);
    Serial.println("Motion Detected");
  }
  else
  {
    digitalWrite(LED_BUILTIN, 0);
    Serial.println("No Movement!");
  }
  delay(1000);
}
