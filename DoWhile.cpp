/* La sentenci do while: Primero actua, luego piensa

	do{
		conjunto de instrucciones;
	}while(expresion logica);
	
	*/
	
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int i = 1;
	
	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	
	system("pause"); //presione una tecla para continuar
	return 0;
}
