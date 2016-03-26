#include "DHT.h"

DHT dht(2, 22);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" C");
  Serial.print("Heat index: ");
  Serial.print(hic);
  Serial.println(" C");
  Serial.println();
  
}
