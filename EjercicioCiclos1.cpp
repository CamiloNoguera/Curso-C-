/* 25. Realice un programa que solicite de la entrada estandar un entero del 1 al 10
y muestre en la salida estandar su tabla de multiplicar*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int numero;
	
	do{
		cout<<"Digite un numero entero entre 1-10: "; cin>>numero;
	}while((numero < 1) || (numero > 10));
	
	for(int i=1; i<=20; i++){
		cout<<"\n"<<numero<<" * "<<i<<" = "<<numero*i;
	}
	
	getch();
	return 0;
}
