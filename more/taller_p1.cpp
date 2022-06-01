#include<iostream>
using namespace std;

int const nestudiantes = 20;

int codigos[nestudiantes],codigoh[nestudiantes];
int main(){
	
	cout<<"Ingrese el numero de estudiantes: "; cin >> nestudiantes;
	char sexo[nestudiantes];
	
	for(int i=0;i<nestudiantes;i++){
		cout<<"\nEscriba el codigo del estudiante "<<i+1 <<": ";cin>>codigos[i];
		cout<<"\nEscriba el sexo del estudiante "<<i+1 <<" (f o m): ";cin>>sexo[i];
		if((sexo[i]!='f')&&(sexo[i]!='m') ){
			cout<<"\nError vuelva a escribir el sexo del estudiante "<<i+1 <<" (f o m): ";cin>>sexo[i];
		}
	}
	
	for(int i=0,j=0;i<nestudiantes;i++){
		if(sexo[i]=='m'){
			codigoh[j]=codigos[i];
			j++;
		}
		
	}
	cout<<"\nLos codigos de los estudiantes masculinos son: ";
	for(int i=0;i<nestudiantes;i++){
		if(codigoh[i]!=0){
			cout<<"["<<codigoh[i]<<"]";
		}
		
	}
	
	cout<<endl<<endl;
	system("PAUSE");
	return 0;
}

