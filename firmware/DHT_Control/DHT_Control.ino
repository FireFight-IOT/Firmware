#include <DHT11.h>
int pin = A1;  // 핀설정
DHT11 dht11(pin);
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  int i;
  float humi, temp;
  if((i = dht11.read(humi, temp)) == 0) {  
    Serial.print("humidity:");          
    Serial.println(humi);                                     
  } 
  else{ 
    Serial.print("Error:");                    
    Serial.println(i);                          
  }  
  if(humi > 45)
  {
    Serial.print("FIRE"); 
  }
  delay(1000);
} 
