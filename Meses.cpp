/* 22. Mostrar los meses del año, pidiendole al usuario un numero entre (1-12)
y mostrar el mes al que corresponde*/

#include<iostream>
using namespace std;

int main(){
	
	int num_mes;
	
	cout<<"Digite un numero entre 1-12: "; cin>>num_mes;
	
	if(num_mes >= 1 && num_mes <= 12){
		switch(num_mes){
			case 1: cout<<"Enero"; break;
			case 2: cout<<"Febrero"; break;
			case 3: cout<<"Marzo"; break;
			case 4: cout<<"Abril"; break;
			case 5: cout<<"Mayo"; break;
			case 6: cout<<"Junio"; break;
			case 7: cout<<"Julio"; break;
			case 8: cout<<"Agosto"; break;
			case 9: cout<<"Septiembre"; break;
			case 10: cout<<"Octubre"; break;
			case 11: cout<<"Noviembre"; break;
			case 12: cout<<"Diciembre"; break;
		}
	}
	else{
		cout<<"Numero fuera de rango";
	}
	
	return 0;
}
