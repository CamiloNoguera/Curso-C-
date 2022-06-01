/*Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente, intercambiandolos de posición si están en el orden equivocado.
Es necesario revisar varias veces toda la lista hasta que no se necesiten más intercambios, lo cual significa que la lista está ordenada.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vector[] = {10,7,80,45,41,2,98,7,1,12};
	int i, j, aux;
	
	// Metodo burbuja
	for(i=0; i<10; i++){ // Ordena los datos del vector
		for(j=0; j<10; j++){
			if(vector[j] > vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}					
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
