// Se tiene una serie de N numeros, se desea saber si dentro de ellos existe al menos un 0 (cero)

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int cant_num, cont = 0;
	float num;
	string encontrar = "N";
	cout << "Digite la cantidad de numeros a ingresar: "; cin >> cant_num;
	cout << "\n";
	
	while (cont < cant_num and encontrar == "N"){
		cont ++;
		cout << "Digite el numero " << cont << ": "; cin >> num;
			if (num == 0){
				encontrar = "S";
					
			}
	}
	if (encontrar == "N"){
		cout << "No se encontraron ceros";
		
	}
	else{
		cout << "Se encontro al menos un cero";
	}
	
	getch();
	return 0;
}
