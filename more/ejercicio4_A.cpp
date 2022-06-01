/* Realizar un programa que imprima un triangulo con base y altura igual.
El valor de la base o la altura es ingresado por el usuario.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	float base, cont = 0;
	string piramide = "*";
	cout << "Digite el valor de la base o altura: "; cin >> base;
	
	while (cont < base){
		cont ++;
		cout << piramide << "\n";
		piramide += "*";
		
	}
	
	getch();
	return 0;
}
