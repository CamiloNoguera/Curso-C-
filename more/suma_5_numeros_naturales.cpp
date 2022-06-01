// Encuentre y muestre la suma de los 5 primero numeros naturales

#include <iostream>
#include <conio.h>

using  namespace std;

int numero, suma;

int main(){
	
	while (numero < 5){
		
		numero ++;
		suma += numero;
		
	}
	cout << "La suma de los 5 primeros numeros naturales es: " << suma;
	
	getch();
	return 0;
}
