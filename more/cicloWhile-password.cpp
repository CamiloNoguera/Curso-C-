// Pedir una clave hasta que se ingrese la clave correcta j

#include <iostream>
#include <conio.h>

using  namespace std;

string clave;

int main(){
	
	cout << "Digite la clave: "; cin >> clave;
	
	while (clave != "j" and clave != "J"){
		
		cout << "La clave es incorrecta" << endl; 
		cout << "\nDigite la clave: "; cin >> clave;
		
	}
	cout << "La clave es correcta";
	
	getch();
	return 0;
}
