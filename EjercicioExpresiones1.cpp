// 4. Escribe la siguiente expresi�n a/b + 1 como expresi�n en C++:

#include<iostream>
using namespace std;

int main(){
	
	float a, b, resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2); // Formateamos la salida a 2 decimales redodeada
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
