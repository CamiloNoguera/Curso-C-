/*La sentecia Switch

switch(expresion){
	case literal1:
		cojunto de instrucciones1;
		break;
	case literal2:
		cojunto de instrucciones2;
		break;
	case literal3:
		cojunto de instrucciones3;
		break;
	case literaln:
		cojunto de instruccionesn;
		break;
	default:
		cojunto de instrucciones por defecto;
		break;
}*/

#include<iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout<<"Digite un numero entre 1-5: "; cin>>numero;
	
	switch(numero){
		case 1:
			cout<<"Su numero es 1";
			break;
		case 2:
			cout<<"Su numero es 2";
			break;
		case 3:
			cout<<"Su numero es 3";
			break;
		case 4:
			cout<<"Su numero es 4";
			break;
		case 5:
			cout<<"Su numero es 5";
			break;
		default:
			cout<<"Numero no valido";
	}
		
	return 0;
}











