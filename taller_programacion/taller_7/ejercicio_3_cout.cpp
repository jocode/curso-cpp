#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int hombres = 0, mujeres = 0, cantidad_alumnos = 0;
	char genero[3];
	
	cout << "¿Cuántos alumnos hay en el curso?: ";
	cin >> cantidad_alumnos;
	
	int i = 1;
	do {
		cout << "\nIngrese el género del " << i << " alumno.";
		cout << "\n 'f' = femenino\n 'm'=masculino\n: ";
		cin >> genero;
		
		if (strcmp(genero, "f")==0){
			mujeres++;
		} else if (strcmp(genero, "m")==0) {
			hombres++;
		}
		
		i++;
	} while(i <= cantidad_alumnos);
	
	cout << "\nHay " << hombres << " hombres";
	cout << "\nHay " << mujeres << " mujeres.";
	
	return 0;
}

