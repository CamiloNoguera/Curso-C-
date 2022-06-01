// Elaborar un programa que solicite un numero entero e informe si es positivo, negativo o igual a 0

#include <iostream>
#include <conio.h>

using namespace std;

int numero;

int main (){
	cout << "Digite un numero: "; cin >> numero;
	
	if (numero > 0){
		cout << "\nSu numero es positivo";
		
	}
	else if (numero < 0){
		cout << "\nSu numero es negativo";
			
	}	
	else {
		cout << "\nSu numero es 0";
		
	}
	
	getch();
	return 0;
}
