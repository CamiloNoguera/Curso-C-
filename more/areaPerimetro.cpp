// Realizar un programa que calcule el perimetro y el area de un rectangulo dada la base y altura del mismo

#include<iostream>
#include<conio.h>

using namespace std;

float base, altura, area, perimetro;

float calcularArea (float base, float altura);
float calcularPerimetro (float base, float altura);

int main (){
	cout << "Digite la base del rectangulo: "; cin >> base;
	cout << "Digite la altura del rectangulo: "; cin >> altura;
	
	area = calcularArea (base, altura);
	perimetro = calcularPerimetro (base, altura);
	
	cout << "\nEl area es de: " << area;
	cout << "\nEl perimetro es de: " << perimetro;
	
	
	getch();
	return 0;
}

float calcularArea (float base, float altura){
	area = base * altura;
	return area;
}

float calcularPerimetro (float base, float altura){
	perimetro = (2 * base) + (2 * altura);
	return perimetro;
}
