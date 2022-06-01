/*Ordenamiento por seleccion es un algoritmo de ordenamiento que requiere un orden de n^2 para ordenar una lista de n elementos.
Su funcionamiento es el siguiente:
1. Buscar el minimo elemento de la lista.
2. Intercambiar con el primer elemento.
3. Buscar el minimo del resto de la lista.
4 intercambiar con el segundo.
5. Y así sucesivamente.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vector[] = {10,7,80,45,41,2,98,7,1,12};
	int i, j, min, aux;
	
	// Ordenamiento por seleccion
	for(i=0;i<10;i++){
		min = i;
		for(j=0;j<10;j++){
			if(vector[j] < vector[j-1]){
				min = j;
			}
		}
		aux = vector[i];
		vector[i] = vector[min];
		vector[min] = aux;
	}
	
	cout << "Orden ascendente" << endl;
	for(i=0; i<10; i++){
		cout << vector[i] << ", ";
	}
	
	cout << "\n\nOrden descendente" << endl;
	for(i=9; i>=0; i--){
		cout << vector[i] << ", ";
	}
	
	getch();
	return 0;
}
