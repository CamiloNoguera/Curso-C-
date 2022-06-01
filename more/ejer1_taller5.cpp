/*Desarrolla un programa en c++ utilizando el dev c++ que ingrese elementos a dos arreglos. 
El primero contiene codigos de estudiantes y el segundo contiene el sexo de los estudiantes
del primer arreglo, codificados como ´f´ para femenino y ´m´ para masculino. usted debe 
obtener a partir de estos arreglos, otro arreglo, el cual debe contener el codigo de los 
hombres. E imprimir el arreglo que contiene los codigos de los hombres. 
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int const SIZE = 20;
	int cant, i, j, n_hombres=0;
	int codigos_estd[SIZE];
	char generos_estd[SIZE];
	
	cout << "Digite la cantidad de estudiantes (Maximo " << SIZE << "): "; cin >> cant;
	
	for(i=0; i<cant; i++){
		cout << "Digite el codigo del estudiante #" << i+1 << ": "; cin >> codigos_estd[i];
		
		do{
			cout << "Digite el genero del estudiante (f/m) #" << i+1 << ": "; cin >> generos_estd[i];	
		}while (generos_estd[i] != 'f' && generos_estd[i] != 'm');
		
		if(generos_estd[i] == 'm'){
			n_hombres++;
		}
	}
	
	int codigos_homb[n_hombres];
	
	for(i=0,j=0; i<cant; i++){	
		if(generos_estd[i] == 'm'){
			codigos_homb[j] = codigos_estd[i];
			j++;
		}
	}
	
	cout << "\nEl arreglo que contiene los codigos de los hombres es: ";
	cout << "[";
	for(i=0; i<n_hombres; i++){	
		cout << codigos_homb[i] << (i == n_hombres - 1 ? "" : ", ");
	}
	cout << "]";

	getch();
	return 0;
}
