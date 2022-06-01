#include<iostream>
using namespace std;
void insertarDato(flat Datos[], float vinsertar, int *n);

int main()
{
	int cantidad, i;
	float valor;
	float vector[20];
	cout <<"entre el numero de elementos del vector, maximo20:";
	cin >> cantidad;
	
	cout <<"\n";
	cout <<"recuerde que debe entrar los datos del vector ordenados ascendentemente:";
	cout <<"\n";
	for (i=0; i<cantidad; i++)
	{
		cout <<"entre el dato para la posicion" <<i+1<<":";
		cin >> vector[i];
	}
	cout << "\n";
	cout <<"entre el dato a insertar en el vector ordenado:";
	cin >> valor;
	cout <<"\n";
	
	cout<<"este es el valor de cantidad antes de llamar a la funcion:" <<cantidad<<"\n";
	insertarDato(vector, valor, &cantidad); // paso por valor y por referencia (no es necesario u obligatorio hacerlo por referencia)
	cout<<"este es el valor de cantidad despues de llamar a la funcion:"<<cantidad<<"\n";
	cout<<"\nel nuevo vector ordenado es:";
	for(i=0; i<cantidad; i++){
		cout <<"\nen la posicion" << i+1 <<" : "; << vector[i];	
	}
	
	cout<<"\n";
	system("PAUSE");
	return 0;	
}

void insertarDato(float Datos[], float vinsertar, int *n){
	if(Datos[*n-1] <=vinsertar) // si es el mayor de todos
	{
		Datos[*n]=vinsertar; // queda en la ultima posicion
		n* = n*+1;
	}
	else{ // si esta dentro de los datos ordenados
	int j=0;
	while(j<*n){
		if(vinsertar < Datos[j])
		{// mueve de atras hacia adelante hasta el puesto encontrado
		Datos[k]= Datos[k-1];
		}
		Datos[j] = vinsertar;// coloca el nuevo elmento  en su puesto
		*n = *n+1; // ahora el arreglo tiene un elmento mas
		j = j+*n; //para salir del ciclo while forzado
	}// termina de mover cuando encontró uno mayor
	else     // no encontro uno mayor, sigue buscando
	j = j+1;
	
	} // se cierra el else	
}

