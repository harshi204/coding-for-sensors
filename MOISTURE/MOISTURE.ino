

void setup()
{
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(6,OUTPUT);
}
void loop()
{
  int var=digitalRead(7);
  Serial.println(var);
  if(var<600)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
    digitalWrite(6,LOW);
  }
}
