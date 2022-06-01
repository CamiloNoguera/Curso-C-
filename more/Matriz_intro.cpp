#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int fil = 3, col = 3;
	int const TAM = 20;
	float matriz[TAM][TAM];
	
	for(int i=0; i<fil; i++){
		for(int j=0; j<col; j++){
			cout << "Ingrese el valor en la posicion " << i+1 << ", " << j+1 << ": "; cin >> matriz[i][j];
		}
	}
	
	cout << "\nMatriz:\n\n";
	
	for(int i=0; i<fil; i++){
		cout << "|";
		for(int j=0; j<col; j++){
			cout << " " << matriz[i][j] << " ";
		}
		cout << "|" << endl;
	}
	
	cout << "\nMatriz transpuesta:\n\n";
	
	//Matriz transpuesta
	for(int i=0; i<fil; i++){
		cout << "|";
		for(int j=0; j<col; j++){
			cout << " " << matriz[j][i] << " ";
		}
		cout << "|" << endl;
	}
	
	
	
	getch();
	return 0;	
}
