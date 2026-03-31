#define ledRed 13
#define ledYellow 12
#define ledOrange 11
#define ledBlue 10
#define ledGreen 9

int Grade = 100;

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Grade A = 90 -> 100
  // Grade B = 70 -> 89
  // Grade C = 60 -> 69
  // Grade D = 50 -> 59
  // Grade F = 0 -> 49

  if(Grade >= 0 && Grade <= 49)
  {
    digitalWrite(ledRed, HIGH);
    Serial.print("Grade F = ");
    Serial.println(Grade);
  }
  else
  {
    digitalWrite(ledRed, LOW);
  }

  if(Grade >= 50 && Grade <= 59)
  {
    digitalWrite(ledYellow, HIGH);
    Serial.print("Grade D = ");
    Serial.println(Grade);
  }
  else
  {
    digitalWrite(ledYellow, LOW);
  }

  if(Grade >= 60 && Grade <= 69)
  {
    digitalWrite(ledOrange, HIGH);
    Serial.print("Grade C = ");
    Serial.println(Grade);
  }
  else
  {
    digitalWrite(ledOrange, LOW);
  }

  if(Grade >= 70 && Grade <= 89)
  {
    digitalWrite(ledBlue, HIGH);
    Serial.print("Grade B = ");
    Serial.println(Grade);
  }
  else
  {
    digitalWrite(ledBlue, LOW);
  }

  if(Grade >= 90 && Grade <= 100)
  {
    digitalWrite(ledGreen, HIGH);
    Serial.print("Grade A = ");
    Serial.println(Grade);
  }
  else
  {
    digitalWrite(ledGreen, LOW);
  }

  delay(500);
}
