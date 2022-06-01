/* Hacer un programa que forme un vector de N elementos. Luego, lea un valor e informe si este se encuentre o no dentro del arreglo.
Si el valo está, muestre SI. De lo contrario, muestre NO.*/

#include <iostream>
#include <conio.h>

using namespace std;

void buscador(float vector[], int n_elementos, float buscar);

int main(){
	int tam_vector;
	float valor_buscar;
	
	cout << "Digite el tamano del vector: "; cin >> tam_vector;
	float arreglo[tam_vector];
	
	for(int i = 0; i < tam_vector; i++){
		cout << "Entre el elemento #" << i+1 << " del vector: "; cin >> arreglo[i];		
	}
	
	cout << "\nDigite el valor que desea buscar en el vector: "; cin >> valor_buscar;
	buscador(arreglo, tam_vector, valor_buscar);
	
	cout << "\n\n\n------------------- @Copyright Camilo Noguera -------------------";
	
	getch();
	return 0;
}

void buscador(float vector[], int n_elementos, float buscar){
	char mensaje = 'N';
	int j = 0;
	
	while((j < n_elementos) && (mensaje == 'N')){
		if(vector[j] == buscar){
			cout << "\ELEMENTO ENCONTRADO EN LA POSICION " << j+1 << endl;
			mensaje = 'S';
			cout << "Mensaje: SI";
		} else {
			j++;
		}		
	}
	
	if(mensaje == 'N'){
		cout << "\nELEMENTO NO ENCONTRADO!";
		cout << "\nMensaje: NO";			
	}
}
