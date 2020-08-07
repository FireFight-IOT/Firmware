#define Buzzer 5 
#define gas A0

//int com = CH
int com = 1;

boolean fire = false;
void setup() {
  Serial.begin(9600);
  pinMode(Buzzer,OUTPUT);
}

void loop() {
  int gas_d = analogRead(A0);
  
  Serial.println(gas_d);

  delay(1000);
}
