/*
  PWM ile kalp atışı simulasyonu / Heart beat simulation with PWM
  Dr.Tronik>https://www.youtube.com/c/DrTRonik
  @Feb/2021
*/

void setup() {
    pinMode(6, OUTPUT);
    digitalWrite(6, LOW);
}

void loop() {
  for (int x = 0; x <= 255; x++) // pwm for döngüsü
    {
    analogWrite(6, x);
    delay(8);
    }

    //delay(50);
    for (int x = 255; x >= 0; x--)
    {
    analogWrite(6, x);
    delay(10);
    }
}
