/**
 * 2. Dadas las longitudes de los lados de un triangulo isosceles,
 imprimir en pantalla su area y el valor de sus angulos.
 */
#include <iostream>
#include <cmath>
using namespace std;

// En geometria, un triangulo isosceles es un tipo de triangulo que tiene dos lados de igual longitud
const double pi = 3.14169;
double lados, base, alfa_angle, beta_angle;

double area_triangulo(double base, double lados){
	double area, altura;
	// Calculo la altura usando el teorema de pitagoras
	altura = pow( ( pow(lados,2) - pow((base/2),2) ), 0.5 );
	// Calculo el area = (base*altura) / 2, como son dos, omito la division
	area = (base/2)*altura;
	return area;
}

void recibirDatos(){
	cout << "Ingrese los lados iguales del triangulo isosceles: ";
	cin >> lados;
	
	cout << "Ingrese la base del triangulo isosceles: ";
	cin >> base;
}

int main(){
	recibirDatos();
	while (lados <= (base/2)){
		cout << "Error, verifique los valores ingresados" << endl << endl;
		recibirDatos();
	}

	// Los angulos son dados en radianes
	alfa_angle = acos((base/2)/lados);
	//Convierto radianes a grados
	alfa_angle = alfa_angle*(180/pi);
	
	beta_angle = 180 - (alfa_angle * 2);

    cout << "El área del triangulo isosceles es: " << area_triangulo(base, lados) << endl;
	cout << "El angulo superior del triangulo isosceles es: " << beta_angle << endl;
	cout << "Los angulos inferiores son: " << alfa_angle << endl;

    cin.get();
    return 0;
}
 
