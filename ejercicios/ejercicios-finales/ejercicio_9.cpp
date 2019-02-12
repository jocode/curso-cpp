/**
* Escriba un programa en c++, usando funciones, que reciba una lista de hasta 10 números reales y devuelva, su promedio, moda, varianza y desviación estándar.
* https://www.vitutor.com/estadistica/descriptiva/d_11.html (Referencias estadística)
*/
#include <iostream>
#include <cmath>
using namespace std;

double promedio(double numbers[], int size){
	double suma;
	for (int i = 0; i < size; i++){
		suma += numbers[i];
	}
	return (suma/size);
}

double moda(double numbers[], int size){
	int cont = 0, moda = numbers[0], comparar = numbers[0];
	for (int i = 0; i < size; i++){
		
		if (comparar == numbers[i]){
			cont++;
			moda = numbers[i];
		} else {
			comparar = numbers[i];
		}
	}
	if (cont>1)
		return moda;
}

double varianza(double numbers[], int size){
	double varianza = 0;
	double media = promedio(numbers, size);
	double sumaCuadrada=0;
	for (int i = 0; i < size; i++){
		sumaCuadrada += pow(numbers[i], 2);
	}
	varianza = ( (sumaCuadrada/size) - pow(media, 2) );
	return varianza;
}

/**
* La desviacion estándar es la raíz cuadrada de la varianza
*/
double desviacionEstandar(double varianza){
	return ( sqrt(varianza) );
}

int main(){
	
	int size;
	double numbers[10];
	int numero;
	
	cout << "Ingrese la cantidad de números a ingresar: ";
	cin >> size;
	cout << endl;
	
	for (int i = 0; i < size; i++){
		cout << "Ingrese el " << i+1 << " número: ";
		cin >> numero;
		numbers[i] = numero;
	}
	
	double var = varianza(numbers, size);
	cout << "El promedio de los números es: " << promedio(numbers, size) << "\n";
	cout << "La varianza es: " << var  << "\n";
	cout << "La desvación estándar es: " << desviacionEstandar(var);
	moda(numbers, size);
	
	return 0;
}

