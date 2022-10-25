int led = 9;
int led1=8;
int led2=7;
int led3=6;
void setup() {
  pinMode(led ,OUTPUT);
  pinMode(led1 ,OUTPUT);
  pinMode(led2 ,OUTPUT);
  pinMode(led3 ,OUTPUT);
  pinMode(led4 ,OUTPUT);

}

void loop() {
  digitalwrite(led,HIGH);
  digitalwrite(led1,LOW);
  digitalwrite(led2,LOW);
  digitalwrite(led3,LOW);
  digitalwrite(led4,LOW);
  delay(0.00000001); 
  
  digitalwrite(led,LOW);
  digitalwrite(led1,HIGH);
  digitalwrite(led2,LOW);
  digitalwrite(led3,LOW);
  digitalwrite(led4,LOW); 
  delay(0.00000001);

  
  digitalwrite(led,LOW);
  digitalwrite(led1,LOW);
  digitalwrite(led2,HIGH);
  digitalwrite(led3,LOW);
  digitalwrite(led4,LOW);
  delay(0.00000001);

  
  digitalwrite(led,LOW);
  digitalwrite(led1,LOW);
  digitalwrite(led2,LOW);
  digitalwrite(led3,HIGH);
  digitalwrite(led4,LOW); 
  delay(0.00000001);
  
  digitalwrite(led,LOW);
  digitalwrite(led1,LOW);
  digitalwrite(led2,HIGH);
  digitalwrite(led3,LOW);
  digitalwrite(led4,LOW); 
  delay(0.000000001);

  digitalwrite(led,LOW);
  digitalwrite(led1,HIGH);
  digitalwrite(led2,LOW);
  digitalwrite(led3,LOW);
  digitalwrite(led4,LOW); 
  delay(0.00000001);

  digitalwrite(led,HIGH);
  digitalwrite(led1,LOW);
  digitalwrite(led2,LOW);
  digitalwrite(led3,LOW);
  digitalwrite(led4,LOW);
  delay(0.00000001);  

}
