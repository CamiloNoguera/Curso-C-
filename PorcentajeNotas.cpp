/* 10. La calificación final de un estudiante es la media ponderada de tres notas:
la nota de practicas que pesa un 30% del total, la nota teorica que pesa un 60% y la nota de participación que pesa el 10% restante.
Escriba un programa que lea de la entrada estandar las tres notas de un alumno y escriba en la salida estandar su nota final.*/

#include<iostream>
using namespace std;

int main(){
	
	float nota_practicas, nota_teoria, nota_participacion, nota_final = 0;
	
	cout<<"Digite su nota de practicas: "; cin>>nota_practicas;
	cout<<"Digite su nota de teoria: "; cin>>nota_teoria;
	cout<<"Digite su nota de participacion: "; cin>>nota_participacion;
	
	nota_practicas *= 0.3;
	nota_teoria *= 0.6;
	nota_participacion *= 0.1;
	
	//nota_final = (nota_practicas)+(nota_teoria)+(nota_participacion);
	nota_final = nota_practicas + nota_teoria + nota_participacion;
	
	cout<<"\nSu nota final es de: "<<nota_final;
	
	return 0;
}
