
int shorttime = 500; //for dot in morse code
int longtime = 1000; // for dash in morse code 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void led(int time){
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(time);  //depends if code is dot or dash 
  digitalWrite(LED_BUILTIN, LOW);  
  delay(shorttime); //short delay 
}

void loop() {
  // put your main code here, to run repeatedly:
  //s
  led(shorttime); 
  led(shorttime);
  led(shorttime); 
  delay(longtime);

  //a
  led(shorttime);
  led(longtime);
  delay(longtime);

  //m
  led(longtime);
  led(longtime);
  delay(longtime);

  //b
  led(longtime);
  led(shorttime);
  led(shorttime);
  led(shorttime);
  delay(longtime);

  //o
  led(longtime);
  led(longtime);
  led(longtime);
  delay(longtime);

}

