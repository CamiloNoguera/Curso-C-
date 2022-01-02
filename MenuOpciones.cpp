/* 24. Hacer un menú que considere las siguientes opciones:
	1. Cubo de un numero
	2. Numero par o impar
	3. Salir
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float numero, numero_elevado = 0;
	int opc, par_impar;
	
	cout<<"\tQue desea hacer hoy"<<endl;
	cout<<"\n1. Cubo de un numero";
	cout<<"\n2. Numero par o impar";
	cout<<"\n3. Salir"<<endl;
	
	cout<<"\nOpcion 1, 2 o 3: "; cin>>opc;
	
	if(opc == 1 || opc == 2 || opc == 3){
			switch(opc){
				case 1:
					cout<<"\nDigite un numero: "; cin>>numero;
					numero_elevado = pow(numero,3);
					cout<<"El cubo es: "<<numero_elevado;
					break;
				case 2:
					cout<<"Por favor digite un numero entero diferente de 0: "; cin>>par_impar;	
					if(par_impar == 0){
						cout<<"Su numero es 0"<<endl;
					}
					else if(par_impar%2 == 0){
						cout<<"Su numero es par"<<endl;
					}
					else{
						cout<<"Su numero es impar"<<endl;
					}
					break;
				case 3:
					break;					
			}			
	}
	else{
		cout<<"Opcion NO valida";
	}
	
	return 0;
}
