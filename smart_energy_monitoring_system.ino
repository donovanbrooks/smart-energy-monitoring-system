#include <PZEM004Tv30.h>

// Use ESP32 UART1
HardwareSerial mySerial(1); // UART1

// PZEM object
PZEM004Tv30 pzem(mySerial, 16, 17);

void setup() {
  Serial.begin(115200);

  // Initialize UART1
  mySerial.begin(9600, SERIAL_8N1, 16, 17);

  Serial.println("PZEM004Tv30 Monitoring Started");
}

void loop() {

  float voltage = pzem.voltage();
  float current = pzem.current();
  float power   = pzem.power();
  float energy  = pzem.energy();
  float freq    = pzem.frequency();

  // Remove invalid readings
  if (isnan(voltage) || voltage < 50) {
    voltage = 0;
    current = 0;
    power = 0;
    energy = 0;
    freq = 0;
  }

  Serial.println("====== POWER MONITOR ======");

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  Serial.print("Current: ");
  Serial.print(current);
  Serial.println(" A");

  Serial.print("Power:   ");
  Serial.print(power);
  Serial.println(" W");

  Serial.print("Energy:  ");
  Serial.print(energy);
  Serial.println(" Wh");

  Serial.print("Freq:    ");
  Serial.print(freq);
  Serial.println(" Hz");

  Serial.println("===========================\n");

  delay(2000);
}
