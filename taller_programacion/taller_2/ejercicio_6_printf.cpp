#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
6. Una persona enferma que pesa 70kg, se encuentra en reposo y desea saber cuántas calorías consume
su cuerpo durante todo el tiempo que realiza una misma actividad. Las actividades que tiene permitido
realizar son únicamente dormir o estar sentado en reposo.
Los datos que tiene son, que estando dormido consume 1.08 calorias por minuto y
estando sentado en reposo consume 1.66 calorias por minuto
*/

int main(int argc, char *argv[]) {
	system("color 30");
	float calorias_dormido = 1.08, calorias_sentado = 1.66; // Por minuto
	float minutos = 0, calorias_consumidas = 0;
	int opcion = 0;
	
	printf("¿Qué actividad estaba realizando?");
	printf("\n1. Dormir\n2. Estar sentado en reposo\n: ");
	scanf("%i", &opcion);
	
	printf("¿Cuánto tiempo en minutos realizó en esa actividad?: ");
	scanf("%f", &minutos);
	
	if (opcion == 1){ // Dormido
		calorias_consumidas = minutos * calorias_dormido;
	} else if (opcion == 2){ // Sentado en reposo
		calorias_consumidas = minutos * calorias_sentado;
	}
	
	printf("\nEl cuerpo ha consumido %.2f calorías realizando esta actividad", calorias_consumidas);
	
	return 0;
}

