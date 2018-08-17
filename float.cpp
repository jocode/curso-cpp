#include <iostream>
// Librería que usamos para que el programa no se cierre
#include <conio.h>

using namespace std;

int main(){
	float num = 5.23478;
	float num2 = 1.324;

	cout << num+num2 << endl;
	// Esta función evita que se cierre el programa
	getch();
	return 0;
}
