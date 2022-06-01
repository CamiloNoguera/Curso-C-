/* Elaborar un programa en C++ utilizando Dev C++ y funciones que encuentre e informe el elemento
mayor en una matriz y su posición.*/

#include<iostream>
#include<conio.h>
using namespace std;

void ingresarMatriz(float m[][10],int fila, int col);
float hallarMayor(float m[][10], int fila, int col, int *f, int *c);
float hallarMenor(float m[][10], int fila, int col, int *f, int *c);
float hallarPromedio(float m[][10], int fila, int col);
int main(){
	
	char option;
	int filas, column, f, c;
	const int Nfilas = 10;
	const int Ncol = 10;
	float mat[Nfilas][Ncol];
	float eMayor, eMenor, prom;
	
	cout<<"Ingrese el numero de filas(maximo 10): ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas(maximo 10): ";
	cin>>column;
	ingresarMatriz(mat,filas,column);
	
	cout<<"Elije que quieres hacer ahora: "<<endl;
	cout<<"1: Hallar elemnto mayor."<<endl;
	cout<<"2: Hallar elemento menor."<<endl;
	cout<<"3: Hallar promedio."<<endl;
	cout<<"4: No hacer nada."<<endl;
	cin>>option;
	
	switch(option){
		
		case '1':
			eMayor = hallarMayor(mat,filas,column,&f,&c);
			cout<<"El elemento mayor de la matriz es ["<<eMayor<<"] y se encuentra en en la posicion ["<<f+1<<"]"<<"["<<c+1<<"]";
		break;
		case '2':
			eMenor = hallarMenor(mat,filas,column,&f,&c);
			cout<<endl;
			cout<<"El elemento menor de la matriz es ["<<eMenor<<"] y se encuentra en la posicion ["<<f+1<<"]"<<"["<<c+1<<"]";
		break;
		case '3':
			prom = hallarPromedio(mat, filas, column);
			cout<<"El promedio de la matriz es: "<<prom<<endl;
		break;
		case '4':
			cout<<"Has elegido no hacer nada. ";
		default:
			cout<<"Opcion incorrecta";
	}
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


float hallarMayor(float m[][10], int fila, int col, int *f, int *c){
	
	int mayor=m[0][0];
	*f = 0;
	*c = 0;
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<col; j++){
			
			if(m[i][j] > mayor){
				
				mayor = m[i][j];
				*f = i;
				*c = j;	
			}
		}
	}
	return mayor;
}

float hallarMenor(float m[][10], int fila, int col, int *f, int *c){
	
	int menor = m[0][0];
	*f = 0;
	*c = 0;
	
	for (int i=0; i<fila; i++){
		for (int j=0; j<col; j++){
			
			if( m[i][j] < menor){
				menor = m[i][j];
				*f = i;
				*c = j;
			}
		}
	}
}
float hallarPromedio(float m[][10], int fila, int col){
	
	float sum=0;
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<col; j++){
			
			sum=sum + m[i][j];
			
		}
		
	}
	
	float prom = sum/(fila+col);
	return prom;
}