#include <iostream>

using namespace std;
bool comprobador;

int num1, num2, num3, num4;

int main(){
	num1 = 12;
	num2 = 20;
	num3 = 4;
	num4 = 13;

	comprobador = (num4 > num1 && num3 < num2);

	cout << comprobador << endl;
	// Evitamos que se cierre el programa, usando la librería `iostream`
	cin.get();
	return 0;
}	
