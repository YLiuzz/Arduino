//define
int value = 0;
int pin = A2;
int threshold = 500 ;
int led = 13;


//setup
void setup()
{
  Serial.begin(9600);
  pinMode(pin, INPUT);  
}

//loop
void loop()
{
  value analogRead(pin);
  if(value>threshold){
      digitalWrite(led, LOW);
  }else{
    digitalWrite(led, HIGH);
  }
  Serial.println(value);
  delay(1000);

}
