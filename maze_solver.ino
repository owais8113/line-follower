int ENA = 5;  //speed motor a
int IN1 = 6; //motor a = +
int IN2 = 7; //motor a = -
int IN3 = 8; //motor b = -
int IN4 = 9; //motor b = +
int ENB = 10;  //speed motor b
int R_S = A0; //sensor R
int S_S = A1; //sensor S
int L_S = A2; //sensor L
void forword();
void sharpRturn();
void turnRight();
void sharpLturn();
void turnLeft();
void Stop();
void setup()
{
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(ENB, OUTPUT);
pinMode(ENA, OUTPUT);
pinMode(L_S, INPUT);
pinMode(S_S, INPUT);
pinMode(R_S, INPUT);
delay(200);
}
void loop()
{
  Serial.begin(9600);
if ((digitalRead(L_S) == 0)&&(digitalRead(S_S) ==0)&&(digitalRead(R_S) == 0)){turnLeft();}  
if ((digitalRead(L_S) == 0)&&(digitalRead(S_S) ==1)&&(digitalRead(R_S) == 0)){forword();}
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 0)){sharpLturn();}
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) ==0)&&(digitalRead(R_S) == 0)) {turnLeft();}
if ((digitalRead(L_S) ==0)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 1)){sharpRturn();}
if ((digitalRead(L_S) == 0)&&(digitalRead(S_S) == 0)&&(digitalRead(R_S) == 1)){turnRight();}
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 1)){forword();}
}
void forword(){
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite (ENA,100);
analogWrite (ENB,100);  
}
void sharpRturn(){
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);  
analogWrite (ENA,100);
analogWrite (ENB,100);
   }
void turnRight(){
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);  
analogWrite (ENA,100);
analogWrite (ENB,100);
}
void sharpLturn(){
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
analogWrite (ENA,100);
analogWrite (ENB,100);
}
void turnLeft(){
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite (ENA,100);
analogWrite (ENB,100);
}
void Stop(){
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite (ENA,100);
analogWrite (ENB,100);
}
