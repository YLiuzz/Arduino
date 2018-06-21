//define 
int led = 13;
int interval = 0;
int init_interval =1000;
int delta = 200;
int num = 0;


char temp ; 
char cmd[5];
char cmd_length = 0;
char index = 0;



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
	
	Serial.print("cmd_length");
	Serial.println(Serial.available());
	index = 0;
	while(Serial.available()>0)
	{
		cmd[index] = Serial.read();

		index++;
	    // statement
	}
	int in atoi(cmd);
	Serial.print("in =");
	Serial.println(in);
}