#define RELAY 7
#define water A0


void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);    
    
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RELAY, HIGH);
delay(100);
digitalWrite(RELAY, LOW);

Serial.println("Cycle");
delay(300000);
}
