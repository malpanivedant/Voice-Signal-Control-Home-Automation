int RELAY1 = 7;
int RELAY2 = 8;
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
  if( input == "a"){  
  digitalWrite(RELAY1,0);
    delay(30); 
  }
  else if(input == "b"){
    digitalWrite(RELAY1,1);
    
  }
  else if(input == "c"){
    digitalWrite(RELAY2,0);
    
  }
  else if(input == "d"){
    digitalWrite(RELAY2,1);
  }
  else{
    digitalWrite(RELAY1,1);
    digitalWrite(RELAY2,1);
  }
}
