#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/**
* 9. La presion, el volumen y la temperatura de una masa de aire se relaciona por la formula
masa = (presion*volumen)/(0.37 * (temperatura + 460))
*/

float presion, volumen, temperatura, masa;

int main(){
	system("color 06");
	
	cout << "Ingrese la presión del aire en atm: ";
	cin >> presion;
	cout << "Ingrese el volumen en lts: ";
	cin >> volumen;
	cout << "Ingrese la temperatura en °K: ";
	cin >> temperatura;
	
	masa = (presion*volumen)/(0.37 * (temperatura + 460));
	
	cout << "\nLa masa de aire es de: " << masa << " kg" << ends;
	
	return 0;
}
