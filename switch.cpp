#include <iostream>

using namespace std;

int main(){
    char c;
    
    cout << "Escribe una letra" << endl;
    cin >> c;
	
	switch (c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':	
			cout << "El una vocal." << endl;
			break;
	default:
		cout << "Es una consonante" << endl;
		break;
	}

    // Evita que se cierre el programa
    system("pause");
    return 0;
}
