//Elborar un programa que muestre los primeros N numeros de la serie fibonacci y su suma.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int N, primero = 0, segundo = 1, tercero = 0, suma;
	cout << "Digite la cantidad de numero que desea mostrar: "; cin >> N;
	
	for(int i = 1; i <= N; i++){
		cout << tercero << ", ";
		suma += tercero;
		primero = segundo;
		segundo = tercero;
		tercero = primero + segundo;
		
	}
	cout << "\n\nLa suma es: " << suma;
	
	getch();
	return 0;
}
