#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int gallinas = 0;
	float promedio_calidad = 0, calidad = 0, peso = 0, altura = 0, huevos = 0;
	float precio_kilo;
	
	cout << "Digite la cantidad de gallinas que hay en la granja: ";
	cin >> gallinas;
	
	int i = 1;
	do {
		cout << "\nGallina " << i ;
		cout << "\nIngrese el peso: ";
		cin >> peso;
		cout << "Ingrese la altura: ";
		cin >> altura;
		cout << "Ingrese la cantidad de huevos: ";
		cin >> huevos;
		calidad = (peso * altura) / huevos;
		
		promedio_calidad += calidad;
		
		i++;
	} while(i <= gallinas);
	
	promedio_calidad = (promedio_calidad/gallinas);
	
	if (promedio_calidad >= 15){
		precio_kilo = promedio_calidad*1.2;
	} else if (promedio_calidad > 8 && promedio_calidad < 15){
		precio_kilo = promedio_calidad*1;
	} else if (promedio_calidad <= 8) {
		precio_kilo = promedio_calidad*0.8;
	}
	
	cout << "\nEl precio de venta para cada kilo de huevo es de: $" << precio_kilo;
	
	return 0;
}

