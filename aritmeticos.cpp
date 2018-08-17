#include <iostream>
#include <conio.h>

using namespace std;

int uno = 11;
int dos = 06;
int suma, resta, multiplicacion, division, modulo;

int main(){
	suma = uno + dos;
	resta = uno - dos;
	multiplicacion = uno * dos;
	division = uno / dos;
	modulo = uno % dos;

	cout << "La suma es: " << suma << endl;
	cout << "La resta es: " << resta << endl;
	cout << "La multiplicacion es: " << multiplicacion << endl;
	cout << "La división es: " << division << endl;
	cout << "El residio de la división es: " << division << endl;
	getch();
	return 0;
}
