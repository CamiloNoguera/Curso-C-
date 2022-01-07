#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int numero, conteo = 0;
	
	do{
		cout<<"Digite un numero mayor que 0: "; cin>>numero;
		if(numero > 0){
			conteo++;
		}
	}while(numero != 0);
	
	cout<<"\nNumeros introducidos mayores que 0: "<<conteo<<endl;
	
	getch();
	return 0;
}
