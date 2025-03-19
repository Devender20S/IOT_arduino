void setup() {

  Serial.begin(9600);// 9600 or 115200 only these two universal bauds are used.
  Serial.println("hello system from setup");  
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("hello system ");
  delay(2000);
  // put your main code here, to run repeatedly:

}
