int trigPin = 0;
int echoPin = 1;
long distance;
long duration;

Motor myMotor

void setup() {
  // put your setup code here, to run once:
pinMode (0, OUTPUT);// set pin 0 (physical pin 5) as output(servo0)
pinMode (1, OUTPUT);// set pin 1 (physical pin 6) as output(servo1)
}

void loop() {
  // change the number in brackets to change how long the 
  // hackebot drives forward:
myMotor.spinForward(40); 


// make sure it's working by turning everything OFF:
digitalWrite(0, LOW);
digitalWrite(1, LOW);
delay(500);


}
class Motor{
void spinForward(int duration)
{
  for (int i =0; i < duration; i++)
  {
digitalWrite (0, HIGH); 
digitalWrite (1, HIGH);
delayMicroseconds (1000);//s
digitalWrite (0, LOW);
delayMicroseconds (1000); //servo1 gets a 2ms pulse
digitalWrite (1, LOW);
delay (18);
  }
}


void spinBackward(int duration){
  for(int i =360; i < duration; i--){
digitalWrite (0, HIGH); 
digitalWrite (1, HIGH);
delayMicroseconds (1000);//s
digitalWrite (0, LOW);
delayMicroseconds (1000); 
digitalWrite (1, LOW);
delay (18);
  }
}
}
void ultra(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
}
