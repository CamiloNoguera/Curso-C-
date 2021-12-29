// 8. Escriba un fragmento de programa que intercambie los valores de dos variables.

#include<iostream>
using namespace std;

int main(){
	
	float a, b, aux;
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	aux = a; // La variable auxiliar nos permite guardar el valor de una variable sin que se pierda al hacer el intercambio, es una variable temporal
	a = b;
	b = c;
	
	cout<<"\nEl nuevo valor de a es: "<<a;
	cout<<"\nEl nuevo valor de b es: "<<b<<endl;
	
	return 0;
}
