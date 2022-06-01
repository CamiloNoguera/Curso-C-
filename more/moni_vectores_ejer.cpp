/*Ejercicio propuesto
hacer un programa que reciba el siguiente vector: [10,7,80,45,41,2,98,7,1,12] y:

Ordenar el vector de menor a mayor
Encontrar el menor de los datos
Encontrar el mayor de los datos
Encontrar el promedio
Crear un vector que a los numeros impares les sume 10 y a los numeros pares les sume 20*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vector[] = {10,7,80,45,41,2,98,7,1,12};
	int vector_ext[20];
	int i,j,aux, aux2, sum_aux = 0;
	int menor = vector[0];
	int mayor = vector[0];
	float promedio = 0, sum = 0;
	
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
	
	for(i=0; i<10; i++){
		if(vector[i] > mayor){ // Halla el mayor
			mayor = vector[i];
		}
		if(vector[i] < menor){ // Halla el menor
			menor = vector[i];
		}
		sum += vector[i];
//		cout << "\nLa suma es: " << sum << endl;
		vector_ext[i] = vector[i];
		if(vector_ext[i] % 2 == 0){
				vector_ext[i] += 20;
		}
		else{
			vector_ext[i] += 10;
		}

	}
	promedio = sum/10;
	
	cout << "Orden ascendente" << endl;
	for(i=0; i<10; i++){
		cout << vector[i] << ", ";
	}
	
	cout << "\n\nEl mayor es: " << mayor;
	cout << "\nEl menor es: " << menor;
	cout << "\nEl promedio es: " << promedio;
	
	cout << "\n\nNuevo Vector" << endl;
	for(i=0; i<10; i++){
		cout << vector_ext[i] << ", ";
	}
	
//	cout << "\n\nOrden descendente" << endl;
//	for(i=9; i>=0; i--){
//		cout << vector[i] << ", ";
//	}
	
	getch();
	return 0;
}
