/* 2. Escribe un programa que lea de la entrada estandar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicarle el IVA*/

#include<iostream>
using namespace std;

int main(){
	
	double valor_prod, valor_prod_iva = 0, iva= 0;
	cout<<"Digite el precio del producto sin IVA (Sin puntos, comas o espacios): ";
	cin>>valor_prod;
	
	iva = valor_prod * 0.19;
	valor_prod_iva = valor_prod + iva;
	cout<<"El precio final del producto + el IVA del 19%, seria de: "<<valor_prod_iva;
	
	return 0;
}
