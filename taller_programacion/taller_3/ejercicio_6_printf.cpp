#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
6. Una institución educativa estableció un programa para estimular a los alumnos con buen rendimieno académico y que consiste en lo siguiente:

- Si el promedio es de 9.5 o más y el alumno es de preparatoria, entonces se este podrá cursar 55 unidades y se le hará un 25% de descuento.
- Si el promedio es mayor o igual a 9 pero menor que 9.5 y el alumno es de preparatoria, entonces este podrá cursar 50 unidades y se
le hará un 10% de descuento
- Si el promedio es mayor que 7 y menor que 9 y el alumno es de preparatoria, este podrá cursar 50 unidades y no tendrá descuento.
- Si el promedio es de 7 o menor, el número de materias reprobadas es de 0 a 3 y el alumno es de preparatoria, entonces podrá cursar
45 unidades y no tendrá descuento.
- Si el promedio es de 7 o menor, el número de materias reprobadas es de 4 o más y el alumno es de preparatoria, entonces podrá cursar
40 unidades y no tendrá ningún descuento.


- Si el promedio es mayor o igual a 9.5 y el alumno es de profesional, entonces podrá cursar 55 unidades y se le hará un descuento
del 20%
- Si el promedio es menor a 9.5 y el alumno es de profesional, entonces podrá cursar 55 unidades y no tendrá descuento.

Obtener el total que tendrá que pagar un alumno si la colegiatura para alumnos de profesional es de $300 por cada 5 unidades y para
alumnos de preparatoria es de $180 por cada 5 unidades
*/

int main(int argc, char *argv[]) {
	int tipo, reprobadas;
	float promedio, total;
	const float preparatoria = (180/5), profesional = (300/5);
	
	printf("A qué tipo pertenece el alumno: \n1 = Preparatoria\n2 = Profesional\n: ");
	scanf("%d",&tipo);
	printf("Ingrese el promedio del Alumno: ");
	scanf("%f",&promedio);
	
	if (tipo == 1){
		if (promedio >= 9.5){
			total = 55 * preparatoria * 0.75;
			printf("Puedes cursar  55 unidades y tiene un descuento del 25%%");
		} else if (promedio >= 9 && promedio < 9.5){
			total = 50 * preparatoria * 0.9;
			printf("Puedes cursar  50 unidades y tiene un descuento del 10%%");
		} else if (promedio > 7 && promedio < 9){
			total = 50 * preparatoria;
			printf("Puedes cursar  50 unidades y NO tiene descuento");
		} else if (promedio <= 7){
			printf("¿Cuantas Materias Reprobó?: ");
			scanf("%d",&reprobadas);
			
			if (reprobadas <= 3){
				total = 45 * preparatoria;
				printf("Puedes cursar  45 unidades y NO tiene descuento");
			} else {
				total = 40 * preparatoria;
				printf("Puedes cursar  40 unidades y NO tiene descuento");
			}
		}
	} else if (tipo == 2){
		if (promedio >= 9.5){
			total = 55 * profesional * 0.80;
			printf("Puedes cursar  55 unidades y tiene un descuento del 20%%");
		} else {
			total = 55 * profesional;
			printf("Puedes cursar  55 unidades y NO tiene descuento.");
		}
	} else {
		printf("Has digitado mal el tipo al que pertenece.");
	}
	
	printf("\nEl alumno tiene que pagar la colegiatura con un valor de $%.2f", total);
	
	return 0;
}

