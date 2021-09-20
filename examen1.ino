float v = 0.0;
float A = 0.0;
void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  v = analogRead(A0);
  A= float((v*20)/1023);
  Serial.print("La aceleracion actual es: ");
  Serial.print(A);
  Serial.println("m/s^2");
  delay(1000);
}
