#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a, b;
	cout << "Numeros impares";
	cout << "Ingrese el numero inferior: ";
	cin >> a;
	cout << "Ingrese el número superior: ";
	cin >> b;
	
	for (int i = a; i<=b; i++){
		if (i%2 != 0){
			cout << i << endl;
		}
	}
	
	return 0;
}

