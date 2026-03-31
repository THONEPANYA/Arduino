#define ledPin A0
#define sensorvalue A1
byte flicker[] = {180,30,255,200,10,90,150,60};

void setup()
{
  pinMode(A0,OUTPUT);//ledpin
  pinMode(A1,INPUT);//sensorvalue
  Serial.begin(9600);
}
void loop()
{
  byte value = analogRead(sensorvalue);
  if(value > LOW)
  {
    analogWrite(ledPin, 255);
    Serial.println(value);
    delay(1000);
  }
  else
  {
    analogWrite(ledPin, 0);
    Serial.println(value);
    delay(500);
  }

}
