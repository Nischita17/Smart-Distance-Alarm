#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int buzzerPin = 8; // Tell the brain where the buzzer is
void setup()
{
  lcd.begin(16, 2); // Start LCD
  Serial.begin(9600);
pinMode(buzzerPin, OUTPUT); // The buzzer is a "Mouth" (Output)
  pinMode(9, OUTPUT);   // Trigger pin
  pinMode(10, INPUT);   // Echo pin
}

void loop()
{
  digitalWrite(9, LOW);
  delayMicroseconds(2);

  digitalWrite(9, HIGH);
  delayMicroseconds(10);

  digitalWrite(9, LOW);

  long duration = pulseIn(10, HIGH);
  int distance = duration * 0.034 / 2;

  lcd.setCursor(0, 0);
  lcd.print("Dist: ");
  lcd.print(distance);
  lcd.print(" cm   ");
if (distance < 20) {
  tone(buzzerPin, distance*10); // Send a 1000Hz sound (a beep)
} else {
  noTone(buzzerPin);     // Shhh! Be quiet
}
  Serial.print("Distance: ");
  Serial.println(distance);

  delay(200);
}