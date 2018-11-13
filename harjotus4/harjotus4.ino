#define LED1 12
#define PAINIKE1 4
#define PAINIKE2 5


void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(PAINIKE1,INPUT_PULLUP);
pinMode(PAINIKE2,INPUT_PULLUP);
Serial.begin(9600);
}


#define LEDON LOW
#define LEDOFF HIGH


void loop() {
  // put your main code here, to run repeatedly:
  
  int z = digitalRead(PAINIKE1);
  if( z == LOW){
    digitalWrite(LED1, LEDON);
  }else{
    digitalWrite(LED1,LEDOFF);
  }
  
  
  int x = digitalRead(PAINIKE2);
  if( x == BUTTONPRESSED){
    Serial.println("MORO");
  }
  

}
