

const int analogIn = A0;
int humidityoutput = 0;
int rawvalue = 0;
double voltage = 0;
double temp = 0;

void setup()
{
Serial.begin(9600);
pinMode(A1, INPUT);
}

void loop()
{
rawvalue = analogRead(analogIn);
voltage = (rawvalue/1023.0) * 5000;
 // 500 is offset
temp = (voltage-500) * 0.1;
Serial.print(rawvalue);
Serial.print("\t milli volt");
Serial.print("Temperature in degree C = ");

Serial.print(temp);
humidityoutput = analogRead(A1);
Serial.print("Humidity = ");
  
Serial.print(map(humidityoutput, 0, 1023, 10, 70)); 
Serial.println("%");
delay(1000);
} 
