/**
 3. Dada la altura y el per√≠metro de la la zona circular de un cilindro imprimir en pantalla su volumen.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const double pi = 3.14169;
    double altura, perimetro, volumen;

    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    cout << "Ingrese el perÌmetro del cilindro: ";
    cin >> perimetro;

    // Calculo el radio del circulo (perimetro = 2*pi*radio)
    double radio = perimetro/(2*pi);

    // Calculo el area de la circunferencia (area = pi*radio^2)
    double area = pi * pow(radio, 2);

    volumen = area*altura;

    cout << "El cilindro tiene un volumen de " << volumen;

    cin.get();
    return 0;
}
