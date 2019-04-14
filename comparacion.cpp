#include <iostream>
#include <conio.h>

using namespace std;

bool verificar;
int numeroUno = 12;
int numeroDos = 12;

int main(){
	verificar = (numeroUno == numeroDos);
	cout << verificar << endl;
	getch();
	return 0;
}