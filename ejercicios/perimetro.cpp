/**
 * 1. Dado el perímetro de una circunferencia imprima en pantalla su área, su diámetro y su radio.
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const double pi = 3.14169;
    double perimetro;
    double area;
    double radio;

    cout << "Ingrese el perimetro de la circunferencia: ";
    cin >> perimetro;

    // Perimetro = 2*pi*radio
    radio = perimetro/(2*pi);

    // Area = pi * radio^2
    area = pi * pow(radio, 2);

    cout << "El area del circulo es: " << area << endl;
    cout << "El radio del circulo es: " << radio << endl;

    cin.get();
    return 0;
}
