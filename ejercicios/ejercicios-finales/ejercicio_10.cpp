/**
* Escriba un programa en c++, usando funciones, que reciba su día, mes y año de nacimiento y devuelva su edad.
*/
#include <iostream>
#include <time.h>
using namespace std;


int calcularEdad(int dia, int mes, int anio){
	
	time_t theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);
	
	int day = aTime->tm_mday;
	int month = aTime->tm_mon + 1; // Se le agrega 1, porque el mes 12 sería 11 en el sistema
	int year = aTime->tm_year + 1900; // El número de año a partir de 1900
	
	if (mes < month)
		return year - anio;
	else 
		return (year - anio)-1;
	
}

int main() {
	int dia, mes, anio;
	
	cout << "Ingrese su día: ";
	cin >> dia;
	cout << "Ingrese el mes: ";
	cin >> mes;
	cout << "Ingrese el año: ";
	cin >>  anio;
	
	cout << "Su edad es: " << calcularEdad(dia, mes, anio)  << " años.";
	
	return 0;
}

