# Conceptos básicos de Programación Orientada a Objetos (POO)

- **Clase**

Es una _abstracción_ que hacemos de nuestra experiencia sensible. El ser humano tiende a agrupar seres o cosas -objetos- con características similares en grupos -clases-.

- **Objeto**

Es un conjunto de *atributos* y *métodos*, un objeto se deriva de una clase.

- **Abstracción**

Es un proceso mental de extracción de las características esenciales de alfo ignorando los detalles superflúos.

- **Encapsulación**

Proceso por el que se ocultan los detalles del soporte de las características de una abstracción.

- **Herencia**

Es donde una clase nueva se crea a partir de una clase ya existente, heredando todos sus atributos y métodos.

> Todas las clases deben ser en singular.

- **Polimofismo**

Es aquella cualidad que poseen los objetos para responder del mismo modo ante el mismo mensaje.

El método constructor inicializa los atributos de la clase y tienen el mismo nombre de la clase. 

Los *__::__* se puede leer como pertenece, se le conoce como _**operador de resolución de alcance**_

```cpp
// Clases en C++
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Persona {
	
// Atributos
private:
	string nombre;
	int edad;
	
	
// Métodos
public:
	Persona(int, string); // Constructor
	void leer();
	void correr();
};


// Implementación del constructor. Sirve para inicializar los atributos de la clase
Persona::Persona(int _edad, string _nombre){
	edad  = _edad;
	nombre = _nombre;
}


void Persona::leer(){
	cout << "Estoy leyendo los hábitos de la gente altamente efectiva (" << nombre << ")";	
}

void Persona::correr(){
	cout << "Soy " << nombre << " y tengo " << edad; 
}

int main(){
	system("pause");
	return 0;
}
```


:star2: Dentro de **header** se inluyen los prototipos de todas la funciones y atributos de la clases. En el archivo **`.cpp`** se escribe el código fuente. :sunny:

Incluir las bibliotecas necesarias en el código fuente como:

```cpp
#include <iostream>
using namespace std;
```