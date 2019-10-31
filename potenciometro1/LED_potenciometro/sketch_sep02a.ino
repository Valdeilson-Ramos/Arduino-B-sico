int pinPot = A0; // pino de sinal do potenciometro
int pinLED = 13; // pino de saída no LED
int valorPot = 0; // variável armazena o valor lido no potenciometro 

void setup() {
  pinMode(pinLED, OUTPUT); // declarando o pino do LED como saida
  Serial.begin(9600);
  
}

void loop() {
  valorPot = analogRead(pinPot);   // lendo e armazenando o valor do potenciometro
  Serial.println(valorPot);

  digitalWrite(pinLED, HIGH); // ligando o LED
  delay(valorPot); // valor do potenciometro em milessegundos
  digitalWrite(pinLED, LOW); // desliga o LED
  delay(valorPot); 

}
