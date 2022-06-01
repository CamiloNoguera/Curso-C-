#include <iostream>
#include <conio.h>

using namespace std;

int datos;
float valor;
float vector[20];

int main(){
	cout << "Entre el numero de datos que va a tener el vector maximo 20: "; cin >> datos;
	
	for (int i=0; i < datos; i++){
		cout << "Entre el valor de la posicion " << i+1 << " del vector: "; cin >> valor;
		vector[i] = valor;		
	}
	cout << "\n";
	for(int i = datos-1; i >= 0; i--){
		cout << "El elemento " << i+1 << " del vector es: " << vector[i] << "\n";
	}
	cout << "\n";	
	
	getch();
	return 0;
}
