#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	system("color ba");
	float tercera, cuarta, num;
	cout << "Digite 10 numeros. " << endl;
	int i = 0;
	
	do {
		i = i+1;
		cin >> num;
		tercera = pow(num, 3);
		cuarta = (tercera * num);
		cout << "Su cubo es " << tercera << endl;
		cout << "Su cuarta es " << cuarta << endl << endl;
	} while(i < 10);
	
	return 0;
}
