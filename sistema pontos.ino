/*
codigo pertencente a golfins studios
autor: jabutirsom64
objetivo: contar pontos de uma cesta de basquetebol
bibliotecas: arduino.cc e adafruit industries
linguagem: arduino c/c++
*/
//biblotecas
#include <Adafruit_LEDBackpack.h>
#include <Wire.h>
//configuração do display 
Adafruit_7segment cestaDP = Adafruit_7segment();
//variaveis de pontos
int pontos =0;
//pino do sensor
#define sens A0
//pino do buzer
#define buzer 9
void setup()
{
//incia o display
cestaDP.begin();
//define o pino do buzer como saida
pinMode(buzer,OUTPUT);
}
void loop()
{
noTone(buzer);
/*
se a leitura do sensor for 
abaixo de 250,somar mais 2 na variavel pontos e aciona o buzer
*/
if(analogRead(sens) <= 250)
{
pontos += 2;
tone(buzer,500);
delay(100);
}
//imprime os pontos no display
cestaDP.println(pontos);
cestaDP.writeDisplay();
}