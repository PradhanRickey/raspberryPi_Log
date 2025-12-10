int redLED = 9;
int off = 0;
int veryVeryDim = 50;
int veryDim = 100;
int bright = 150;
int veryBright = 200;
int veryVeryBright = 255;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redLED, off);
  delay(delayTime);
  analogWrite(redLED, veryVeryDim);
  delay(delayTime);
  analogWrite(redLED, veryDim);
  delay(delayTime);
  analogWrite(redLED, bright);
  delay(delayTime);
  analogWrite(redLED, veryBright);
  delay(delayTime);
  analogWrite(redLED, veryVeryBright);
  delay(delayTime);

}
