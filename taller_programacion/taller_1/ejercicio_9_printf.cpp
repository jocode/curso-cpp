#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/**
* 9. La presion, el volumen y la temperatura de una masa de aire se relaciona por la formula
  masa = (presion*volumen)/(0.37 * (temperatura + 460))
*/

float presion, volumen, temperatura, masa;

int main(){
	system("color 06");
	
	printf("\nIngrese la presión del aire en atm: ");
	scanf("%f", &presion);
	printf("\nIngrese el volumen en lts: ");
	scanf("%f", &volumen);
	printf("\nIngrese la temperatura en °K: ");
	scanf("%f", &temperatura);
	
	masa = (presion*volumen)/(0.37 * (temperatura + 460));
	
	printf("/nLa masa de aire es de: %.2f Kg", masa);
	
	return 0;
}
