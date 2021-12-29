// 7. Escribe la siguiente expresión matematica a+(b/(c-d)) como expresión en C++:

#include<iostream>
using namespace std;

int main(){
	
	float a, b, c, d, resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	cout<<"Digite el valor de d: "; cin>>d;
	
	resultado = a+(b/(c-d));
	
	//cout.precision(2); // Formateamos la salida a 2 decimales redodeada
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
