/*
 * Arquivo Line.h
 * Autor: Leonardo Alves
 * Nome: Line.h
 * Data: 2023-06-19
 * Utilidade: Otimização e simplificação na programação de sensores   
 * infravermelho ou mais conhecidos como seguidores de linha. 
 */
 
#ifndef Line_h
#define Line_h


#include <Arduino.h>
class line {
   private:
   uint8_t pin;
  
   public:
   line(uint8_t pin);
   bool read();
   void begin();
};


#endif
