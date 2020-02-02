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
	Persona(string, int); // Constructor
	void leer();
	void correr();
};


// Implementación del constructor. Sirve para inicializar los atributos de la clase
Persona::Persona(string _nombre, int _edad){
	edad  = _edad;
	nombre = _nombre;
}


void Persona::leer(){
	cout << "Estoy leyendo los hábitos de la gente altamente efectiva (" << nombre << ")" << endl;	
}

void Persona::correr(){
	cout << "Soy " << nombre << " y tengo " << edad << " años." << endl; 
}


int main(){
	Persona juan = Persona("Juan Perez", 22);
	juan.leer();
	
	Persona maria = Persona("Maria", 12);
	maria.correr();
	
	system("pause");
	return 0;
}
