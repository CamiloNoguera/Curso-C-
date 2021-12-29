// 9. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>
using namespace std;

int main(){
	
	float nota_alumno1, nota_alumno2, nota_alumno3, nota_alumno4, promedio = 0, suma = 0;
	
	cout<<"Digite la nota final del alumno 1: "; cin>>nota_alumno1;
	cout<<"Digite la nota final del alumno 2: "; cin>>nota_alumno2;
	cout<<"Digite la nota final del alumno 3: "; cin>>nota_alumno3;
	cout<<"Digite la nota final del alumno 4: "; cin>>nota_alumno4;
	
	promedio = ((nota_alumno1)+(nota_alumno2)+(nota_alumno3)+(nota_alumno4))/4; //Tuve algunos incovenientes con el promedio, los datos se distorcionaban
	
	cout<<"\nLa nota final media de los cuatro alumnos es: "<<promedio;
			
	return 0;
}
