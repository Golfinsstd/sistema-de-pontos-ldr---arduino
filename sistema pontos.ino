/*
codigo pertencente a golfins studios
autor: jabutirsom64
objetivo: contar pontos de uma cesta de basquetebol
bibliotecas: arduino.cc e adafruit industries
linguagem: arduino c/c++
*/
//biblotecas
#include <Adafruit_LEDBackpack.h>
#include <WIre.h>
//configuração do display 
Adafruit_7segment cestaDP = Adafruit_7segment();
//variaveis de pontos
int pontos =0;
//pino do sensor
#define sens A0
void setup()
{
//incia o display
cestaDP.begin();

}
void loop()
{
//se a leitura do sensor for abaixo de 250,somar mais 2 na variavel pontos
if(analogRead(sens) <= 250)
{
pontos += 2;
delay(50);
}
//imprime os pontos no display
cestaDP.println(pontos);
cestaDP.writeDisplay();
}