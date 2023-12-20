//LEDchaser
//By Jotroniks 


int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;


void setup()
 { // put your setup code here, to run once:
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 
 }

void loop()
 { // put your main code here, to run repeatedly:
 digitalWrite(led1, HIGH);
 //delay(500);
 digitalWrite(led2, HIGH);
 //delay(500);
 digitalWrite(led3, HIGH);
//delay(500);
 digitalWrite(led4, HIGH);
// delay(500);
 digitalWrite(led5, HIGH);

 
 //digitalWrite(led1, LOW);
 delay(80);
 digitalWrite(led2, LOW);
 delay(80);
  digitalWrite(led3, LOW);
 delay(80);
 digitalWrite(led4, LOW);
 delay(80);
 digitalWrite(led5, LOW);
 delay(80);
 
  digitalWrite(led1, HIGH);
 //delay(500);
 digitalWrite(led2, HIGH);
 //delay(500);
 digitalWrite(led3, HIGH);
//delay(500);
 digitalWrite(led4, HIGH);
// delay(500);
 digitalWrite(led5, HIGH);

  digitalWrite(led5, LOW);
 delay(80);
  digitalWrite(led4, LOW);
 delay(80);
 digitalWrite(led3, LOW);
 delay(80);
 digitalWrite(led2, LOW);
 delay(80);
 }
