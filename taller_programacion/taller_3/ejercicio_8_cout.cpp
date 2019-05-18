#include <iostream>
#include <stdlib.h>
using namespace std;

/**
8. Horóscopo
*/

int main(int argc, char *argv[]) {
	int dia, mes;
	
	cout << "Ingrese el Número del mes de Nacimiento\n(Enero inicia en 1): ";
	cin >> mes;
	cout << "Ingrese el día de Nacimiento: ";
	cin >> dia;
	cout << endl;
	
	if (( (mes == 3 && dia>= 21) || (mes ==4 && dia <=20) ) ){
		cout << "Usted es Aries";
	} 
	else if ((mes == 4 && dia >= 21) || ( mes==5 && dia <=21) ){
		cout << "Usted es Tauro";
	}
	else if ((mes == 5 && dia >= 22) || (mes == 6 && dia <=21) ){
		cout << "Usted es Geminis";
	} 
	else if ((mes == 6 && dia >= 21) || (mes==7 && dia <=23) ){
		cout << "Usted es Cáncer";
	}
	else if ((mes == 7 && dia >= 24) || (mes == 8 && dia <=23) ){
		cout << "Usted es Leo";
	}
	else if ((mes == 8 && dia >= 24) || (mes == 9 && dia <=23) ){
		cout << "Usted es Virgo";
	}
	else if ((mes == 9 && dia >= 24) || (mes == 10 && dia <=23) ){
		cout << "Usted es Libra";
	}
	else if ((mes == 10 && dia>= 24) || (mes == 11 && dia <=22) ){
		cout << "Usted es Escorpio";
	}
	else if ((mes == 11 && dia>= 23) || (mes == 12 && dia <=21) ){
		cout << "Usted es Sagitario";
	}
	else if ((mes == 12 && dia>= 22) || (mes == 1 && dia <=20) ){
		cout << "Usted es Capricornio";
	}
	else if ((mes == 1 && dia>= 21) || (mes == 2 && dia <=19) ){
		cout << "Usted es Acuario";
	}
	else if ((mes == 2 && dia>= 20) || (mes == 3 && dia <=20) ){
		cout << "Usted es Picis";
	} else {
		cout << "Digite bien la Fecha.";
	}
	
	return 0;
}

