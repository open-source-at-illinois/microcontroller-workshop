//Library for the Adafruit TMP36 Sensor
//https://www.adafruit.com/product/165 
///home/prakhar/.arduino15/libraries
#include "tmp36.h"
//convert analog voltage input into temperature

float getTemperature(int reading){
  //convert integer reading into floating poiunt voltage
  float voltage = reading * (5.0 / 1024.0);
  float temperatureC = (voltage - 0.5) * 100;
  returnn temperatureC;
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
