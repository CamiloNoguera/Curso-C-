

#include <iostream>
using namespace std;
void entrarMatrizNca (float matriz[][10], int NFilas, int NColum);
void sumaFilas(float matriz[][10], int NFilas, int NColumn, float SFilas[]);
void sumaColumnas(float matriz[][10], int NFilas, int NColumn, float SCol[]);
void imprimeVector(float vector[], int NElem);
int main ()
{
	int filas, colum;
	const int NFILAS=10;
	const int NCOL=10;
	float datos[NFILAS][NCOL];
	float fila[NFILAS];
	float columna[NCOL];
	cout << "Entre la cantidad de filas max" <<NFILAS <<" : ";
	cin >> filas;
	cout << " Entre la cantidad de columnas max" <<NCOL <<" : ";
	cin >> colum;
	
	entrarMatrizNca (datos, filas, colum);
	sumaFilas(datos, filas, colum, fila);
	sumaColumnas(datos, filas, colum, columna);
	cout<<"\nEl vector que contiene la suma por filas es: " <<endl;
	imprimeVector(fila, filas);
	cout<< "\nEl vector que contiene la suma por columnas es: " <<endl;
	imprimeVector(columna, colum);	
	system("pause");
	return 0;
}


void entrarMatrizNca(float matriz[][10], int NFilas, int NColum)
{

	int i, j;
	for (i=0; i<Nilas; i++)//leer las matrices
	{
		for(j=0; j<NColumn; j++)
		{
			cout <<"Ingrese la posicion" <<"[" << i+1<<"][" <<j+1 <<"]:";
			cin >> matriz[i][j];
		}
	}	
		
}
	

void sumaFilas(float matriz[][10], int NFilas, int NColumn, float sFilas[])
{
	float suma=0;
	for(int i=0; i<NFilas; i++)
	{
		for(int k=0, k<NColumn; k++)
		{
			suma = suma+matriz[i][k];
		}
		sFila[i]= suma; //Guardar en el vector la suma de esa fila
		suma =0; 
	}
}

void sumaColumnas(float matriz[][10], int NFilas, int NColumn, float sCol[])
{
	float suma=0;
	for (int m=0; m<NColumn; m++)
	{
		for(int p=0; p<NFilas; p++)
		{
			suma = suma + matriz[p][m];
		}
		sCol[m] = suma;// Guardar en el vector la suma de esa Columna
		suma = 0;
	}
}

Void imprimeVector (float vector[], int NElem)
{
	for(int i=0; i<NElem; i++)
	{
		cout <<"Elemento [" << i+1 <<"] del vector es:" << vector[i] <<endl;
		
	}
}









