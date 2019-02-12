/**
* Escriba un programa en c++, usando funciones, que convierta centímetros a pulgadas y libras a kilogramos.
*/
#include <iostream>
using namespace std;

double cmToInch(double cm){
	const double cmPerInch = 2.54;
	return (1/cmPerInch)*cm;
}

double lbsToKg(double lbs){
	const double lbPerKg = 0.453592;
	return lbPerKg*lbs;
}

int main(){
	double cm, lbs;
	
	cout << "Ingrese la longitud en cm: ";
	cin >> cm;
	cout << "Ingrese la masa en libras: ";
	cin >> lbs;
	
	cout << "\n" << cm << " centimeto(s) equivale a: " << cmToInch(cm) << " pulgadas." << endl;
	cout << "\n" << lbs << " libra(s) equivale a: " << lbsToKg(lbs) << " kilogramos." << endl;
	
	
	return 0;
}
