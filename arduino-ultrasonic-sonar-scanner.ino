#include <Servo.h>
int r = 11;
int g = 3;
int b = 5;
int servoPin = 6;
int buzzerPin = 2;
int echoPin = 12;
int trigPin = 10;
String direction = "left";


Servo myservo;

void setup() {
    myservo.attach(servoPin);
    myservo.write(90);
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
}

void loop () {
    if (direction == "left") {
        if (myservo.read() < 180) {
            myservo.write(myservo.read() + 1);
        } else {
            direction = "right";
        }
    }
    else if (direction == "right") {
        if (myservo.read() > 0) {
            myservo.write(myservo.read() - 1);
        } else {
            direction = "left";
        }
    }
        
    digitalWrite(trigPin, LOW);
    delay(10);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    long duration = pulseIn(echoPin, HIGH);
    int distance = duration * 0.034 / 2;
    if (distance < 10) {
        digitalWrite(r, HIGH);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        tone(buzzerPin, 300);
    } else if (distance < 20) {
        digitalWrite(r, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, HIGH);
        noTone(buzzerPin);
    }
    else {
        digitalWrite(r, LOW);
        digitalWrite(g, HIGH);
        digitalWrite(b, LOW);
        noTone(buzzerPin);
    }
}