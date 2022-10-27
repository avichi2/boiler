#include <Arduino.h>
#include<WiFi.h>
#include<HTTPClient.h>

char ssid[]="frommer";
char password[]="karby2212";
char domain[]="https://frommerdud.w3spaces.com/";
String payload="{}";
char stream[10];
void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid,password);
 while(WiFi.status() !=WL_CONNECTED){
delay(500);
Serial.println(".");
 }
  // put your setup code here, to run once:
}

void loop() {
  
  HTTPClient http;
  http.read();
  http.begin(domain);
  int code=http.GET();
  if(code>0){
  
   payload = http.getString();
  }
Serial.println(payload);
http.end();

  // put your main code here, to run repeatedly:
}