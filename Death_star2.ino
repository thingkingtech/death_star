int one = 9;
int two = 8;
int three = 7;
int four = 6;
int five = 5;
int six = 4;
int seven = 3;
int pin1 = 10;
int pin2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(one, OUTPUT);
  pinMode(two, OUTPUT);
  pinMode(three, OUTPUT);
  pinMode(four, OUTPUT);
  pinMode(five, OUTPUT);
  pinMode(six, OUTPUT);
  pinMode(seven, OUTPUT);
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // LEDS ON
  if (digitalRead(pin1) == HIGH){
    digitalWrite(one, HIGH);
    digitalWrite(two, HIGH);
    digitalWrite(three, HIGH);
    digitalWrite(four, HIGH);
    digitalWrite(five, HIGH);
    digitalWrite(six, HIGH);
    digitalWrite(seven, HIGH);
  }
  // LEDS OFF
  if (digitalRead(pin2) == HIGH){
    digitalWrite(one, LOW);
    digitalWrite(two, LOW);
    digitalWrite(three, LOW);
    digitalWrite(four, LOW);
    digitalWrite(five, LOW);
    digitalWrite(six, LOW);
    digitalWrite(seven, LOW);
  }
  // LEDS ANIMATED
  if (digitalRead(pin1)==LOW && digitalRead(pin2)==LOW) {
    // STAGE 1
    delay(1000);
    digitalWrite(one, HIGH);
    digitalWrite(two, LOW);
    digitalWrite(three, LOW);
    delay(1200);
    
    digitalWrite(two, HIGH);
    digitalWrite(three, LOW);
    delay(50);
    digitalWrite(one, LOW);
    delay(1200);
    digitalWrite(one, LOW);
    digitalWrite(three, HIGH);
    delay(50);
    digitalWrite(two, LOW);
    delay(1200);
    digitalWrite(three, LOW);
    delay(2000);

    // STAGE 2
    digitalWrite(four, HIGH);
    delay(3000);
    digitalWrite(four, LOW);
    delay(2000);

   // STAGE 3
   digitalWrite(five, HIGH);
   delay(1000);
   digitalWrite(six, HIGH);
   delay(50);
   digitalWrite(five, LOW);
   delay(1000);
   digitalWrite(seven, HIGH);
   delay(50);
   digitalWrite(six, LOW);
   delay(1000);
   digitalWrite(five, HIGH);
   delay(50);
   digitalWrite(seven, LOW);
   delay(1000);
   digitalWrite(six, HIGH);
   delay(50);
   digitalWrite(five, LOW);
   delay(1000);
   digitalWrite(six, LOW);
   delay(2000);

   // STAGE 4
   digitalWrite(one, HIGH);
   digitalWrite(two, HIGH);
   digitalWrite(three, HIGH);
   digitalWrite(four, HIGH);
   digitalWrite(five, HIGH);
   digitalWrite(six, HIGH);
   digitalWrite(seven, HIGH);
   delay(3000);
   digitalWrite(one, LOW);
   digitalWrite(two, LOW);
   digitalWrite(three, LOW);
   digitalWrite(four, LOW);
   digitalWrite(five, LOW);
   digitalWrite(six, LOW);
   digitalWrite(seven, LOW);
   delay(3000);
  }
}
