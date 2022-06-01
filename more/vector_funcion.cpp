#include <iostream>
#include <conio.h>

using namespace std;

void entrarDatos(float arreglo[], int n);
void mostrarDatosInv(float aimprimir[], int n);
const int TAM = 20;

int main(){
	int datos;
	float vector[TAM];
	cout << "Digite el numero de datos que va a tener el vector: (maximo " << TAM << "): "; cin >> datos;
	entrarDatos(vector, datos);
	cout << "\n";
	mostrarDatosInv(vector, datos);
	cout << "\n";
	
	
	getch();
	return 0;
}

void entrarDatos(float arreglo[], int n){
	float valor;
	for (int i = 0; i < n; i++){
		cout << "Entre el valor de la posicion " << i+1 << " del vector: "; cin >> arreglo[i];
	}
	
}

void mostrarDatosInv(float aimprimir[], int n){
	for(int i = n-1; i >= 0; i--){
		cout << "El elemento " << i+1 << " del vctor es: " << aimprimir[i] << "\n";
	}
	
}
