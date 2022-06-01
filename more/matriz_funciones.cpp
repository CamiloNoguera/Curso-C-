/* Elaborar un programa que lea una matriz de NF filas y NC columnas. Calcule la suma de las filas y columnas, dejando los resultados en dos vectores.
Uno con la suma de las filas y otro con la suma de las columnas e imprima los dos vectores. CON FUNCIONES.*/

#include <iostream>
#include <conio.h>
#include <iomanip> // Libreria para los margenes

using namespace std;

// Declaramos la funciones
void entrarMatrizNca(float matriz[][10], int NFilas, int NColumn);
void mostrarMatriz(float matriz[][10], int NFilas, int NColumn);
void sumaFilas(float matriz[][10], int NFilas, int NColumn, float SFila[]);
void sumaColumnas(float matriz[][10], int NFilas, int NColumn, float SColum[]);
void mostrarVector(float vector[], int NeElement);

int main(){
	
	// Declaramos las variables
	int filas, colum;
	int const NFILAS = 10;
	int const NCOL = 10;
	float datos[NFILAS][NCOL];
	float fila[NFILAS], columna[NCOL];
	
	cout << "Digite la cantidad de filas, max " << NFILAS << ": "; cin >> filas;
	cout << "Digite la cantidad de columnas, max " << NCOL << ": "; cin >> colum;
	
	entrarMatrizNca(datos, filas, colum); // Llamamos la funcion que llena la matriz
	
	cout << "\nLa matriz es: " << endl;
	mostrarMatriz(datos, filas, colum); // Llamamos la funcion que muestra la matriz
	
	sumaFilas(datos, filas, colum, fila); // Llamamos la funcion que suma las filas de la matriz
	sumaColumnas(datos, filas, colum, columna); // Llamamos la funcion que suma las columnas de la matriz
	
	cout << "\nEl vector con la suma de las filas es:" << endl;
	mostrarVector(fila,filas); // Llamamos las funcion que muestra el vector con la suma de las filas
	
	cout << "\nEl vector con la suma de las columnas es:" << endl;
	mostrarVector(columna,colum);  // Llamamos las funcion que muestra el vector con la suma de las columnas
	
	getch();
	return 0;
}

// Definimos la funcion que llena la matriz
void entrarMatrizNca(float matriz[][10], int NFilas, int NColumn){
	for(int i=0; i<NFilas; i++){
		for(int j=0; j<NColumn; j++){
			cout << "Digite el valor " << i+1 << "," << j+1 << ": "; cin >> matriz[i][j];
		}
	}
}

// Definimos la funcion que muestra la matriz
void mostrarMatriz(float matriz[][10], int NFilas, int NColumn){
	for(int i=0; i<NFilas; i++){
		cout << "|";
		for(int j=0; j<NColumn; j++){
			cout << setw(3) << matriz[i][j] << " ";
		}
		cout << setw(3) << "|\n";
	}
}

// Definimos la funcion que suma las filas de la matriz
void sumaFilas(float matriz[][10], int NFilas, int NColumn, float SFila[]){
	float suma = 0;
	for(int i=0; i<NFilas; i++){
		for(int j=0; j<NColumn; j++){
			suma += matriz[i][j];
		}
		SFila[i] = suma;
		suma = 0;
	}
}

// Definimos la funcion que suma las columnas de la matriz
void sumaColumnas(float matriz[][10], int NFilas, int NColumn, float SColum[]){
	float suma = 0;
	for(int j=0; j<NColumn; j++){
		for(int i=0; i<NFilas; i++){
			suma += matriz[i][j];
		}
		SColum[j] += suma;
		suma =0;
	}
}

// Definimos las funcion que muestra el vector
void mostrarVector(float vector[], int NeElement){
	cout << "[";
	for(int i=0; i<NeElement; i++){
		cout << vector[i] << (i == NeElement - 1 ? "" : ", ");		
	}
	cout << "]" << endl;
}




