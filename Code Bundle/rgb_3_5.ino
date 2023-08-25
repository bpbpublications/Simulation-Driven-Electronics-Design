// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(1000); 
  digitalWrite(12, LOW);
  delay(3000); 
  digitalWrite(8, HIGH);
  delay(1000); 
  digitalWrite(8, LOW);
  delay(2000); 
  digitalWrite(4, HIGH);
  delay(1000); 
  digitalWrite(4, LOW);
  delay(3000); 
}