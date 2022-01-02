/* 18. Escriba un programa que lea de la entrada estandar un caracter 
e indique en lasalida estandar si el caracter es una vocal minuscula o no*/

#include<iostream>
using namespace std;

int main(){
	char letra;
	
	cout<<"Digite una vocal: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Es una vocal en minuscula";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout<<"Es una vocal en mayuscula";break;
		default :
			cout<<"No es una vocal";break;
	}
	
	return 0;
}
