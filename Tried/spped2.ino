int sensor = A0;
int t1,t2;
int t=0;
int counter=0;
int sp=0;
int value;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  t1=micros();
  while(t<=1000000)
  {
    value= analogRead(sensor);
    Serial.println(value);
    if(value>200)
    {
      counter++;
    }
    t2= micros();
     t= t1-t2;
  }
  sp = counter*60;

  
  Serial.println("speed value is");
  Serial.println(sp);
 
}
