/*
0 -> A, B, C, D, E, F.
1 -> B, C.
2 -> A, B, G, E, D.
3 -> A, B, G, C, D.
4 -> B, G, F, C.
5 -> A, F, G, C, D.
6 -> A, F, G, C, D, E.
7 -> A, B, C.
8 -> A, B, C, D, E, F, G.
9 -> A, B, C, D, F, G.

digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW); // O do meio.
*/

#define A 3
#define B 2
#define C 6
#define D 7
#define E 8
#define F 4
#define G 5

void setup()
{
  //definição de saidas dos pins, conectados ao Visor.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  //chamada da ativação de cada parte do visor.
  for(int i = 0; i <= 9; i++)
  {
    delay(1000);
  	numeration(i);
    delay(600);
  }
}
//função da numeração das partes do visor.
void numeration(int number)
{
  if (number == 0){
  	digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
  } if (number == 1){
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
  } if (number == 2){   
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);  	
  } if (number == 3){
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(G, HIGH);  	
  } if (number == 4){
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);  	
  } if (number == 5){
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(G, HIGH);   	
  } if (number == 6){
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(G, HIGH);
  } if (number == 7){
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
  } if (number == 8){
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  } if (number == 9){
    digitalWrite(E, LOW);
    delay(600);
    //limpeza de todas partes do visor.
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
  }
}