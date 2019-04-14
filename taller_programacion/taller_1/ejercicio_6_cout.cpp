#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

/**
* 6. Realizar un algoritmo que calcule la edad de una persona
*/
int anioNacimiento = 0;

int main(int argc, char *argv[]) {
	system("color 03");
	
	/* Tomo la hora del Computador, mediante la clase time */
	time_t theTime = time(NULL);
	struct tm *mTime = localtime(&theTime);
	
	int anioActual = mTime->tm_year + 1900; // Años desde 1900
	
	cout << "\nIngrese el año de nacimiento: ";
	cin >> anioNacimiento;
	
	cout << "\nUsted tiene " << (anioActual-anioNacimiento)  << " años.";
	
	return 0;
}

