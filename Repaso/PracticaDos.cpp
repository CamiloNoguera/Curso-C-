#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	float temp_media, temp_baja = 999, temp_alta = 0, suma_temp = 0, temp;
	
	for(int i=0; i<24; i+=4){
		cout<<"Digite la temperatura a las "<<i<<": "; cin>>temp;
		
		suma_temp += temp;
		
		if(temp > temp_alta){
			temp_alta = temp;
		}
		if(temp < temp_baja){
			temp_baja = temp;
		}
	}
	
	temp_media = suma_temp / 6;
	
	cout<<"\nLa temperatura media del dia es: "<<temp_media<<endl;
	cout<<"La temperatura mas alta es: "<<temp_alta<<endl;
	cout<<"La temperatura mas baja es: "<<temp_baja<<endl;
	
	getch();
	return 0;
}
