/* 11. Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo
y escriba en la salida estandar su hipotenusa*/

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
	
	//inicializamos las variables
	float cateto_a, cateto_a_cuadrado = 0, cateto_b, cateto_b_cuadrado = 0, hipotenusa = 0, hipotenusa_cuadrado = 0, suma_catetos_cuadrados = 0;
	
	//Pedimos los valores de los catetos
	cout<< "Digite el valor del cateto a: "; cin>> cateto_a;
	cout<< "Digite el valor del cateto b: "; cin>> cateto_b;
	
	//Elevamos los catetos al cuadrado
	cateto_a_cuadrado = pow(cateto_a, 2);
	cateto_b_cuadrado = pow(cateto_b, 2);
	
	suma_catetos_cuadrados = cateto_a_cuadrado + cateto_b_cuadrado;
	hipotenusa_cuadrado = suma_catetos_cuadrados;
	
	hipotenusa = sqrt(hipotenusa_cuadrado);
	
	//Imprimimos el valor de la hipotenusa formateado a 2 decimales
	cout<< "\nEl valor de la hipotenusa es: "<< fixed << setprecision(2) << hipotenusa << endl;
		
	return 0;
}
