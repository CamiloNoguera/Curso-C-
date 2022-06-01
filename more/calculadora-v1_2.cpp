#include <iostream>
#include <conio.h>

using namespace std;
// Declaracion de variables
bool esRealizada = true;

// Declaracion de funciones
int menu();
float sumar(float num1, float num2);
float restar(float num1, float num2);
float multiplicar(float num1, float num2);
float dividir(float num1, float num2);
float calcular(float num1, float num2, int op_menu);
void validacion(int resultado);

int main(){
	float num1, num2, resultado = 0;
	int opc;
	bool salir = false;
	cout<<"<------------CALCULADORA BASICA V1.2-------------->"<<endl;
	while(salir == false){
		//Pedimos los numeros
		cout << "Ingrese el primer numero: "; cin >> num1;
		cout << "Ingrese el segundo numero: "; cin >> num2;
		opc = menu();
		resultado = calcular(num1, num2, opc);
		validacion(resultado);
	}
	
	getch();
	return 0;
}

int menu(){
	int op_menu;
	cout<<"1 Sumar" << endl;
	cout<<"2 Restar" << endl;
	cout<<"3 Multiplicar" << endl;
	cout<<"4 Dividir" << endl;
	cout<<"\nSeleccione una operacion:";cin >> op_menu;
	return op_menu;
}

float sumar(float num1, float num2){
	float valor1, valor2, suma;
	suma = num1 + num2;
	return suma;
}

float restar(float num1, float num2){
	float valor1, valor2, resta;
	resta = num1 - num2;
	return resta;
}

float multiplicar(float num1, float num2){
	float valor1, valor2, multip;
	multip = num1 * num2;
	return multip;
}

float dividir(float num1, float num2){
	float valor1, valor2, div;
	div = num1 / num2;
	return div;
}

float calcular(float num1, float num2, int opc){
	float result;
	switch(opc){
			case 1:
				cout << "SUMANDO" << endl;
				result = sumar(num1, num2);
				break;
			case 2:
				cout<<"RESTANDO"<<endl;
				result = restar(num1, num2);	
				break;
			case 3:
				cout<<"MULTIPLICANDO"<<endl;	
				result = multiplicar(num1, num2);
				break;
			case 4:
				cout<<"DIVIDIENDO"<<endl;
				if(num2 != 0){
					result = dividir(num1, num2);	
				}
				else{
					esRealizada=false;
				}	
				break;	
			default:
				cout<<"Opcion ingresada fuera de rango"<<endl;	
		}
		return result;
}

void validacion(int resultado){
	if(esRealizada){
			cout<<"el resultado fue: " << resultado << endl;	
	}
	else{
			cout<<"Ups... algo salio mal, intentelo de nuevo" << endl;
	}
}
