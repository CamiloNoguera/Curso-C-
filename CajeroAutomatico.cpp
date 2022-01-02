/* 23. Hacer un programa que simule un cajero automatico con un saldo inicial de $1.000 dolares*/

#include<iostream>
using namespace std;

int main(){
	
	int saldo_inicial = 1000, opc;
	float extra, nuevo_saldo = 0, retiro;
	
	cout<<"\tBienvenido a su Cajero Virtual"<<endl;
	cout<<"\n1. Meter plata";
	cout<<"\n2. Sacar plata";
	cout<<"\n3. Salir"<<endl;
	
	cout<<"\nOpcion 1, 2 o 3: "; cin>>opc;
	
	if(opc == 1 || opc == 2 || opc == 3){
		switch(opc){
			case 1:
				cout<<"Digite la cantidad de dinero a ingresar: "; cin>>extra;
				nuevo_saldo = saldo_inicial + extra;
				cout<<"Su nuevo saldo es de: USD $"<<nuevo_saldo; break;
			case 2:
				cout<<"Digite la cantidad de dinero a retirar: "; cin>>retiro;
				
				if(retiro < saldo_inicial){
					nuevo_saldo = saldo_inicial - retiro;
					cout<<"Su nuevo saldo es de: USD $"<<nuevo_saldo; break;
				}
				else{
					cout<<"Saldo insuficiente";
				}
			case 3:
				break;			
		}				
	}
	else{
		cout<<"Opcion NO valida";
	}
	
	return 0;
}
