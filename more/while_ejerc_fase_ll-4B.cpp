//desarrollar un programa que cree un reloj digital el cual muestre las horas en horario militar (ciclos anidados)

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
	
	int horas = -1, min = -1, seg = 0;
	void gotoxy(int a, int b);
	
	system("color 03");
	
	cout<< "\t\t\t\t\t\tPrograma Reloj\n\n";

	while(horas < 24){
		horas++;
		min = -1;
		
		while(min < 59){
			min++;
			seg = -1;
			
			while(seg < 59){
				seg++;
				
				gotoxy(50, 9);
				cout<< horas <<" : " <<min <<" : " <<seg <<"    ";
				
				Sleep(1000);	//esto hace que el programa se deje de ejecutar por cierto tiempo (depende de los miliseg que se coloque dentro del parentesis)
			}
		}
	}

	system("pause");
	return 0;
}

void gotoxy(int x, int y){
 
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE); 
	COORD c; 
   	c.X=x; 
   	c.Y=y; 
   	SetConsoleCursorPosition(h,c); 
}
