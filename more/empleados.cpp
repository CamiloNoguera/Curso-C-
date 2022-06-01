// Camilo Andres Noguera Buelvas (2021214012) y Edier Santiago Florez Ramirez(2020214058)
#include<iostream>
#include<conio.h>

using namespace std;


int main (){
	int id_empleado, emple1 = 0, emple2 = 0, emple3 = 0, id_mayor = 0, categoria_empleado, cat1 = 0, cat2 = 0, cat3 = 0, categoria_mayor = 0, cont = 1, total_salarios = 0;
	float salario, salario_mayor = 0, porcentaje1 = 0, porcentaje2 = 0, porcentaje3 = 0;
	
	cout << "Empleado #" << cont;
	cout << "\nIngrese su identificacion (0 para salir): "; cin >> id_empleado;
	
	while (id_empleado != 0){
		cout << "Ingrese su categoria (1, 2 o 3): "; cin >> categoria_empleado;
		cout << "Ingrese su salario: "; cin >> salario;
		cout << "\n\n";
		
		if (salario > salario_mayor){
			id_mayor = id_empleado;
			categoria_mayor = categoria_empleado;
			salario_mayor = salario;
			
		}
		if (categoria_empleado == 1){
			cat1++;
			total_salarios++;
			// emple1++;
			
		}
		else if (categoria_empleado == 2){
			cat2++;
			total_salarios++;
			// emple2++;
			
		}
		else if (categoria_empleado == 3){
			cat3++;
			total_salarios++;
			// emple3++;
			
		}
		
		cont++;
		cout << "Empleado #" << cont;
		cout << "\nIngrese su identificacion (0 para salir): "; cin >> id_empleado;
	}
	cout << "\n\n=================================================================================";
	cout << "\n\nEl empleado con identificacion " << id_mayor << " gana mayor salario";
	cout << "\nSu categoria es: " << categoria_mayor;
	cout << "\nEl valor de su salario es: " << salario_mayor;
	
	cout << "\n\nEl total de salarios pagados en la categoria 1 es: " << cat1;
	cout << "\nEl total de salarios pagados en la categoria 2 es: " << cat2;
	cout << "\nEl total de salarios pagados en la categoria 3 es: " << cat3;
	
	cout << "\n\nLa cantidad de empleados en la categoria 1 es: " << cat1;
	cout << "\nLa cantidad de empleados en la categoria 2 es: " << cat2;
	cout << "\nLa cantidad de empleados en la categoria 3 es: " << cat3;
	
	porcentaje1 = (cat1 * 100) / total_salarios;
	porcentaje2 = (cat2 * 100) / total_salarios;
	porcentaje3 = (cat3 * 100) / total_salarios;
	cout << "\n\nEl porcentaje que representa el total de salarios pagados en la categoria 1 es: " << porcentaje1 << "%";
	cout << "\nEl porcentaje que representa el total de salarios pagados en la categoria 2 es: " << porcentaje2 << "%";
	cout << "\nEl porcentaje que representa el total de salarios pagados en la categoria 3 es: " << porcentaje3 << "%";
	
	getch();
	return 0;
}
