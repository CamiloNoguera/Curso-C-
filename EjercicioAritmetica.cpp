/* 1. Escribe un programa que lea de la entrada estandar dos numeros y muestre
en la salida estandar su suma, resta, multiplicacion y division*/

#include<iostream>
using namespace std;

int main(){
	
	float numero1;
	cout<<"BIENVENID@ Con este programa usted podra obtener las operaciones de aritmetica basica entre dos numeros\nDigite su primer numero: ";
	cin>>numero1;
	float numero2;
	cout<<"\nDigite su segundo numero: ";
	cin>>numero2;
		
	cout<<"\nLa suma es: "<<numero1+numero2;
	cout<<"\nLa resta es: "<<numero1-numero2;
	cout<<"\nLa multiplicacion es: "<<numero1*numero2;
	cout<<"\nLa division es: "<<numero1/numero2;
	return 0;
}
