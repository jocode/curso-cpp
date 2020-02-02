/**
Construya una clase llamada Rectangulo que tenga los siguientes atributos
Largo y ancho, y los siguientes métodos: perímetro y área.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;


class Rectangulo {

	// Atributos
private:
	double largo, ancho;
	
	// Public
public:
	Rectangulo(double, double); // Constructor
	void perimetro();
	void area();
	
};


Rectangulo::Rectangulo(double _largo, double _ancho){
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::perimetro(){
	double perimetro;
	
	perimetro = 2*largo+2*ancho;
	
	cout << "El perimetro es: "<< perimetro << endl;
}

void Rectangulo::area(){
	double area;
	area = largo*ancho;
	
	cout << "El área es: " << area << endl;
}

int main(){
	
	// Instanciamos los objetos, es decir los creamos
	Rectangulo rect(10, 8);
	rect.area();
	
	Rectangulo dos = Rectangulo(12, 12);
	rect.perimetro();
	
	system("pause");
	return 0;
}
