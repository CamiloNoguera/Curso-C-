/*Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma
ax^2 + bx + c = 0 teniendo en cuenta la expresion.*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float a, b, c, resultado_1 = 0, resultado_2 = 0;
	
	cout<<"Este programa calcula las soluciones de ecuaciones de segundo grado de la forma\nax^2 + bx + c = 0 Teniendo en cuenta la formula general."<<endl;
	
	cout<<"\nDigite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	resultado_1 = ((-b)+sqrt(pow(b,2)-4*a*c))/(2*a); //(-b+sqrt(pow(b,2)-4*a*c))/(2*a)
	resultado_2 = ((-b)-sqrt(pow(b,2)-4*a*c))/(2*a); //(-b-sqrt(pow(b,2)-4*a*c))/(2*a)
	
	cout<<"\nSi es positivo, su resultado es: "<<resultado_1;
	cout<<"\nSi es negativo, su resultado es: "<<resultado_2<<endl;
	
	
	return 0;
}
