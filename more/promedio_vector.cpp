#include <iostream>
#include <conio.h>

using namespace std;

int N;
const int NDATOS = 25;
float Promedio, arreglo[NDATOS];

float LeaYPromedio(float vector[], int n);

int main(){
	cout << "Entre el tamano de arreglo, maximo " << NDATOS << ": "; cin >> N;
	Promedio = LeaYPromedio(arreglo, N);
	
	cout << "\nEl promedio es: " << Promedio << endl;
	
	getch();
	return 0;
}

float LeaYPromedio(float vector[], int n){
	float dato, suma = 0, promedio;
	
	for(int i = 0; i < n; i++){
		cout << "Entre el elemento " << i+1 << " del vector: "; cin >> vector[i];
		suma += vector[i];
		
	}
	promedio = suma/n;
	return promedio;
	
}

