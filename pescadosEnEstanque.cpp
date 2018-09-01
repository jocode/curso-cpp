#include <iostream>
#include <cmath>  // Libería de funciones matemáticas

using namespace std;

int main(){

    // Superficie del estanque de 2 pies cuadrados por cada 6 pulgadas de peces
    const double fish_factor {2.0/0.5}; 
    const double  inches_per_foot {12.0}; // Area po unidad de largo del pescado
    const double pi {3.14159265};

    double fish_count {};  // Número de pescados
    double fish_length {}; // Promedio de largo del pescado

    cout << "Ingrese el numero de pescados que quiere guardar";
    cin >> fish_count;
    cout << "Ingrese el promedio de largo del pescado en pulgadas";
    cin >> fish_length;
    fish_length /=inches_per_foot;      // Convertir a pulgadas

    // Calcula la superficie de área requerida
    double pond_area {fish_count * fish_length * fish_factor};
    // Calcule el diámetro del estanque desde el área
    double pond_diameter {2.0 * sqrt(pond_area/pi)};
    cout << "\nEl diametro requrido para " << fish_count << " pescados es "
       << pond_diameter << " pies.\n";

    return 0;
}
