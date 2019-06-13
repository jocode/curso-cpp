#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

/**
7. Calcular el promedio de edades de hombres, mujeres y de todo un grupo de alumnos.
*/
int main(int argc, char *argv[]) {
	system("color 30");
	
	int alumnos, hombres=0, mujeres=0;
	char genero[5];
	float edades_hombres = 0, edades_mujeres = 0, edad, edades_total = 0;
	
	cout << "Ingrese la cantidad de alumnos: ";
	cin >>  alumnos;
	
	int i = 1;
	do {
		cout << "\nEscriba el género del alumno " << i;
		cout << "\nMasculino = 'm'\nFemenino = 'f'\n: ";
		cin >> genero;
		cout << "Ingrese la edad del alumno: ";
		cin >> edad;
		
		edades_total += edad;
		if (strcmp(genero, "m") == 0){
			hombres++;
			edades_hombres += edad;
		} else if (strcmp(genero, "f") == 0){
			mujeres++;
			edades_mujeres += edad;
		}
		
		i++;
	} while(i <= alumnos);
	
	cout << "\nEl promedio de edades de los hombres es de: " << (edades_hombres/hombres);
	cout << "\nEl promedio de edades de las mujeres es de: " << (edades_mujeres/mujeres);
	cout << "\nEl promedio de edades del grupo es de: " << (edades_total/alumnos);
	
	return 0;
}

