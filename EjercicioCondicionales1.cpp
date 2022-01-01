/* 14. Escriba un programa que lea dos numeros y determine cual de ellos es el mayor*/

#include<iostream>
using namespace std;

int main(){
	
	float num1, num2;
	
	cout<<"Digite dos numeros separados por espacios: "; cin>>num1>>num2;
	
	if(num1 == num2){
		cout<<"Ambos numeros son iguales";
	}
	else if(num1 > num2){
		cout<<"El mayor entre los 2 es: "<<num1;
	}
	else{
		cout<<"El mayor entre los 2 es: "<<num2;
	}
	
	return 0;
}
