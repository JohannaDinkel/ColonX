int mypin2;

void setup() {
  // put your setup code here, to run once:
  Serial.Begin(9600);

  pinMode(my_pin,OUTPUT);
  pinMode(A6,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(my_pin,41);
  int a = analogRead(A6)
  Serialprintln(a);
}
