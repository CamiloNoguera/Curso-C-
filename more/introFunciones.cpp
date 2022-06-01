#include <iostream>
#include <conio.h>

using namespace std;

//int primero, segundo;
//float total;
float calcular (int a, int b); // Declaracion de la funcion

int main(){
	int primero, segundo;
	float total;
	cout << "Ingrese el primer valor que sea entero: "; cin >> primero;
	cout << "Ingrese el segundo valor que sea entero: "; cin >> segundo;
	total = calcular (primero, segundo);

	cout << "El resultado de sumar " << primero << " y " << segundo << " es: " << total;
	
	getch();
	return 0;
}

float calcular (int a, int b){
	
	float suma;
	suma = a + b;
		
	return suma;
}
