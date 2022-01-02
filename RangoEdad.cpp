/* 19. Escriba un programa que solicite una edad (un entero) e indique
en la salida estandar si la edad introducida está en el rango [18-25]*/

#include<iostream>
using namespace std;

int main(){
	
	int edad;
	
	cout<<"Digite una edad: "; cin>>edad;
	
	if(edad >= 18 && edad <= 25){
		cout<<"Edad dentro de rango";
	}
	else{
		cout<<"Edad fuera de rango";
	}
	
	return 0;
}
