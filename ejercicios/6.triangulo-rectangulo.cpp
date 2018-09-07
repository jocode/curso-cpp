/**
Dadas las logitudes de los lados (no la hipotenusa) de un triaángulo rectángulo imprimir en pantalla su área y el valor en radianes y en grados de cada uno de sus ángulos 
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
    double a, b, c, area, ang_a, ang_b, ang_c;

    cout << "Ingrese la longitud del lado A (Base): ";
    cin >> a;
    cout << "Ingrese la longitud del lado B: ";
    cin >> b;

    // Hallo la hipotenusa usando el teorema de pitagoras
    c = pow( (pow(a, 2) + pow(b, 2)), 0.5 );

    // Calculo el area
    area = (a*b)/2;
    // Calculo el angulo entre a y c
    ang_a = acos(a/c);
    // Calculo el angulo entre b y c
    ang_b = acos(b/c);

    ang_c = pi - ang_a - ang_b;

    cout << "El area del triangulo es: " << area << endl;
    cout << "El angulo entre A (Base) y C (Hipotenusa) es: " << ang_a << " radianes = " << rad_to_grades(ang_a) << " grados." << endl;
    cout << "El angulo entre B y C (Hipotenusa) es: " << ang_b << " radianes = " << rad_to_grades(ang_b) << " grados." << endl;
    cout << "El angulo entre A y B es: " << ang_c << " radianes = " << rad_to_grades(ang_c) << " grados." << endl;


    cin.get();
    return 0;
}
