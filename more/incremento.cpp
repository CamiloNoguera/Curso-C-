// Elaborar un programa que muestre los numeros del 1 al 100 de 1 en 1

#include <iostream>
#include <conio.h>

using  namespace std;

int numero, incremento, hasta;

int main(){
	cout << "Digite el numero hasta donde quiere contar: "; cin >> hasta;
	cout << "Digite de cuanto es el incremento: "; cin >> incremento;
	
	while (numero < hasta){
		
		numero += incremento;
		cout << "El numero es: " << numero << "\n";
	}
	
	getch();
	return 0;
}
