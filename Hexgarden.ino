int relay=13;
int sensor=8;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(relay,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(sensor);
  Serial.println(1);
  if (val==HIGH){
    digitalWrite(relay,HIGH);
    val=digitalRead(sensor);
  }
  else{
    digitalWrite(relay,LOW);
    val=digitalRead(sensor);
    Serial.println(1);
  }
  delay(500);
}
