#include <iostream>
using namespace std;

/**
* 2. Calcular la utilidad que un trabajador recibe en el reparto anual de utilidades si este se le
asigna como un porcentaje de su salario mensual que depende de su antiguedad en la empresa.
- Tiempo 						- Utilidad
Menos de 1 año 					5% del salario
1 año o mas y menos de 2 años   7% del salario
2 años  o más y menos de 5 años 10% del salario
5 años o mas y menos de 10 años 15% del salario
10 años o mas 					20% del salario
*/

int main(int argc, char *argv[]) {
	
	float salario, anio, utilidad;
	
	printf("Hola, ingrese su salario: ");
	scanf("%f", &salario);
	
	printf("\nIngrese el tiempo que lleva en la empresa: ");
	scanf("%f", &anio);
	
	if (anio < 1){
		utilidad = salario * 0.05;
	}
	if (anio >= 1 && anio < 2 ){
		utilidad = salario * 0.05;
	}
	if (anio >= 2 && anio < 5 ){
		utilidad = salario * 0.1;
	}
	if (anio >= 5 && anio < 10 ){
		utilidad = salario * 0.15;
	}
	if (anio >= 10){
		utilidad = salario * 0.2;
	}
	
	printf("\nLa utilidad que recibe por los %.1f años trabajados es de %.2f", anio, utilidad);
	
	return 0;
}

