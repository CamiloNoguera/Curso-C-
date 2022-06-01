#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	char codigoe, codigos, codigosa, nombree;
	float salario, totalsuc = 0, totalempresa = 0;
	
	cout << "Entre el codigo de la sucursal de un caracter, ENTRE 0 PARA TERMINAR: "; cin >> codigos;
	
	while(codigos != '0'){
		totalsuc = 0;
		codigosa = codigos;
		
		while(codigosa == codigos){
			cout << "Entre el codigo del empleado de un caracter: "; cin >> codigoe;
			cout << "Entre el nombre del empleado de un caracter: "; cin >> nombree;
			cout << "Entre el salario mensual: "; cin >> salario;
			totalsuc += salario;
			
			cout << "Entre el codigo de la sucursal de un caracter, ENTRE 0 PARA TERMINAR: "; cin >> codigos;
		}
		// Como cambio la sucursal se muestra la informacion de la sucursal anterior.
		cout << "El valor TOTAL PAGADO por la sucursal " << codigosa << " es: " << totalsuc << endl;
		totalempresa += totalsuc; // y se acumula en el total de la empresa.
	}
	cout << "El valor TOTAL PAGADO por la EMPRESA es: " << totalempresa << endl;
	
	getch();
	return 0;
}
