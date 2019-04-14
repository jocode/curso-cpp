#include <iostream>
#include <string>
using namespace std;

int main(){

    struct Persona {
        string nombre;
        int edad;
        int genero;
        string color;
        //Funcion constructora
        Persona(){
            nombre = "None";
            edad = 0;
            genero = 1;
            color = "No se sabe";
        }

        int sumar(int a, int b){return a+b;}
    };

    Persona carlos;
    cout << carlos.nombre << endl;
    cout << carlos.sumar(12,3) << endl;
    cin.get();

    return 0;
}
