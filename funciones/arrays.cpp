/**
Costruya un programa en C++ donde declare un arreglo de tamaño 10 y cree una función
 a la que se le pasa el arreglo y luego esta devuelve los primeros 10 terminos de la serie Fibonacci en el arreglo.

Luego pase este arreglo a una segunda función que devuelva la suma de los elementos contenidos en el arreglo.   
*/

#include <iostream>
using namespace std;

int* serieFibonacci(int serie[], int size);
int suma(int serie[], int size);
void imprimir(int serie[], int size);

int main(){
	
	int serie[10];
	
	// Calculo el tamaño del arreglo
	int size = (sizeof(serie)/sizeof(serie[0]));
	int *a = serieFibonacci(serie, size);
	imprimir(a, size);
	cout << "\n\nLa suma de la serie es: " << suma(a, size);
	return 0;
}

int* serieFibonacci(int serie[], int size){
	int fibonacci = 0, anterior = 0, siguiente = 1;
	for (int i = 0; i < size; i++){
		fibonacci = anterior + siguiente;
		serie[i] = fibonacci;
		anterior = siguiente;
		siguiente = fibonacci;
	}
	return 	serie;
}

int suma(int serie[], int size){
	int result = 0;
	for (int i = 0; i < size; i++){
		result += serie[i];
	}
	return result;
}

void imprimir(int serie[], int size){
	for (int i = 0; i < size; i++){
		cout << serie[i] << ", ";
	}
}
