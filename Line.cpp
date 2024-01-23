/* 
 *Arquivo Line.cpp
 * Autor: Leonardo Alves
 * Nome da biblioteca: Line.h
 * Data: 2023-06-19
 * Utilidade: Otimização e simplificação na programação de sensores   
 * infravermelho ou mais conhecidos como seguidores de linha. 
 */
 
#include "Line.h"
#include "Arduino.h"

line::line(uint8_t pin){
 this-> pin=pin;
}
bool line::read() {
 return PINC & (1 << pin);
}
void line::begin(){
 DDRC &= ~(1 << pin);
}

