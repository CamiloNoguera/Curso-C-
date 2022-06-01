#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

//void gotoxy(int x,int y);

int main(){
	
	system("color A");
	
	int horas = 0, min = 0, seg = 0, contador = 0;
	cout << "\t\t\tHORAS\tMINUTOS\tSEGUNDOS" << endl;
	for(horas = 0; horas < 24; horas++){
		for(min = 0; min < 20; min++){
			for(seg = 0; seg < 20; seg++){
				cout << "\t\t\t\t\t\t\r";
//				gotoxy(4,1);
				cout << "\t\t\t  " <<horas << "\t   " << min << "\t   " << seg << "\r";
//				gotoxy(20,10);
//				while(contador < 1000000000){
//					contador++;
//				}
				for(int retardar = 1; retardar < 1000000000; retardar++){
					
				}
				contador = 0;
			}
		}
	}
	
	getch();
	return 0;
}

//void gotoxy(int x,int y){  
//      HANDLE hcon;  
//      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
//      COORD dwPos;  
//      dwPos.X = x;  
//      dwPos.Y= y;  
//      SetConsoleCursorPosition(hcon,dwPos);  
// }  
