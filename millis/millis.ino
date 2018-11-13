const int ledPin = 8;
const int buttonPin = 2;
const int BUTTONPRESSED = LOW;

const int VILKKUU = 0;
const int EIVILKU = 1;


int ledState = LOW;
int butOldState;

int x = EIVILKU;


unsigned long previousMillis = 0;
const long interval = 1000;



void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  butOldState = digitalRead(buttonPin);
  Serial.begin(9600);
}


void loop(){
  button();
  if(x == VILKKUU){
    vilkkuu();
  }else{
    ledState=HIGH;
    digitalWrite(ledPin, ledState);
  }
}


void button(){
  
  int butNewState = digitalRead(buttonPin);
  if(butNewState != butOldState){
    if(butNewState == BUTTONPRESSED){
      if(x == EIVILKU){
        x = VILKKUU;
      }else{
        x = EIVILKU;
      }
    }
    delay(20);
  }
  butOldState=butNewState;
}


void vilkkuu(){
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
    if (ledState == LOW){
      ledState = HIGH;
    }else{
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }
}


/*void loop(){
//Nappula 
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin ,LOW);
  }

//Ledi
  unsigned long currentMillis  = millis();
  if  (currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
    if(ledState == LOW){
      ledState = HIGH;
    }else{
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
    }
  }*/




