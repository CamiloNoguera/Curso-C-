/*La sentencia while

	while(expresion logica){
		conjunto de instrucciones;
	}*/

#include<iostream>
#include<conio.h> //para usar getch();
using namespace std;

int main(){
	int i = 1;
	
	while(i<=10){
		cout<<i<<endl;
		i ++; //para incrementar en 1
		//i--; para decrementar en 1
	}
	
	getch(); // espera ordenes para cerrar
	return 0;
}
