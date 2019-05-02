#include <iostream>
#include <stdlib.h>
using namespace std;


/**
Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera.
- Si trabaja 40 horas o menos, se le paga $16 por hora.
- Si trabaja más de 40 horas, se le paga %16 por cada una de las primeras 40 horas y $20 por cada hora extra.
*/

int main(int argc, char *argv[]) {
	system("color 03");
	
	float horas = 0, extras = 0, salario;
	
	cout << "Cuántas horas trabajó en la semana: ";
	cin >> horas;
	
	if (horas > 40){
		extras = horas - 40;
		salario = (40*16) + (extras*20);
		cout << "\nSu salario es de " << salario << " por las " << horas << " de trabajo.";
	} else {
		cout << "\nSu salario es de " << (horas*16) << " por las " << horas << " horas de trabajo.";
	}
	
	return 0;
}

