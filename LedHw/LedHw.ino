// Global Variables

int redLED = 11;
int greenLED = 9;
int blueLED = 7;
int redDelay = 100;
int greenDelay = 500;
int blueDelay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 5; i++){
    digitalWrite(redLED,HIGH);
    delay(redDelay);
    digitalWrite(redLED,LOW);
    delay(redDelay);
  }

  for(int i = 0; i < 10; i++){
    digitalWrite(greenLED,HIGH);
    delay(greenDelay);
    digitalWrite(greenLED,LOW);
    delay(greenDelay);
  }

  for(int i = 0; i < 10; i++){
    digitalWrite(blueLED,HIGH);
    delay(blueDelay);
    digitalWrite(blueLED,LOW);
    delay(blueDelay);
  }

}
