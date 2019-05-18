#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
5. Tomando como base los resultados obtenidos en un laboratorio de análisis clínicos, un médico determina si una persona
tiene anemia o no, lo cual depende de su nivel de hemoglobina que en la sangre, de su edad y de su sexo.
Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, se determina su resultado como
positivo y en caso contrario como negativo. La tabla en la que el médico se basa para obtener el resultado es la siguiente:

Edad | Nivel Hemoblobina
-----|------------------
0 - 1 mes | 13 - 25 g%
> 1 y <= 6 meses | 10 -18 g%
> 6 y <= 12 meses | 11 - 16 g%
> 1 y <= 5 años | 11.5 - 15 g%
> 5 y <= 10 años | 12.6 - 15.5 g%
> 10 y <= 15 años | 13 - 15.5 g%
mujeres > 15 años | 12 - 16 g%
hombres > 15 años | 14 - 18 g%

*/
int main(int argc, char *argv[]) {
	
	bool bebe, genero;
	int edad;
	float nivel;
	
	cout << "La persona es menor de 1 año \nSi = 1\nNo = 0\n: ";
	cin >> bebe;
	cout << endl;
	
	if (bebe){
		cout << "Ingrese la los meses del niño(a): ";
		cin >> edad;
		cout << "Ingrese el nivel de Hemoglobina: ";
		cin >> nivel;
		
		if ( (edad >= 0 && edad <= 1) && (nivel >= 13 && nivel <= 26) ){
			cout << "El bebé tiene Anemia";
		} else if  ( (edad > 1 && edad <= 6) && (nivel >= 10 && nivel <= 18) ){
			cout << "El bebé tiene Anemia";
		} else if  ( (edad > 6 && edad <= 12) && (nivel >= 11 && nivel <= 15) ){
			cout << "El bebé tiene Anemia";
		} else {
			cout << "Afortunadamente el Bebé no tiene Anemia";
		}
		
	} else {
		
		cout << "Ingrese la edad de la persona: ";
		cin >> edad;
		cout << "Ingrese el género de la persona\nMasculino = 1\nFemenino = 0\n: ";
		cin >> genero;
		cout << "Ingrese el nivel de Hemoglobina: ";
		cin >> nivel;
		cout << endl;
		
		if  ( (edad > 1 && edad <= 5) && (nivel >= 11.5 && nivel <= 15) ){
			cout << "La persona tiene Anemia";
		}
		else if  ( (edad > 5 && edad <= 10) && (nivel >= 12.6 && nivel <= 15.5) ){
			cout << "La persona tiene Anemia";
		}
		else if  ( (edad > 10 && edad <= 15) && (nivel >= 13 && nivel <= 15.5) ){
			cout << "La persona tiene Anemia";
		}
		else if  ( (edad > 15) && !genero  && (nivel >= 12 && nivel <= 16) ){
			cout << "La Mujer tiene Anemia";
		}
		else if  ( (edad > 15) && genero && (nivel >= 14 && nivel <= 18) ){
			cout << "El Hombre tiene Anemia";
		} else {
			cout << "Afortunadamente la persona no tiene anemia";
		}
		
	}
	
	
	return 0;
}

