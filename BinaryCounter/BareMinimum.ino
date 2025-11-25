int redLED = 12;
int greenLED = 10;
int blueLED = 8;
int yellowLED = 6;

int blinkSpeed = 500;
int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // count 0
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(delayTime);

  //count 1
  digitalWrite(yellowLED,HIGH);
  delay(delayTime);
  digitalWrite(yellowLED,LOW);
  delay(delayTime);

  //count 2
  digitalWrite(blueLED,HIGH);
  delay(delayTime);
  digitalWrite(blueLED,LOW);
  delay(delayTime);

  //count 3
  digitalWrite(blueLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(delayTime);
  digitalWrite(blueLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(delayTime);

  //count 4
  digitalWrite(greenLED,HIGH);
  delay(delayTime);
  digitalWrite(greenLED,LOW);
  delay(delayTime);

  //count 5
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(delayTime);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(delayTime);

  //count 6
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(delayTime);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(delayTime);

  //count 7
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(delayTime);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(delayTime);

  //count 8
  digitalWrite(redLED,HIGH);
  delay(delayTime);
  digitalWrite(redLED,LOW);
  delay(delayTime);




}
