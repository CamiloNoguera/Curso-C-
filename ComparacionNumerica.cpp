/* 20. Escribe un programa que lea de la entrada estandar tres numeros.
Despues, debe leer un cuarto numero e indicar si el numero coincide 
con alguno de los introducidos con anterioridad*/

#include<iostream>
using namespace std;

int main(){
	
	float n1, n2, n3, n4;
	
	cout<<"Digite tres numeros separados por espacios: "; cin>>n1>>n2>>n3;
	cout<<"Digite un siguiente numero para comparar: "; cin>>n4;
	
	if(n4 == n1 && n4 == n2 && n4 == n3){
		cout<<"Todos los numeros son iguales";
	}
	else if((n4 == n1 && n4 == n2)||(n4 == n1 && n4 == n3)||(n4 == n2 && n4 == n3)){
		cout<<"El numero coincide con 2 de los numeros anteriores";
	}
	else if((n1==n4)||(n2==n4)||(n3==n4)){
		cout<<"El numero coincide con uno de los numeros anteriores";
	}	
	else{
		cout<<"El numero no coincide con ninguno de los anteriores";
	}
	
	return 0;
}
