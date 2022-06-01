/*realizar un porgrama que calcule la nota final de 1 alumno a travez de los 3 cortes del semestre.
cada corte cuenta con 3 notas, al final el programa debe mostrar el promedio final de notas de cada corte, el promedio final de la asignatura
las notas de cada estudiante*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float notasCorte1[3];  //vector notas corte 1
	float notasCorte2[3];  // vector notas corte 2
	float notasCorte3[3];  // vector notas corte 3
 	
 	float acum=0;
	float promedioCortes[3];  //vector promedio final por corte
 	
 	float notaFinal=0;
 	
	float aux;
 	
 	
 	
 	for( int i=0; i<3;i++){
 		cout<<"Ingrese la nota "<< i+1 <<" del primer corte: ";cin>>aux;	
 		notasCorte1[i]=aux;	
 		acum=acum+aux;
	}
	promedioCortes[0]=acum/3;
	acum=0;
	
 	for( int i=0; i<3;i++){
 		cout<<"Ingrese la nota "<< i+1 <<" del segundo corte: ";cin>>aux;	
 		notasCorte2[i]=aux;	
 		acum=acum+aux;
	 }
	promedioCortes[1]=acum/3;
	acum=0;	 
	for( int i=0; i<3;i++){
 		cout<<"Ingrese la nota "<< i+1 <<" del tercer corte: ";cin>>aux;	
 		notasCorte3[i]=aux;	
 		acum=acum+aux;
	 } 	
 	promedioCortes[2]=acum/3;
 	acum=0;
 	
 	for( int i=0; i<3;i++){
 		acum=acum+promedioCortes[i];
	 } 	
	notaFinal=acum/3;
	acum=0;
 	
	for( int i=1; i<=4;i++){
 		for( int j=0; j<3;j++){
			if(i<2){
				cout<<" nota "<< j+1 <<" corte "<< i+1 <<": "<<notasCorte1[j]<<endl;		
			}else if( i==2){
				cout<<" nota "<< j+1 <<" corte "<< i+1 <<": "<<notasCorte2[j]<<endl;						
			}else if(i==3){
				cout<<" nota "<< j+1 <<" corte "<< i+1 <<": "<<notasCorte3[j]<<endl;										
			}else{
				cout<<"<------PROMEDIOS FINALES POR CORTE-------->"<<endl;
				cout<<" pormedio final corte "<< j+1 <<": "<<promedioCortes[j]<<endl;
			}
	 	}
	 	cout<<endl;
	 }
 	
 	cout<<"Nota final de la asignatura: "<<notaFinal<<endl;
	
	getch();
	return 0;
}
