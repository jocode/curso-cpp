#include <iostream>
using namespace std;

double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);
int modulo(int a, int b);

int main(){
	double a, b;
	int operacion = 0;
	cout << "Ingrese el primer número (a): ";
	cin >> a;
	cout << "Ingrese el segundo número (b): ";
	cin >> b;
	
	cout << "\n Qué operación deseas realizar: \nSuma: 1 \nResta: 2 \nMultiplicación: 3 \nDivisión: 4 \nMódulo: 5\n";
	cout << "Ingrese la operación\n \n";
	cin >> operacion;
	cout << endl;
	
	switch (operacion){
		case 1:
				cout << "La suma es: " << sumar(a, b);
				break;
		case 2:
			cout << "La resta es: " << restar(a, b);
			break;
		case 3:
			cout << "La multiplicacion es: " << multiplicar(a, b);
				break;
		case 4:
			if (b == 0){
				cout << "No se puede dividir por cero";
				return 0;
			}
			cout << "La división es: " << dividir(a, b);
			break;
		case 5:
			if (b == 0){
				cout << "No se puede dividir por cero";
				return 0;
			}
			cout << "El módulo es: " << modulo(static_cast<int>(a), static_cast<int>(b));
			break;
		default:
			cout << "\nNo has escogido operación correcta.\n";
			break;
		}
		
	return 0;
}

double sumar(double a, double b){
	return a+b;
}

double restar(double a, double b){
	return a-b;
}


double multiplicar(double a, double b){
	return a*b;
}


double dividir(double a, double b){
	return a/b;
}


int modulo(int a, int b){
	return a%b;
}

