int m11 = 13;                                          
int m12 = 12;
int m21 = 11;
int m22 = 10;
char val;



void forward()
{
  //funtionn for making the car move forward
   digitalWrite(m11, HIGH);
   digitalWrite(m12, LOW);
   digitalWrite(m21, HIGH);
   digitalWrite(m22, LOW);  
}


void backward()
{

  //makes the car move backwards
  digitalWrite(m11, LOW);
  digitalWrite(m12, HIGH);
  digitalWrite(m21, LOW);
  digitalWrite(m22, HIGH); 
}

void right()
{
  // makes the car go rigth
   digitalWrite(m11, HIGH);
   digitalWrite(m12, LOW);
   digitalWrite(m21, LOW);
   digitalWrite(m22, LOW);
}

void left()
{
  // make tthe car go left
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
  digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
  
}

void stopc()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(m11,OUTPUT);
  pinMode(m12,OUTPUT);
  pinMode(m21,OUTPUT);
  pinMode(m22,OUTPUT );

  digitalWrite(m11,LOW);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,LOW);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    val = Serial.read(); 
  }

  switch(val)
  {
    case 'f':
      forward();
      break;
     case 'b':
      backward();
      break;
     case 'l':
      left();
      break;
     case 'r':
      right();
      break;
     case 's':
      stopc();
      break;
      }

}
