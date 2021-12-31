/* La sentecia if

if(condicion){
	instrucciones 1;
}
else{
	instrucciones 2;
}
*/

#include<iostream>
using namespace std;

int main(){
	
	int numero, dato = 5;
	
	cout<<"Digite un numero entero: "; cin>>numero;
	
	if (numero == dato){
		cout<<"\nEl numero digitado es 5"<<endl;
	}
	else if (numero > dato){
		cout<<"\nEl numero digitado es mayor que 5"<<endl;
	}
	else{
		cout<<"\nEl numero digitado es menor que 5"<<endl;
	}
		
	return 0;
}
