
int state = 0;

void setup() 
{
  pinMode(9, OUTPUT);
  Serial1.begin(9600);
}
void loop() 
{
  
  if(Serial1.available()>0)
  {
    state = Serial1.read();
  
    if (state == '0')
    {
      digitalWrite(9, LOW);
      Serial1.println("led: off");
      state = 0;
    }
    if (state == '1')
    {
      digitalWrite(9, HIGH);
      Serial1.println("led: on");
      state = 1;
    }
  }  
}
