/**
* Escriba un programa en c++, usando funciones, que solicite al usuario que ingrese una fecha y calcule el día correspondiente del año. 
  Ejemplo, si se ingresa la fecha 31 12 1998, el número que se visualizará será 365.
*/

#include <iostream>
using namespace std;
int diasMeses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int calcularDiaAnio(int dia, int mes, int anio);

int main() {
	int dia, mes, anio;
	cout << "Calcular el día del año, dada una fecha. \n\n";
	cout << "Ingrese el día del mes (Numero): ";
	cin >> dia;
	cout << "Ingrese el mes del año (Numero): ";
	cin >> mes;
	cout << "Ingrese el año: ";
	cin >> anio;
	cout << endl;
	
	if (anio%4==0)
		diasMeses[1] = 29;
	
	if (mes < 13)
		if (diasMeses[mes-1] > dia)
			cout << "El día del año es: " <<  calcularDiaAnio(dia, mes-1, anio);
		else 
			cout << "No existe ese día para el mes." << mes;
	else 
		cout << "NO existe ese mes.";
	
	return 0;
}

int calcularDiaAnio(int dia, int mes, int anio){
	int dias = 0;
	
	for (int i = 0; i < mes; i++){
		dias += diasMeses[i];
	}
	return dias + dia;
}

