#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float n, f, g;
	cout << "Lotería Chuchín";
	cout << "\nIngrese uno de los números: ";
	cin >> n;
	cout << "\nIngrese uno de los números: ";
	cin >> f;
	cout << "\nIngrese uno de los números: ";
	cin >> g;
	
	if ( (n<f && n>g) || (n<g && n>f) ){
		cout << "El de la mitad es: " << n;
	}
	
	if ( (f<n && f>g) || (f<g && f>n) ){
		cout << "El de la mitad es: " << f;
	}
	
	if ( (g<n && g>f) || (g<f && g>n) ){
		cout << "El de la mitad es: " << g;
	}
	
	return 0;
	
}

