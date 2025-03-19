#define dev A0 // define the sensor with name and its pin name
void setup() {
  Serial.begin(9600);
  pinMode(dev, INPUT); // defining the pin that it is for input or output

}

void loop() {

  int sensorvalue = analogRead(dev);// inbuilt function that read code
  Serial.println(sensorvalue);  
  delay(5000); 
}
