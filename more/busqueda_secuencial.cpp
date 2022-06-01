//Busca secuencialmente, iniciando en [0] para ver si encuentra el dato solicitado.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
//	int vector[] = {10,7,80,45,41,2,98,7,1,12};
	char vector[] = {'a','e','i','o','u','c','m','l','z','x'};
	int i;
	char band = 'F', dato_buscar; //Bandera
	
//	dato_buscar = 1;
	dato_buscar = 'c';
	//Busqueda secuencial
	i = 0;
	while((band == 'F') && (i < 10)){
		if(vector[i] == dato_buscar){
			band = 'V';
		}
		i++;
	}
	if(band == 'F'){
		cout << "Valor no encontrado" << endl;
	}
	else if(band == 'V'){
		cout << "Valor encontrado en la posicion " << i-1 << " del vector" << endl;
	}	
	
	getch();
	return 0;
}
