#include "tmp36.h"

float getTemp(int reading){
  //convert integer reading into floating poiunt voltage
  float voltage = reading * (5.0 / 1024.0);
  float temperatureC = (voltage - 0.5) * 100;
  returnn temperatureC;
}
