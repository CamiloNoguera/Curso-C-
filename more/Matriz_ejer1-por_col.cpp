/*Elaborar un programa que permita guardar las unidades producidas por cinco maquinas en 30 dias*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int maquina = 5, dia = 30;
	int const TAM = 20;
	float matriz[TAM][TAM];
	
	// Se harán las filas para las maquinas y las columnas para los dias;
	// Llenamos por columnas
	
	for(int j=0; j<4; j++){
		for(int i=0; i<maquina; i++){
			cout << "Ingrese las unidades producidas por la maquina #" << i+1 << " en el dia #" << j+1 << ": "; cin >> matriz[i][j];
		}
	}
	
	cout << "\nMatriz:\n\n";
	
	for(int i=0; i<maquina; i++){
		cout << "Maquina " << i+1 << " |";
		for(int j=0; j<4; j++){
			cout << " " << matriz[i][j] << " ";
		}
		cout << "|" << endl;
	}
	
	cout << "\nDatos por maquinas:\n\n";
	for(int i=0; i<maquina; i++){
		for(int j=0; j<4; j++){
			cout << "Unidades producidas por la maquina [" << i+1 << "] " << "en el dia [" << j+1 << "] es: " << matriz[i][j] << endl;
		}
	}
	
	cout << "\nDatos por dia:\n\n";
	for(int j=0; j<4; j++){
		for(int i=0; i<maquina; i++){
			cout << "Unidades producidas en el dia [" << j+1 << "] " << "por la maquina [" << i+1 << "] es: " << matriz[i][j] << endl;
		}
	}
	
	
	
	getch();
	return 0;	
}
