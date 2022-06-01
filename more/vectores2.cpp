// Entre datos a un arreglo numerico unidimensional de N elementos; y calcule y muestre el promedio de sus elementos.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int N;
	float dato, promedio, suma = 0;
	cout << "Entre el tamaño del arreglo: "; cin >> N;
	float vector[N];
	
	for (int i = 0; i < N; i++){
		cout << "Entre el elemento " << i+1 << " del vector: "; cin >> vector[i];
		suma += vector[i];
	}
	promedio = suma/N;
	cout << "El promedio es: " << promedio << endl;
	
	getch();
	return 0;
}
