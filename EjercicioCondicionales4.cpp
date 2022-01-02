/* 17. Comprobar si un numero digitado por el usuario es positivo o negartivo*/

#include<iostream>
using namespace std;

int main(){
	
	float numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero > 0){
		cout<<"Su numero es positivo"<<endl;
	}
	else{
		cout<<"Su numero es negativo"<<endl;
	}
	
	return 0;
}
