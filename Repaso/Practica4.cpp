#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int x, y, potencia = 1;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	for(int i=1; i<=y; i++){
		potencia *= x;
	}
	
	cout<<"\nEl resultado de la elevacion es: "<<potencia<<endl;
	
	getch();
	return 0;
}
