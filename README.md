![Texto Alternativo](https://raw.githubusercontent.com/leonardoalvessousa/Line_regist/refs/heads/main/linebanner.jpg)

>Este projeto pretende utilizar os registradores do microcontrolador atmega328p para configurar as portas de A0 a A6 como portas digitais. As vantagens são utilizar um método mais sofisticado de maneira simples, substituindo o uso de "pinMode" e "digitalRead".


## 🤓 Se liga que é hora da explicação

#### Pré-requisitos
 - Ter a IDE Arduino instalada na sua máquina. 
 - Saber como instalar uma biblioteca na IDE Arduino.
##### ⚠️ Bora resolver? 
###### 🔧 Instalando a IDE

Consulte **[Arduino_tutorials](https://docs.arduino.cc/software/ide-v1/tutorials/Linux/)** para saber como instalar no LINUX 🐧
E **[Arduino_tutorials2](https://docs.arduino.cc/software/ide-v1/tutorials/Windows/)** para saber como instalar no WINDOWS 🪟

###### 🔧 Instalando uma biblioteca na IDE

Consulte **[Robocore_tutorials](https://www.robocore.net/tutoriais/adicionando-bibliotecas-na-ide-arduino?srsltid=AfmBOooDxOPaWqBRtoEr5R47h6WfQVaGeBnxnqxxAKhRJVOyjvMJ0e2t)** para saber como instalar uma biblioteca 📘


## 💻 Partiu prática!

>Com seu primeiro projeto aberto, inclua a biblioteca 🤓 

```
#include <Line.h>
```

>Configure a porta A0 como digital usando a biblioteca!

```
#include <Line.h>
line sensor1(0); //habilita o caminho direto a porta A0 como entrada e digital
```


 > [!NOTE]
> Perceba que se quisermos utilizar a porta A2, basta colocar um "2" dentro dos parênteses. Isso vale para todas as outras portas analógicas 🐱‍🚀


>Configurando o monitor serial 

```
#include <Arduino.h>
#include <Line.h>
line sensor1(0); //habilita o caminho direto a porta A0 como entrada e digital

/*Tarefa inicial*/
void setup() 
{
 Serial.begin(9600); //inicializa o monitor serial
}
```

>Por fim, imprima os valores lidos na porta A0 no monitor serial 🖥️

```
#include <Arduino.h>
#include <Line.h>
line sensor1(0); //habilita o caminho direto a porta A0 como entrada e digital

/*Tarefa inicial*/
void setup() 
{
 Serial.begin(9600); //inicializa o monitor serial
}

/*Tarefa principal*/
void loop() 
{
 Serial.print("Leitura: ");
 Serial.println(sensor1.read()); //imprime o valor do sensor declarado
}
```


> [!CAUTION]
> Se você não sabe o que é o monitor serial ou como usá-lo... 😮

###### 🖇️ Veja isso!

Consulte **[Arduino_tutorials](https://www.arduino.cc/reference/pt/language/functions/communication/serial/)** para saber mais sobre o monitor serial


## 📌 Versão

>v1.0.0.1

## 😼 Autor

 🐈‍⬛ @leonardoalvessousa

## 😼 Colaboradores
  
  🐈‍⬛ @Lucas-p00 🐈‍⬛ @joaopedromagalhaes

## 📄 Licença

   >MIT license

## 🎁 Expressões de gratidão

* Conte a outras pessoas sobre este projeto 📢;
* Convide alguém da equipe para uma cerveja 🍺;
* Um agradecimento publicamente 🫂;
* etc.


---
<div align="center">
    <a href="https://git.io/typing-svg"><img src="https://readme-typing-svg.demolab.com/?font=Roboto+Slab&color=%237E3ACE&size=30&center=true&vCenter=true&width=500&lines=Obrigado+por+ter+lido+tudo+!" alt="Obrigado por ter lido tudo!"></a>
</div>
