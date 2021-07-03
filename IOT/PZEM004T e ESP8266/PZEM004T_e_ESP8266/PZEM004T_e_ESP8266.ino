#include <ESP8266WiFi.h>
#include <PZEM004Tv30.h>
#include <Wire.h> 

PZEM004Tv30 pzem2(D5, D6);

char ssid[] = "AP@net";  //Enter your WIFI Name
char pass[] = "";  //Enter your WIFI Password

void setup()
{
  Serial.begin(115200);

}

void loop() {
  //energymeter 2
  float voltage2 = pzem2.voltage();
  float current2 = pzem2.current();
  float power2 = pzem2.power();
  float energy2 = pzem2.energy();
  float frequency2 = pzem2.frequency();
  float pf2 = pzem2.pf();
  Serial.println();
  Serial.println();
  Serial.println("tensao");
  Serial.print(voltage2);
  Serial.println();
  Serial.println("corrente");
  Serial.print(current2);
  Serial.println();
  Serial.println("frequencia");
  Serial.print(frequency2);
  delay(4000);
}
