/*construir un programa en c++ que haga uso de dos funciones para hacr lo siguiente:
a) una funcion que ingrese un vector a de n numeros enteros.
b) una funcion que obtenga la diferencia mas grande y la menor diferencia entre los dos 
elementos consecutivos de ese vector

estas diferencias, deben ser mostradas por el programa principal.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void fill_vector(int *vector, int size);
int get_diferences(int *vector, int size, int* min);

int main(){
	int SIZE = 20, cant;
    int data[SIZE], minima_diferencia, maxima_diferencia;
    
    cout << "Digite la cantidad de estudiantes (Maximo " << SIZE << "): "; cin >> cant;
 
    fill_vector(data, cant);
 
    maxima_diferencia = get_diferences(data, cant, &minima_diferencia);
 
    cout << "minima diferencia: " << minima_diferencia << '\n';
    cout << "maxima diferencia: " << maxima_diferencia << '\n';	

	getch();
	return 0;
}

void fill_vector(int *vector, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Digite el valor # " << i+1 << ": " ; cin >> vector[i];
    }
}
 
int get_diferences(int *vector, int size, int* min) {
    int max_diference = vector[1] - vector[0];
    int min_diference = vector[1] - vector[0];
    int tmp_diference;
 
    for (int i = 0; i < size - 1; i++) {
 
        tmp_diference = vector[i] - vector[i + 1];
 
        if (tmp_diference > max_diference) {
            max_diference = tmp_diference;
        }
 
        if (tmp_diference < min_diference) {
            min_diference = tmp_diference;
        }
    }
 
    *min = min_diference;
    return max_diference;
}
