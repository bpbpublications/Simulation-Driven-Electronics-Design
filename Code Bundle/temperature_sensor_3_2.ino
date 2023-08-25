

int tempSensor = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(tempSensor);


  float voltage = reading * 4.8; //since exact 5V is not obtained
  voltage/=1024;
  // print the output temperature


  float temperature = (voltage - 0.5) * 100;
  Serial.print(temperature);
  Serial.print("degree C\n");


  delay(1000); // Wait for 1000 millisecond(s)
}
