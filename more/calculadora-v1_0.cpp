#include <iostream>

using namespace std;
 

//  CALCULADORA  (+-*/) SOLOMENTE VA A FUNCIONAR PARA 2 NUMEROS (NO VA A ACUMULAR EL RESULTADO)
 
 // Menu (4 opciones de operaciones)
 
 
 // 4 funciones de las operaciones 1 funcion para el menu  1 funcion para validad el resultado1 función llamada calculadora (contiene el ciclo)


// tipo de retorno  nombre de la funcion (argumentos que recibe)
// float sumar(float a,float b) return resultado
// void mostrarSueldo(aumento,sueldoBase)

int main(){
	float num1=0, num2 =0,resultado=0;
	int op;
	bool esRealizada=true, salir=false;
	cout<<"<------------CALCULADORA BASICA V1.0-------------->"<<endl;
	while(salir==false){
//pedimos los numeros
		cout<<"Ingrese el primer numero: ";cin>>num1;
		cout<<"Ingrese el segundo numero: ";cin>>num2;
//pedimos la operación
		cout<<"1 Sumar"<<endl;
		cout<<"2 Multiplicar"<<endl;
		cout<<"3 Dividir"<<endl;
		cout<<"4 Restar"<<endl;
		cout<<endl;
		cout<<"Seleccione una operacion:";cin>>op;
		switch(op){
			case 1:
				cout<<"SUMANDO"<<endl;
				resultado = num1+num2;
				break;
			case 2:
				cout<<"MULTIPLICANDO"<<endl;
				resultado = num1*num2;	
				break;
			case 3:
				cout<<"DIVIDIENDO"<<endl;
				if(num2 != 0){
					resultado = num1/num2;	
				}else{
					esRealizada=false;
				}	
				break;
			case 4:
				cout<<"RESTANDO"<<endl;	
				resultado = num1-num2;
				break;	
			default:
				cout<<"Opcion ingresada fuera de rango"<<endl;	
		}
		if(esRealizada){
			cout<<"el resultado fue: "<<resultado<<endl;	
		}else{
			cout<<"Ups... algo salio mal, intentelo de nuevo"<<endl;
		}
	}
	return 0;
}
