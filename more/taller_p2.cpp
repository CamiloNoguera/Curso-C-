#include <iostream>
#include <conio.h>


using namespace std;

float *crearVector(float arreglo[]);
float hallarDiferencia(float arreglo[], int size);

int main(){
	const int TAM = 20;
	float vector[TAM];
	
	float *ptr = crearVector(vector);
	float hallarDiferencia();
	
	cout << "\nLa mayor diferencia es:" <<"la menor diferncia es:" << endl;
		
	getch();
	return 0;
}

float *crearVector(float arreglo[]){
	int tam_vector, i;
	cout << "Digite el tamano del vector: "; cin >> tam_vector;
	
	for(i = 0; i < tam_vector; i++){
		cout << "Entre el elemento #" << i+1 << " del vector: "; cin >> arreglo[i];
	}
	
	return arreglo;
}

float hallarDiferencia(float arreglo[], int size){
	int tam_vector, i;
	cout <<"Digite el tamano del vector: ";  cin >>tam_vector;
	
	
	for(i = 0; i < tam_vector; i++){
		cout << "Entre el elemento #" << i+1 << " del vector: "; cin >> arreglo[i];
	}
	
	return 0;
}


