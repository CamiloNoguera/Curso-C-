/* 16. Realice un programa que lea un valor entero 
y determine si se trata de un numero par o impar*/

#include<iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout<<"Por favor digite un numero entero diferente de 0: "; cin>>numero;
	
	if(numero == 0){
		cout<<"Su numero es 0"<<endl;
	}
	else if(numero%2 == 0){
		cout<<"Su numero es par"<<endl;
	}
	else{
		cout<<"Su numero es impar"<<endl;
	}
	
	return 0;
}
