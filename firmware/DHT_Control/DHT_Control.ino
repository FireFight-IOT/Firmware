#include <DHT11.h>

int DHTpin = A1;  // 핀설정 
//int com = CH
int com = 1;

DHT11 dht11(pin);
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  int i;
  boolean a = false;
  float humi, temp;
  i = dht11.read(humi, temp);                                      
   
  if(humi < 45)
  {
    a = true;
  }

  Serial.println("h : %d",a);
  
  delay(1000);
} 
