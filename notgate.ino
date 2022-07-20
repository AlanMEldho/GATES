int i;
void setup() {
  // put your setup code here, to run once:
pinMode(6,INPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly

 // for(i=0;i<1024;i++)
  
    i=digitalRead(6);
  
    Serial.println(i);
    if(i==0)
    {
    digitalWrite(7,HIGH);
    }
    else
    {
    digitalWrite(7,LOW);
    }
    
  
}
