#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
8. Simular el comportamiento de un reloj digital, imprimiendo la hora, minutos y segundos de un dia
desde las 0:00:00 horas hasta las 23:59:59 horas
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	for (int hora = 0; hora <= 23; hora++){
		for (int minutos = 0; minutos < 60; minutos++){
			for (int segundos = 0; segundos < 60; segundos++){
				printf("%d:%d:%d\n", hora, minutos, segundos);
			}
		}
	}
	
	return 0;
}

