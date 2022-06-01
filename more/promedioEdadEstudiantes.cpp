// Promedio de edad de un grupo de estudiantes

#include <iostream>
#include <conio.h>

using  namespace std;

int num_estud, edad, n, sum_edad;
float promedio;

int main(){
	
	cout << "Digite el numero de estudiantes: "; cin >> num_estud;
	
	while (n < num_estud){
		
		n ++;
		cout << "Digite la edad del estudiante #" << n << ": "; cin >> edad;
		sum_edad += edad;
		
	}
	
	promedio = sum_edad / num_estud;
	cout << "El promedio de la edad del grupo de estudiante es: " << promedio;
	
	getch();
	return 0;
}
