#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	system("color z1");
	double dolares, conversion, tasa_conversion;
	cout << "\nIngrese la cantidad de dolares USD$: ";
	cin >> dolares;
	cout << "Ingrese la tasa actual en pesos colombianos $ ";
	cin >> tasa_conversion;
	conversion = dolares * tasa_conversion;
	cout << "\nSus dolares en pesos colombianos son: $ " << conversion << ends;
	
	return 0;
}
