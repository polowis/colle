int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 8;
int led7 = 9;
int led8 = 10;
int num = 8;
int state;
byte pins[] = {3, 4, 5, 6, 7, 8, 9, 10};

int count = 0;

void setup() {
  for(int i = 0; i < num; i++) {
    pinMode(pins[i], OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  binary(250);
}

void led(){
    for(int i = 0; i< 256; i = i + 1){
    Serial.print(i);
    if(i == 1){
      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
    }
    if(i == 2){
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
    }
    if(i == 4){
      digitalWrite(led3, HIGH);
      delay(500);
      digitalWrite(led3, LOW);
    }
    if(i == 8){
      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led4, LOW);
    }
    if(i == 16){
      digitalWrite(led5, HIGH);
      delay(500);
      digitalWrite(led5, LOW);
    }
    if(i == 32){
      digitalWrite(led6, HIGH);
      delay(500);
      digitalWrite(led6, LOW);
    }
    if(i == 64){
      digitalWrite(led7, HIGH);
      delay(500);
      digitalWrite(led7, LOW);
    }
    if(i == 128){
      digitalWrite(led8, HIGH);
      delay(500);
      digitalWrite(led8, LOW);
    }
    
    
  }

}

void binary(int number){
  //store as a string
  String pinNumber = String(number, BIN);
  int numLength = pinNumber.length(); //get the length
  if(number < 256){
    for(int i = 0, x = 1; i < numLength; i++, x+=2) { 
      if(pinNumber[i] == '0') state = LOW;
      if(pinNumber[i] == '1') state = HIGH;
      digitalWrite(pins[i] + numLength - x, state);
    }
  
}
  else{
    return 0;
  }
}
