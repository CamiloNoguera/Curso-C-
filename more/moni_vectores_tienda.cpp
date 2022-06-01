/* Un tendero desea llevar registro de su caja registradora. Hacer un programa que, sabiendo que al dia se realizan 5 ventas, le calcule al tendero:
total de dinero en la caja registradora al final del dia.
la cantidad de dinero por cada venta realizada.
la cantidad de dinero que regresaron por cada venta.
la cantidad de dinero luego de entregar el vuelto de la compra.

8000 ->10000 -> 2000*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float totalDineroVenta=0;
	
	float vueltoVenta[5];
	float montoVenta[5];
	float montoRecibido[5];
	
	float venta=0; 
	float montoR=0;
	for(int i=0; i<5;i++){
		cout<<"Ingrese el monto de la venta: ";cin>>venta;
		cout<<"Ingrese el monto recibido: ";cin>>montoR;
		if(montoR > 0){
			if(montoR>=venta){
				montoRecibido[i]=montoR;
				montoVenta[i]=venta;
				vueltoVenta[i]=montoR-venta;
			}else{
				cout<<"El monto recibido no es suficiente para pagar la venta"<<endl;
			}
		}else{
			cout<<"El monto recibido no es valido para procesar la venta"<<endl;
		}	
	}
	
	for(int i=0; i<5;i++){
		totalDineroVenta=totalDineroVenta+montoVenta[i];
		
		cout<<"Dinero recibido por venta "<<i+1<<": "<<montoRecibido[i]<<endl;
		cout<<"Dinero de venta "<<i+1<<": "<<montoVenta[i]<<endl;
		cout<<"Dinero regresado por venta "<<i+1<<": "<<vueltoVenta[i]<<endl;
	}	
	cout<<"Total dinero generado en las cinco ventas del dia: "<<totalDineroVenta;
	
	
	getch();
	return 0;
}
