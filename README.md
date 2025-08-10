![Alternative Text](https://raw.githubusercontent.com/leonardoalvessousa/Line_regist/refs/heads/main/linebanner.jpg)
[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.15251739.svg)](https://doi.org/10.5281/zenodo.15251739)

> This project aims to use the registers of the ATmega328P microcontroller to configure ports A0 to A6 as digital ports.
> The advantages are using a more sophisticated method in a simple way, replacing the use of `pinMode` and `digitalRead`.

## 🤓 Time for the explanation

#### Prerequisites

* Have the Arduino IDE installed on your machine.
* Know how to install a library in the Arduino IDE.

##### ⚠️ Let's get to it!

###### 🔧 Installing the IDE

Check **[Arduino\_tutorials](https://docs.arduino.cc/software/ide-v1/tutorials/Linux/)** to learn how to install it on LINUX 🐧
And **[Arduino\_tutorials2](https://docs.arduino.cc/software/ide-v1/tutorials/Windows/)** to learn how to install it on WINDOWS 🪟

###### 🔧 Installing a library in the IDE

Check **[Robocore\_tutorials](https://www.robocore.net/tutoriais/adicionando-bibliotecas-na-ide-arduino?srsltid=AfmBOooDxOPaWqBRtoEr5R47h6WfQVaGeBnxnqxxAKhRJVOyjvMJ0e2t)** to learn how to install a library 📘

## 💻 Let's practice!

> With your first project open, include the library 🤓

```
#include <Line.h>
```

> Configure port A0 as digital using the library!

```
#include <Line.h>
line sensor1(0); //enables direct access to port A0 as input and digital
```

> \[!NOTE]
> Notice that if we want to use port A2, just put a "2" inside the parentheses. This works for all other analog ports 🐱‍🚀

> Configuring the serial monitor

```
#include <Arduino.h>
#include <Line.h>
line sensor1(0); //enables direct access to port A0 as input and digital

/*Initial task*/
void setup() 
{
 Serial.begin(9600); //initializes the serial monitor
}
```

> Finally, print the values read on port A0 in the serial monitor 🖥️

```
#include <Arduino.h>
#include <Line.h>
line sensor1(0); //enables direct access to port A0 as input and digital

/*Initial task*/
void setup() 
{
 Serial.begin(9600); //initializes the serial monitor
}

/*Main task*/
void loop() 
{
 Serial.print("Reading: ");
 Serial.println(sensor1.read()); //prints the value from the declared sensor
}
```

> \[!CAUTION]
> If you don’t know what the serial monitor is or how to use it... 😮

###### 🖇️ Check this out!

Check **[Arduino\_tutorials](https://www.arduino.cc/reference/pt/language/functions/communication/serial/)** to learn more about the serial monitor.

## 📌 Version

> v1.0.0.1

## 😼 Author

🐈‍⬛ @leonardoalvessousa

## 😼 Contributors

🐈‍⬛ @Lucas-p00 🐈‍⬛ @joaopedromagalhaes

## 📄 License

> GNU GENERAL PUBLIC LICENSE Version 3

## 🎁 How to show appreciation

* Tell others about this project 📢;
* Invite a team member for a beer 🍺;
* A public thank-you 🫂;
* etc.

---
