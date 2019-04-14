/**
 * Dadas las logitudes de los ángulos de un triángulo escaleno, imprimir en pantalla su área y el valor en radianes y en grados de cada uno de sus ángulos.
 * 
 * Un triángulo escaleno es un triángulo en el cual los tres lados tienen longitudes diferentes. 
*/
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265359;

double rad_to_grades(double angulo){
	double angle = angulo*(180/pi);
    return angle;
}

/*
Se calcula el angulo a partir del teorema del coseno
a^2 = b^2 + c^2 - 2bc cosA
*/
double angulo_a(double a, double b, double c){
    double angulo;
    angulo = acos((pow(b,2) + pow(c,2) - pow(a,2))/(2*b*c));
    return angulo;
}
/*
Se calcula el angulo a partir del teorema del coseno
b^2 = a^2 + c^2 - 2ac cosB
*/
double angulo_b(double a, double b, double c){
    double angulo;
    angulo = acos((pow(a,2) + pow(c,2) - pow(b,2))/(2*a*c));
    return angulo;
}

int main(){
    double a, b, c, ang_a, ang_b, ang_c;
    cout << "Ingrese la longitud A del triangulo escaleno: ";
    cin >> a; 
    cout << "Ingrese la longitud B del triangulo escaleno: ";
    cin >> b; 
    cout << "Ingrese la longitud C del triangulo escaleno: ";
    cin >> c; 

    ang_a = angulo_a(a, b, c);
    ang_b = angulo_b(a, b, c);
    ang_c = pi - ang_a - ang_b;

    cout << "El angulo estre B y C es: " << ang_a << " radianes = " << rad_to_grades(ang_a) << " grados." << endl;
    cout << "El angulo estre A y C es: " << ang_b << " radianes = " << rad_to_grades(ang_b) << " grados." << endl;
    cout << "El angulo estre A y B es: " << ang_c << " radianes = " << rad_to_grades(ang_c) << " grados." << endl;
	
    cin.get();
    return 0;
}
