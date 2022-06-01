/*Suma matrices, imprime la matriz con la suma. Tambien, saca el promedio de los elementos de cada matriz e imprime la matriz promedio*/

#include <iostream>
#include<conio.h>
using namespace std;

void ingresarMatriz(float m[][10],int fila, int col);
//void ingresarMatriz2(float m[][10],int fila, int col);
void SumaMatrices(float m1[][10], float m2[][10], float ms[][10], int fila, int col);
void promMatrices(float ms[][10], float mp[][10], int fila, int col);

int main(){
	
int filas, column;
const int Nfilas = 10;
const int Ncol = 10;
float mat[Nfilas][Ncol];
float matdos[Nfilas][Ncol];
float MSuma[Nfilas][Ncol];
float MProm[Nfilas][Ncol];

cout << "Ingrese el numero de filas, maximo 10: ";
cin >> filas;
cout << "Ingrese el numero de columnas, maximo 10: ";
cin >> column;


cout << "\nIngrese los datos a la primera matriz " << "\n";
ingresarMatriz (mat, filas, column);
cout << "\nIngrese los datos a la segunda matriz " << "\n";
ingresarMatriz (matdos, filas, column);
cout << "\nA continuacion se suman las matrices y se muestra la matriz Suma" << endl;
SumaMatrices (mat, matdos, MSuma, filas, column);
cout << "\nA continuacion se promedian las matrices y se muestra la matriz Promedio" << endl;
promMatrices (MSuma, MProm, filas, column);
cout << "\n ";

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
//void ingresarMatriz2(float m[][10],int fila, int col){
//	
//	for(int i=0; i<fila; i++){
//		for(int j=0; j<col; j++){
//			cout<<"ingresa el valor de la posicion ["<<i+1<<"] ["<<j+1<<"]: ";
//			cin>>m[i][j];
//		}
//	}
//}
void SumaMatrices(float m1[][10], float m2[][10], float ms[][10], int fila, int col){
//	int i, j;
	for (int i=0; i<fila; i++){ // Se hace la suma y se muestra la nueva matriz
		for (int j=0; j<col; j++){
			ms[i][j] = m1[i][j] + m2[i][j];
			cout << "Valor posicion " << "[" << i+1 << "] [" << j+1 <<"]: " << ms[i][j] << endl;
		}
	}
}
void promMatrices(float ms[][10], float mp[][10], int fila, int col){ // Se saca el promedio de cada elemento

	for (int i=0; i<fila; i++){ 
		for (int j=0; j<col; j++){
			mp[i][j] = ms[i][j] / 2;
			cout << "Valor posicion " << "[" << i+1 << "] [" << j+1 <<"]: " << mp[i][j] << endl; // Se muestra la matriz con el promedio
		}
	}
}
