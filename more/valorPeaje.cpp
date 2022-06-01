#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	string tipo_vehiculo;
	int opcion, num_pasajeros, valor_peaje;
	cout << "Cual es su tipo de vehiculo? \nOpcion 1 - Automovil \nOpcion 2 - Camion \nOpcion 3 - Bus \nOpcion 4 - Otro \n\nDigite el numero de opcion: "; cin >> opcion;
	cout << "Digite el numero de pasajeros: "; cin >> num_pasajeros;
	
	switch (opcion){
		case 1:
			tipo_vehiculo = "Automovil";
			valor_peaje = 3500;
			break;
		case 2:
			tipo_vehiculo = "Camion";
			valor_peaje = 5000;
			break;
		case 3:
			tipo_vehiculo = "Bus";
			valor_peaje = 200 * num_pasajeros;
			break;
		case 4:
			tipo_vehiculo = "Otro";
			valor_peaje = 0;
			break;
	}
	cout << "\n--- Bolante de pago del peaje --- \nSu tipo de vehiculo es: " << tipo_vehiculo << "\nEl numero de pasajeros es: " << num_pasajeros << "\nEl valor del peaje es: " << valor_peaje;
	
	
	getch();
	return 0;
}

