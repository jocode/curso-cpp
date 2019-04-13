#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
* 5. Un maestro desea saber qué porcentaje de hombres y mujeres hay en un grupo de estudiantes
*/
int hombres, mujeres;
float per_hombres, per_mujeres, total;

int main(int argc, char *argv[]) {
	system("color a1");
	
	cout << "Ingrese la cantidad de hombres: ";
	cin >> hombres;
	cout << "Ingrese la cantidad de mujeres: ";
	cin >> mujeres;
	
	total = hombres + mujeres;
	
	per_hombres = (hombres*100)/total;
	per_mujeres = (mujeres*100)/total;
	
	cout << "\nEl porcentaje de hombres es de: " << per_hombres << "%" << endl;
	cout << "El porcentaje de mujeres es de: " << per_mujeres << "%";
	
	return 0;
}

