/*
Escriba un programa para calcular cuántas cajas cuadradas pueden contenerse en una sola capa en un estante rectangular, sin voladizo. 
Las dimensiones del estante en pies y la dimensión de un lado de la caja en pulgadas se leen desde el teclado. 
Use variables de tipo double para la longitud y profundidad del estante y
escriba int para la longitud del lado de un recuadro. 
Defina e inicialice una constante entera para convertir de pies a pulgadas. 
Calcule el número de cajas que puede contener el estante en una sola capa y escriba el resultado.
*/
#include <iostream>
using namespace std;

int main(){

    // 1 pie = 12 pulgadas
    const int pulgadas_por_pies = 12; 
    double longitud;
    double profundidad;
    double tamanio;

    cout << "Ingrese la longitud del estanque, en pies: ";
    cin >> longitud;
    cout << "Ingrese la profundidad del estanque, en pies: ";
    cin >> profundidad;

    cout << "Ingrese el tamanio de la caja en pulgadas ";
    cin >> tamanio;
    
    long cajas = static_cast<long>((longitud*pulgadas_por_pies)/tamanio)*
                    static_cast<long>((profundidad*pulgadas_por_pies)/tamanio);

    cout << "El numero de cajas que puede contener es: " << cajas << endl;

    cin.get();
    return 0;
}
