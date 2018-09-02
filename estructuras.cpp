#include <iostream>
#include <string>
using namespace std;
int main(){
    struct Personaje {
        int edad;
        int telefono;
		string nombre;
    };
	
	Personaje juan;
	juan.nombre = "Juan Marruecos";
    juan.edad = 100;
    juan.telefono = 3123;

    cout << juan.nombre << endl;

    cin.get();
    return 0;
}
