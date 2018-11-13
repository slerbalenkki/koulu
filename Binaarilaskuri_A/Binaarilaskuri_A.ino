#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10

#define LEDON LOW
#define LEDOFF HIGH

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(9600);
}

void turnOn(int led){
  digitalWrite(led, LEDON);
}

void turnOff(int led){
  digitalWrite(led, LEDOFF);
}

void nolla (){
  turnOff (LED1);
  turnOff (LED2);
  turnOff (LED3);
  turnOff (LED4);
}

void yksi(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOff (LED3);
  turnOff (LED4);
}

void kaksi(){
  turnOff (LED1);
  turnOn  (LED2);
  turnOff (LED3);
  turnOff (LED4);
}

void kolme(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOff (LED3);
  turnOff (LED4);
}

void nelja(){
  turnOff (LED1);
  turnOff (LED2);
  turnOn  (LED3);
  turnOff (LED4);
}

void viisi(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOn  (LED3);
  turnOff (LED4);
}

void loop() {
  // put your main code here, to run repeatedly:

}
