/* En cierto país llamado "IVALANDIA" el impuesto que se debe pagar por los artículos se
calcula mediante los siguientes criterios: Los primeros $100 no causan impuesto; los
siguientes $100 tienen el 30% de impuesto y el resto el 40% de impuesto, pero si el costo
del producto es mayor a $1000, entonces no se cobra el 40%, sino el 50%. Determinar y
visualizar en la pantalla: a) El nombre y costo básico del artículo, b) valor del impuesto, y c)
valor total a pagar */

/* Prueba de escritorio
Nombre: X
Costo basico: 180
Valor del impuesto: 30%
Total pagar: 204

*/

#include <iostream>
#include <conio.h>

using namespace std;

string nom_producto;
float costo_basico, impuesto, impuesto2, total_pagar;

int main(){
	cout << "Bienvenid@! \n\nPor favor, digite el nombre del producto: "; cin >> nom_producto;
	cout << "Digite el costo de ese producto: $"; cin >> costo_basico;
	
	if (costo_basico >= 0){
		if (costo_basico <= 100){
		impuesto = 0;
		
		}
		else if(costo_basico > 100 and costo_basico <= 200){
			impuesto = 30;
			total_pagar = costo_basico + ((costo_basico-100) * 0.3);
			
		}
		else if (costo_basico > 200 and costo_basico <= 1000) {
			impuesto = 30;
			impuesto2 = 40;
			float resta = costo_basico - 200;
			total_pagar = costo_basico + (100 * 0.3) + (resta * 0.4);
			
		}
		else{
			impuesto = 50;
			total_pagar = costo_basico + (costo_basico * 0.5);
			
		}
		
		cout << "--- FACTURA ---" << endl;
		cout << "Nombre del producto: " << nom_producto << endl;
		cout << "Costo basico del articulo: $" << costo_basico << endl;
		cout << "Impuesto 1: " << impuesto << "%" << endl;
		cout << "Impuesto 2: " << impuesto2 << "%" << endl;
		
	} 
	else {
		cout << "Precio no valido" << endl;
	}
	
	getch();
	return 0;
}
