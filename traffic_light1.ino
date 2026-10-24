const int REDpin=9;
const int YELLOWpin=6;
const int GREENpin=3;
void setup(){
  pinMode(REDpin,OUTPUT);
  pinMode(YELLOWpin,OUTPUT);
  pinMode(GREENpin,OUTPUT);
}
void loop(){
  digitalWrite(REDpin,HIGH);
  digitalWrite(YELLOWpin,LOW);
  digitalWrite(GREENpin,LOW);
  delay(5000);
    
  digitalWrite(REDpin,LOW);
  digitalWrite(YELLOWpin,HIGH);
  digitalWrite(GREENpin,LOW);
  delay(1000);
  
  digitalWrite(REDpin,LOW);
  digitalWrite(YELLOWpin,LOW);
  digitalWrite(GREENpin,HIGH);
  delay(3000);
}