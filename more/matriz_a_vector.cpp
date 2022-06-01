/* Haciendo uso de funciones cree una matriz numerica entera y pase, lleve o copie los datos de la matriz a un vector. Imprima la matriz y el vector.
El programa debe quedar similar al que se muestra a continuación:

Inicio
	Llamada a la funcion que entra una matriz.
	Llamada a la funcion que pasa elementos a un vector.
	Llamada a la funcion que imprime una matriz.
	Llamada a la funcion que imprime un vector.
Fin */

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void ingresarMatriz(float m[][10],int fila, int col);
void mostrarmatriz(float m[][10],int fila, int col);
void matrizVector(float m[][10],int fila, int col, float v[]);
void mostrarVector(float v[], int fila, int col);

int main(){
	
int filas, column;
const int Nfilas = 10;
const int Ncol = 10;
const int Nelement = 100;
float mat[Nfilas][Ncol];
float vec[Nelement];

cout << "Ingrese el numero de filas, maximo 10: ";
cin >> filas;
cout << "Ingrese el numero de columnas, maximo 10: ";
cin >> column;
ingresarMatriz (mat, filas, column);

cout<< "\nimprimir datos de la matriz: " << endl;
mostrarmatriz(mat, filas, column);

matrizVector(mat, filas, column, vec);
cout << "\nImprimir vector: " << endl;
mostrarVector(vec, filas, column);

getch();
return 0;
}

void ingresarMatriz(float m[][10],int fila, int col){
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<col; j++){
			cout<<"ingresa el valor de la posicion ["<<i+1<<"] ["<<j+1<<"]: ";
			cin>>m[i][j];
		}
	}
}

void mostrarmatriz(float m[][10],int fila, int col){
	
	for(int i=0; i<fila; i++){
		cout << "|";
		for(int j=0; j<col; j++){
			cout<<  setw(3) << m[i][j] << " ";
		}
		cout << setw(3) << "|\n";
	}
}

void matrizVector(float m[][10],int fila, int col, float v[]){
	int h = 0;
	for(int i=0; i<fila; i++){
		for(int j=0; j<col; j++){
			v[h] = m[i][j];
			h++;
		}
	}
}

void mostrarVector(float v[], int fila, int col){
	int lenght = fila * col;
	cout << "[";
	for(int i=0; i<lenght; i++){
		cout << v[i] << (i == lenght - 1 ? "" : ", ");
	}
	cout << "]";
}
