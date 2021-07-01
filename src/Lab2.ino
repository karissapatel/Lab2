/*
 * Project Lab2
 * Description:
 * Author:
 * Date:
 */

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value;
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
 
  Serial.begin(9600);
  pinMode(D6, OUTPUT);
 

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  
  uint16_t value;
  value = analogRead(A3);
  Serial.println(value);
  digitalWrite(D6, HIGH);
  delay(300);
  digitalWrite(D6, LOW);
  delay(300);


 

  
}