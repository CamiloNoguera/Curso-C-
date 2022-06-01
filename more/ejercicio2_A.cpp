// Construir un programa que permita leer numeros hasta que se digite 0 y determinar a cuanto es igual el promedio de los numeros leidos.

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	float numero, cont = 0, suma = 0, promedio;
	cout << "Digite un numero (0 para salir): "; cin >> numero;
	
	while (numero != 0){
		suma += numero;
		cont ++;
		cout << "Digite un numero (0 para salir): "; cin >> numero;	
			
	}
	
	promedio = suma / cont;
	cout << "\nEl promedio de los numeros leidos es: " << promedio;
	
	getch();
	return 0;
}
