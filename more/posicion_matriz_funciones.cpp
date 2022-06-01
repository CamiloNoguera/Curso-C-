/* Hacer un programa que forme una matriz de N elementos. Luego, lea un valor e informe si este se encuentre o no dentro del arreglo.
Si el valo estÃ¡, muestre SI. De lo contrario, muestre NO.*/

#include<iostream>
#include<conio.h>

using namespace std;
void hallarValor(int v[][100], int fil, int col, int val);

int main(){

    int filas, colum, valB;
    const int nfilas = 100;
    const int ncol = 100;
    int mat[nfilas][ncol];

    cout<<"Ingresa el numero de filas: ";
    cin>>filas;
    cout<<"Ingresa el numero de columnas: ";
    cin>>colum;

    for (int i=0; i<filas; i++){
        for(int j=0; j<colum; j++){
            cout<<"ingresa el valor de la posicion ["<<i+1<<"]["<<j+1<<"]: ";
        cin>>mat[i][j];
        }
    }

    cout<<"Ingresa el valor que desees buscar: ";
    cin>>valB;
    hallarValor(mat, filas, colum, valB);


    return 0;
}

void hallarValor(int v[][100], int fil, int col, int val){

    char mensaje = 'S';
    int i=0;
    int j=0;

    while (mensaje == 'S'){
    	for (int i=0; i<fil; i++){
        	for(int j=0; j<col; j++){
            	if(v[i][j]==val){
		            cout<<"El valor está en la posicion ["<<i+1<<"]["<<j+1<<"]"<<endl;
		            cout<<"################"<<endl;
		            cout<<"# MENSAJE = SI #"<<endl;
		            cout<<"################"<<endl;
		            mensaje='N';
		        }
        	}
    	}
		if(mensaje=='S'){
        	cout<<"######################"<<endl;
        	cout<<"# EL VALOR NO EXISTE #"<<endl;
        	cout<<"######################"<<endl;
        	cout<<"MENSAJE: NO";
        	mensaje='N';
    	} 
	}
}
