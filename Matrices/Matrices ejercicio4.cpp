/*Ejercicio 4:  Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla 
de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	srand(time(NULL));
	
	int matrizEnteros[100][100];
	int filas,columnas;
	
	cout<<"Ingrese el numero de filas para la matriz: "; cin>>filas;
	cout<<"Ingrese el numero de columnas para la matriz: "; cin>>columnas;
	
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matrizEnteros[i][j]= 1+rand()%51;
		}
	}
	
	cout<<"La matriz resultante es: \n";
	cout<<"------------------------------------\n\n ";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matrizEnteros[i][j]<<" ";
		}
		cout<<"\n ";
	}	
	cout<<"\n------------------------------------\n";
	
	system("pause");
	
	
	return 0;
}
