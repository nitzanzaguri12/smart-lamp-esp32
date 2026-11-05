const int LDR_PIN = 34;     
const int DARK_THRESHOLD = 800;  
void setup() {
  Serial.begin(115200);

}

void loop() {
  int light = analogRead(LDR_PIN);
  Serial.println(light);
  if (light < DARK_THRESHOLD) {
    Serial.println("dark");
  } else {
    Serial.println("light");
  }
  delay(200);

}
