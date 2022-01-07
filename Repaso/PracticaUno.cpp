#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int cuadrado, suma = 0;
	
	for(int i=1; i<=10; i++){
		cuadrado = i*i;
		suma += cuadrado;
	}
	
	cout<<"\nLa Suma es: "<<suma<<endl;
	
	getch();
	return 0;
}
