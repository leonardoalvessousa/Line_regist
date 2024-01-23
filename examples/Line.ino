 /*
 * Autor: Leonardo Alves
 * Nome da biblioteca: Line.h
 * Data: 2023-06-19
 * Utilidade: Otimização e simplificação na programação de sensores   
 * infravermelho ou mais conhecidos como seguidores de linha. 
 */
#include <Arduino.h>
#include <Line.h>
line sensor1(0); //habilita o caminho direto a porta A0 como entrada e digital
//line sensor2(1); //habilita o caminho direto a porta A1 como entrada e digital
//line sensor3(2); //habilita o caminho direto a porta A2 como entrada e digital
//line sensor4(3); //habilita o caminho direto a porta A3 como entrada e digital
/*Tarefa inicial*/
void setup() {
 Serial.begin(9600); //inicializa o monitor serial
}
/*Tarefa principal*/
void loop() {
 Serial.print("Leitura: ");
 Serial.println(sensor1.read()); //imprime o valor do sensor declarado
 //Serial.println(sensor2.read());
 //Serial.println(sensor3.read());
 //Serial.println(sensor4.read());
}
