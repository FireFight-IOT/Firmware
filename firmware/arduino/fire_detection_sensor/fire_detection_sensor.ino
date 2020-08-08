#define Buzzer 5

int Sensor[5] = {A0,A1,A2,A3,A4};
boolean fire[5] = {false,false,false,false,false};
int Gas_data[5] = {0,0,0,0,0};

void setup() {
  Serial.begin(9600);
  pinMode(Buzzer,OUTPUT);
}

void print_serial()
{
  Serial.print("1");
  Serial.print(" ");
  Serial.print(fire[0]);
  Serial.print(" ");
  Serial.print("2");
  Serial.print(" ");
  Serial.print(fire[1]);
  Serial.print(" ");
  Serial.print("3");
  Serial.print(" ");
  Serial.print(fire[2]);
  Serial.print(" ");
  Serial.print("4");
  Serial.print(" ");
  Serial.print(fire[3]);
  Serial.print(" ");
  Serial.print("5");
  Serial.print(" ");
  Serial.println(fire[4]);
}

void loop() {
  for(int i = 0; i < 5; i++) {
    Gas_data[i] = analogRead(Sensor[i]);
  }  
  for(int i = 0; i < 5; i++) {
    if(Gas_data[i] >= 500)
    {
      fire[i] = true;
    }
    else if(Gas_data[i] < 500)
    {
      fire[i] = false;    
    }
  }
  
  
  print_serial();
  delay(1000);
}
