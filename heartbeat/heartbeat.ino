int previousMillis=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  
  //turns led on after .5s and off after another .5s
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);

  //update the time after the entire second has passed
  int time = millis();
  Serial.print(time/1000);
  Serial.println(" seconds have elapsed");

  //how many milliseconds pass
  Serial.print(time-previousMillis);
  Serial.println(" milliseconds have passed");
}
