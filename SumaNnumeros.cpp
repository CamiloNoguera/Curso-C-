// 31. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, suma = 0;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		suma += i;
	}
	
	cout<<"\nLa suma es: "<<suma;
	
	getch();
	return 0;
}
