 // Line Follower Robot

int ENA = 5;  //speed motor a
int M_A1 = 6; //motor a = +
int M_A2 = 7; //motor a = -
int M_B1 = 8; //motor b = -
int M_B2 = 9; //motor b = +
int ENB = 10;  //speed motor b
int R_S = A0; //sensor R
int S_S = A1; //sensor S
int L_S = A2; //sensor L

void setup()
{
pinMode(M_B1, OUTPUT);
pinMode(M_B2, OUTPUT);
pinMode(M_A1, OUTPUT);
pinMode(M_A2, OUTPUT);
pinMode(ENB, OUTPUT);
pinMode(ENA, OUTPUT);
pinMode(L_S, INPUT);
pinMode(S_S, INPUT);
pinMode(R_S, INPUT);
analogWrite(ENA, 230);
analogWrite(ENB, 230);
delay(200);
}
void loop()
{  
if ((digitalRead(L_S) == 0)&&(digitalRead(S_S) ==1)&&(digitalRead(R_S) == 0)){forword();}
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 0)){sharpLturn();}
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) ==0)&&(digitalRead(R_S) == 0)) {turnLeft();}
if ((digitalRead(L_S) ==0)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 1)){sharpRturn();}
if ((digitalRead(L_S) == 0)&&(digitalRead(S_S) == 0)&&(digitalRead(R_S) == 1)){turnRight();}
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 1)){forward();}
}
void forword(){
digitalWrite(M_A1, HIGH);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, HIGH);
digitalWrite(M_B2, LOW);
analogWrite (ENA,230);
analogWrite (ENB,230);  
}
void sharpRturn(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, HIGH);
digitalWrite(M_B1, HIGH);
digitalWrite(M_B2, LOW);  
analogWrite (ENA,230);
analogWrite (ENB,230);
   }
void turnRight(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, HIGH);
digitalWrite(M_B2, LOW);  
analogWrite (ENA,230);
analogWrite (ENB,230);
}
void sharpLturn(){
digitalWrite(M_A1, HIGH);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, HIGH);
analogWrite (ENA,230);
analogWrite (ENB,230);
}
void turnLeft(){
digitalWrite(M_A1, HIGH);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
analogWrite (ENA,230);
analogWrite (ENB,230);
}
void Stop(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
analogWrite (ENA,230);
analogWrite (ENB,230);
}
