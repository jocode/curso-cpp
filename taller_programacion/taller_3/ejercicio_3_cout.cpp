#include <iostream>
using namespace std;

/**
3. El IMSS requiere clasificara a las personas que se jubilaron en el año 1997. Existen tres 
tipos de jubilaciones: por edad, por antigudad joven y por antiguedad adulta. 

- Las personas adscritas a la jubilacion por edad deben tener 60 años o más y una antiguedad en su empleo de menos de 25 años.
- Las personas adscritras a la jubilacion por antiguedad joven deben tener menos de 60 años y una antigueadad en su empleo de 25 años o más.
- Las personas adscritas a la jubilación por antiguedad adulta deben tener 60 años o más y una antiguedad
en su empleo de 25 años o más.

Determinar en qué tipo de jubilación quedará adscrita la persona
*/

int main(int argc, char *argv[]) {
	
	float edad, antiguedad;
	
	cout << "Ingrese la edad de la persona: ";
	cin >> edad;
	cout << "Ingrese la antiguedad de la persona en la empresa: ";
	cin >> antiguedad;
	cout << endl;
	
	if (edad >= 60 && antiguedad < 25){
		cout << "La persona queda adscrita a 'Jubilación por edad'";
	} else if (edad < 60 && antiguedad >= 25){
		cout << "La persona queda adscrita a 'Jubilación por antiguedad joven'";
	} else if (edad >= 60 && antiguedad >= 25){
		cout << "La persona queda adscrita a 'Jubilación por antiguedad Adulta'";
	} else {
		cout << "La persona no cumple con lo requisitos para quedar adscrita";
	}
	
	
	return 0;
}

