/**
Dada la longitud de un lado de un triángulo equilátero imprimir en pantalla su área y el valor en radianes y en grados de cada ángulo. 
 */
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265359;

double rad_to_grades(double angulo){
	double angle = angulo*(180/pi);
    return angle;
}

int main(){
    
    double longitud, angulo;
    cout << "Ingrese la longitud del triangulo equilatero: ";
    cin >> longitud;

    angulo = acos((longitud/2)/longitud);

	cout << "Como es un triangulo equilatero, todos sus angulos son iguales." << endl;
    cout << "El angulo del triangulo es: " << angulo << " radianes <=> " << rad_to_grades(angulo) << " grados.";

    cin.get();
    return 0;
}
 
