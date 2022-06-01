/* Elaborar un programa en C++ que entre datos a un arreglo numerico unidimensional de N elementos
y que calcule y muestre el promedio de sus elementos. CON FUNCIONES*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int tam_vector;
	float Promedio;
	
	float leer_and_promedio(float vector[], int n);
	
	cout << "Digite el tamaño del vector: "; cin >> tam_vector;
	float arreglo[tam_vector];
	
	Promedio = leer_and_promedio(arreglo, tam_vector);
	cout << "\n\nEl promedio es: " << Promedio;
	
	getch();
	return 0;
}

float leer_and_promedio(float vector[], int n){
	float suma = 0, promedio;
	for(int i = 0; i < n; i++){
		cout << "Entre el elemento #" << i+1 << " del vector: "; cin >> vector[i];
		suma += vector[i];
		
	}
	promedio = suma/n;
	return promedio;
}
