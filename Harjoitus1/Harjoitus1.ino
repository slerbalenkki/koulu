#define LED 5
#define LEDON LOW
#define LEDOFF HIGH

void setup () {
    //Sarjaliikenteen alustus, 9600 edustaa standardoitua nopeutta
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

#define VIIVE 1000
void loop () {
  Serial.println("Syttyi");
  digitalWrite(LED, LEDON);
  delay(VIIVE);
  Serial.println("Sammuiäääää");
  digitalWrite(LED, LEDOFF);
  delay(VIIVE);
}

