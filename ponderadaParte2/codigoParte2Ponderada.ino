//CÓDIGO RETIRADO DO TINKERCAD.

//Variável para identificar a porta do LED.
int portaLED = 13;

void setup()
{
  //Como o LED vai transmitir uma saída de luz, tem que ser configurado como OUTPUT.
  pinMode(portaLED, OUTPUT);
}

void loop()
{
  //Alternando o LED em ligado e desligado.
  digitalWrite(portaLED, HIGH);
  delay(420);
  digitalWrite(portaLED, LOW);
  delay(420);
}