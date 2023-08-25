// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  int a = analogRead(A0);
  int b = map(a,0,1023,0,255);
  Serial.println(b);
  delay(1000); // Wait for 1000 millisecond(s)
  if ( b>=60)
      digitalWrite(8, HIGH);
   else
      digitalWrite(8, LOW);
}