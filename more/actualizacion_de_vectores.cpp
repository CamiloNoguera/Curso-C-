/* Hacer un programa que forme un vector de N elementos. Luego, lea un valor e informe si este se encuentre o no dentro del arreglo.
Si el valo está, muestre SI. De lo contrario, muestre NO.*/
 
#include <iostream>
#include <conio.h>
 
using namespace std;
 
void InsertarDato(float vector[], float v_insert, int *n);
 
int main(){
	int tam_vector, i;
	float valor_insertar;
	const int TAM = 20;
	float arreglo[TAM];
	
	cout << "------------------- @Copyright Camilo Noguera -------------------"; 
	cout << "\n\nDigite el tamano del vector: "; cin >> tam_vector;
	
	cout << "Recuerde que debe entrar los datos del vector ordenados ascendentemente";
	cout << "\n\n";
	
	for(i = 0; i < tam_vector; i++){
		cout << "Entre el elemento #" << i+1 << " del vector: "; cin >> arreglo[i];
	}
	
	cout << "\n";
	cout << "Entre el dato a insertar en el vector ordenado: "; cin >> valor_insertar;
	cout << "\n";
	
	InsertarDato(arreglo, valor_insertar, &tam_vector);
	
	for(i = 0; i <= tam_vector; i++){
		cout << arreglo[i] << " ";
		
	}
 
	getch();
	return 0;
}

void InsertarDato(float vector[], float v_insert, int *n){ // 2 paso por referencia y 1 por valor
	if(vector[*n-1] <= v_insert){ // Si es l mayor de todos
		vector[*n] = v_insert; // Queda en la ultima posicion
		*n ++;
	}
	else { // Si esta dentro de los datos ordenados
		int j = 0;
		while(j < *n){ 
			if(v_insert < vector[j]){ // Encontro el puesto del elemento
				for(int k = *n; k > j; k--){ // Mueve de atras hacia adelante hasta el puesto encontrado
				vector[k] = vector[k-1];
				}
				vector[j] = v_insert; // Coloca el nuevo elemento en su puesto
				*n ++; // Ahora el arreglo tiene un nuevo elemento mas
				j += *n; // Para salir del ciclo while forzado
			} // Termina de mover cuando encuentra uno mayor
			else { // No encontro uno mayor
				j ++;
			}
		}
	}
}
