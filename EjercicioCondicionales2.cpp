/* 15. Escriba un programa que lea tres numeros y determine cual de ellos es el mayor*/

#include<iostream>
using namespace std;

int main(){
	
	float num1, num2, num3;
	
	cout<<"Digite tres numeros separados por espacios: "; cin>>num1>>num2>>num3;
	
	if(num1 == num2 && num1 == num3){
		cout<<"Los numeros son iguales";
	}
	else if(num1 > num2 && num1 > num3){
		cout<<"El numero mayor es: "<<num1;
	}
	else if(num2 > num1 && num2 > num3){
		cout<<"El numero mayor es: "<<num2;
	}
	else{
		cout<<"El numero mayor es: "<<num3;
	}
	
	return 0;
}
