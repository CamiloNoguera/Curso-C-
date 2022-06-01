/*Ordenamiento por inserción es una manera muy natural de ordenar para un ser humano, y puede usarse facilmente para ordenar un mazo de cartas de forma arbitraria.
Requiere un orden de n^2 para ordenar una lista de n elementos.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vector[] = {10,7,80,45,41,2,98,7,1,12};
	int i, pos, aux;
	
	// Ordenamiento por inserción
	for(i=0;i<10;i++){
		pos = i;
		aux = vector[i];
		
		while((pos>0) && (vector[pos-1] > aux)){
			vector[pos] = vector[pos-1];
			pos--;
		}
		vector[pos] = aux;
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
