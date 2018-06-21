//define
int value = 0;
int pin = A2;


//setup
void setup()
{
  Serial.begin(9600);
  pinMode(pin, INPUT);  
}

//loop
void loop()
{
  value= analogRead(pin);
  Serial.println(value);
  delay(1000);

}
