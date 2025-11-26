int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;

int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // count 0
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  delay(delayTime);

    // count 1
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  delay(delayTime);

    // count 2
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  delay(delayTime);

      // count 3
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  delay(delayTime);

      // count 4
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
  delay(delayTime);

      // count 5
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
  delay(delayTime);

      // count 6
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
  delay(delayTime);

      // count 7
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
  delay(delayTime);

      // count 8
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH);
  delay(delayTime);

      // count 9
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH);
  delay(delayTime);

      // count 10
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH);
  delay(delayTime);

      // count 11
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
  delay(delayTime);

      // count 12
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  delay(delayTime);

      // count 13
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
  delay(delayTime);

      // count 14
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
  delay(delayTime);

      // count 15
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
  delay(delayTime);


}
