int i,j;
void setup() {
  // put your setup code here, to run once:
pinMode(12,INPUT_PULLUP);
pinMode(13,INPUT_PULLUP);
pinMode(7,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly

 // for(i=0;i<1024;i++)
  
    i=digitalRead(12);
    j=digitalRead(13);
  
    Serial.println(i);
    
    Serial.print(j);
    if(i==1 or j==1)
    {
    digitalWrite(7,HIGH);
    }
    else
    {
    digitalWrite(7,LOW);
    }
    
  
}
