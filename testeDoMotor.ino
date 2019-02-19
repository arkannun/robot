
//Definicoes pinos Arduino ligados a entrada da Ponte H
/*
 * 2 - vermelho
 * 3~ - marrom (vel mot a)
 * 4 - preto
 * 5 - branco
 * 6~ - cinza (vel mot b)
 * 7 - amarelo
 */
int IN1 = 2;
int IN2 = 4;
int IN3 = 5;
int IN4 = 7;
int PinVelA = 3;
int PinVelB = 6;


//Velocidade vai de 0 a 255
int velocidadeA = 0;
int velocidadeB = 0;

int LimiteVel=200;

void setup()
{
   Serial.begin(9600);
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(PinVelA, OUTPUT);
 pinMode(PinVelB, OUTPUT);


}

void loop()
{
  delay(50);
 //Gira o Motor A no sentido horario
 /*
   digitalWrite(IN1, HIGH);
   analogWrite(PinVelA, velocidadeA); *** 255 max
   digitalWrite(IN2, LOW);
   delay(2000);
   delay(500);


  velocidadeA +=10;
  velocidadeB +=10;
  if (velocidadeA>LimiteVel) {
  velocidadeA =0;
 }
  if (velocidadeB >LimiteVel) {
  velocidadeB =0;
 }

  */
  velocidadeA=50;
 Serial.print("A-> ");
 Serial.println(velocidadeA);
// Serial.print("B-> ");
// Serial.println(velocidadeB);
 analogWrite(PinVelA, velocidadeA);
// analogWrite(PinVelB, velocidadeB);
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
// digitalWrite(IN3, HIGH);
 //digitalWrite(IN4, LOW);
 delay(300);
}
