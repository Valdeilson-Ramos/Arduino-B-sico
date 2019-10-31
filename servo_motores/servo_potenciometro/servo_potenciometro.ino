#include "Servo.h"  // adicionando a biblioteca de servo

Servo servo1; //instanciando um servo

void setup() {
servo1.attach(5); // conecta ao pino 5  
Serial.begin(9600);
}

void loop() {
// Lê o valor do Potenciometro
  int angle = analogRead(0); 
  // Mapeia o valor de 0 a 180 graus
  angle=map(angle, 0, 1023, 0, 180);
  Serial.println(angle);
  // Repassa o angulo ao ServoWrite
  servo1.write(angle); 
  // Delay de 15ms para o Servo alcançar a posição
  delay(15);

}
