/* Dado una secuencia de números construir un pragama para encontrar:
- El mayor numero leido.
- El numero de veces que ese mayor aparece.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float valor, mayor, prom, suma;
	int N, veces_mayor = 0;
	cout << "¿Cuantos numero tiene su secuencia?: "; cin >> N;
	
	for(int i = 1; i <= N; i++){
		cout << "Digite el valor #" << i << ": "; cin >> valor;
		
		if(valor > mayor){
			mayor = valor;
		}
		
		suma += valor;
	}
	prom = suma / N;
	cout << "El promedio es: " << prom << endl;
	cout << "El mayor es " << mayor << " y se repite " << veces_mayor << " veces";
	
	getch();
	return 0;
}
