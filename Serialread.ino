//define 
int led = 13;
int interval = 0;
int init_interval =1000;
int delta = 200;
int num = 0;
char temp = "" ; 


//setup
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
}

//loop
void loop()
{
  blink();
  change();
  check();
  
}
void blink()
{
  digitalWrite(led, HIGH);  
      delay(1000);
      digitalWrite(led, LOW);
      delay(1000);
}
void change()
{
if(interval>delta)
{

      interval = interval-delta;
      
}else
 {
      interval = init_interval;
}
  Serial.println(interval);
}
void check()
{
  num = Serial.available();
  Serial.print("now ardunio buffer num");
  Serial.println(num);
  if(num>0)
  {
    temp = Serial.read();
    Serial.print("temp");
    Serial.println(temp);


  }
}
