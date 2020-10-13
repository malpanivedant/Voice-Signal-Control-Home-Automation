

int RELAY1 = 7; //connect relay1 input pin with arduino pin 7
int RELAY2 = 8; //connect relay2 input pin with arduino pin 8
String input;

void setup() {
  Serial.begin(9600);
  pinMode(RELAY1,OUTPUT);
  pinMode(RELAY2,OUTPUT);
}
void loop() {
  while (Serial.available()>0){
  delay(10);
    input = Serial.readString();
    Serial.println(input);
    } 
  if( input == "a"){  // when input (a) recive by arduino then relay1 on
  digitalWrite(RELAY1,0);
    delay(30); 
  } //if relay value zero like that (RELAY1,0) it's indicate relay on and vice versa
  else if(input == "b"){ // when input (b) recive by arduino then relay2 off
    digitalWrite(RELAY1,1);
    
  }
  else if(input == "c"){ // when input (c) recive by arduino then relay12 on
    digitalWrite(RELAY2,0);
    
  }
  else if(input == "d"){ // when input (d) recive by arduino then relay2 off
    digitalWrite(RELAY2,1);
  }
  else{
    digitalWrite(RELAY1,1); //when could not get any value then and both relay of
    digitalWrite(RELAY2,1);
  }
}
