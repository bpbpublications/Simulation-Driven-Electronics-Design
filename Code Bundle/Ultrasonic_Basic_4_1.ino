int distance = 0;
long readUltrasonicDistance(int sig)
{
  pinMode(sig, OUTPUT); //clear trigger
  digitalWrite(sig,0);
  delay(2);
  // set the signal pin HIGH
  digitalWrite(sig,1);
  delay(2);
  digitalWrite(sig,0);
  pinMode(sig, INPUT);


//read the sig pin and return the time in millisecond
  return pulseIn(sig, 1);
}
void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop()
{
    // calculate the distance
  distance = readUltrasonicDistance(7) * 0.03446/2; //speed of sound wave is considered and it is divided by 2 sincvesince it is two and fro
  // display the output on serial monitor
  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
  }
