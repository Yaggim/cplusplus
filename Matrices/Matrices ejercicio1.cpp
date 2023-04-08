/*Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas,
 Posteriormente mostrar la matriz en pantalla.*/
 
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int matrizEnteros[50][50];
	int filas, columnas;
	
	cout<<"Ingrese el numero de filas: ";  cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;
	system("clear");
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingrese el numero de la fila "<<i<<" columna "<<j<<": "; cin>>matrizEnteros[i][j];
			system("clear");
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
