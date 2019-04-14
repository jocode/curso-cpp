#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
* 12. Todos los lunes, miercoles y viernes, una persona recorre la misma ruta y cronometra los tiempos obtenidos
* Deteminar el tiempo promedio que la persona tarda en recorrer la ruta en una semana cualquiera.
*/

float time_1, time_2, time_3, promedio;

int main(int argc, char *argv[]) {
	system("color F0");
	
	cout << "Hola, se calculará el tiempo promedio en que recorre la ruta.\nEl tiempo debe ser dado en minutos.\n";
	cout << "\nIngrese el tiempo de día Lunes: ";
	cin >> time_1;
	cout << "Ingrese el tiempo de día Miércoles: ";
	cin >> time_2;
	cout << "Ingrese el tiempo de día Viernes: ";
	cin >> time_3;
	
	promedio = (time_1 + time_2 + time_3) / 3;
	
	cout << "\nEl tiempo promedio que tarda en recorrer la ruta es de: " << promedio << " minutos";
	
	return 0;
}

