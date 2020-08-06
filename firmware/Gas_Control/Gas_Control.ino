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
  
  if(gas_d >= 500)
  {
    fire = true;
  }
  else if
  {
    fire = false;    
  }

  Serial.print(com);
  Serial.println(fire);

  delay(1000);
}
