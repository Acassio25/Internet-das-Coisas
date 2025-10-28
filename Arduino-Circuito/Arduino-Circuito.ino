#define saida 2
#define led_0 10
#define led_1 9
#define led_2 8
int led0 = 0;
int led1 = 0;
int led2 = 0;

void setup() 
{
  pinMode(saida, OUTPUT);
  pinMode(led_0, INPUT);
  pinMode(led_1, INPUT);
  pinMode(led_2, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 led0= digitalRead(led_0);
 led1= digitalRead(led_1);
 led2= digitalRead(led_2);
  if(led2 && led1 && led0){
    Serial.println("111 = 7");
    for(int i=0; i < 7; i++)
    {
      digitalWrite(saida,HIGH);
      delay(500);
      digitalWrite(saida,LOW);
      delay(500);
    }
  }
  else if(led2 && led1 && !led0){
     Serial.println("110 = 6");
     for(int i=0; i < 6; i++){
      digitalWrite(saida,HIGH);
      delay(500);
      digitalWrite(saida,LOW);
      delay(500);}
    }
  else if(led2 && !led1 && led0){
      Serial.println("101 = 5");
      for(int i=0; i < 5; i++){
      digitalWrite(saida,HIGH);
      delay(500);
      digitalWrite(saida,LOW);
      delay(500); }
  }
  else if(led2 && !led1 && !led0){
      Serial.println("100 = 4");
      for(int i=0; i < 4; i++){
      digitalWrite(saida,HIGH);
      delay(500);
      digitalWrite(saida,LOW);
      delay(500);}
  }
  else if(!led2 && led1 && led0){
      Serial.println("011 = 3");
      for(int i=0; i < 3; i++){
      digitalWrite(saida,HIGH);
      delay(500);
      digitalWrite(saida,LOW);
      delay(500); }
  }
  else if(!led2 && led1 && !led0){
      Serial.println("010 = 2");
      for(int i=0; i < 2; i++){
      digitalWrite(saida,HIGH);
      delay(500);
      digitalWrite(saida,LOW);
      delay(500);}
  }
    else if(!led2 && !led1 && led0){
      Serial.println("001 = 1");
      for(int i=0; i < 1; i++){
      digitalWrite(saida,HIGH);
      delay(500);
      digitalWrite(saida,LOW);
      delay(500);}
  }
  else if(!led2 && !led1 && !led0){
    Serial.println("000 = 0");
  } 
 delay(2000);
}  
