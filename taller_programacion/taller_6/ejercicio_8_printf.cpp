#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
using namespace std;

/**
8. Simular el comportamiento de un reloj digital, imprimiendo la hora, minutos y segundos de un dia
desde las 0:00:00 horas hasta las 23:59:59 horas
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	int hora = 0;
	while (hora <= 23){
		int minutos = 0;
		while (minutos < 60){
			int segundos = 0;
			while (segundos < 60){
				sleep(1);
				system("clear");  /*   UNIX   */
				// system("cls");    /*   DOS   */
				printf("%d:%d:%d\n", hora, minutos, segundos);
				segundos++;
			}
			minutos++;
		}
		hora++;
	}
	
	return 0;
}

