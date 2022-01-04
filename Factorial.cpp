// 33. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, factorial = 1; //siempre que sea multiplicacion iterativa, inicializar variable en 1
	
	cout<<"Digite un numero: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){
		factorial *= i;
	}
	
	cout<<"\nSu factorial es: "<<factorial;
	
	getch();
	return 0;
}
