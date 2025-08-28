void setup() {
  // put your setup code here, to run once:
pinMode(A6, INPUT);
int lightLevel = analogRead(A6);
Serial.begin(9600);
Serial.println(lightLevel);
if (lightLevel < 100) {
Serial.println("Its really dark!")

}

if (lightLevel < 200) {
Serial.println("Its dim in here")

}

if(lightLevel < 700){
  Serial.println("Its a little bright!")

}

if(lightLevel < 1024){
  Serial.println("Its really bright!")
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
