/*Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int matrizEnteros[3][3]={{2,3,4},{5,6,7},{8,9,10}};
	
	
	cout<<"La matriz original es: \n";
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrizEnteros[i][j]<<" ";
		}
		cout<<"\n";
	}
	

	//intercambiamos la filas por las columnas
	cout<<"\nLa matriz transpuesta es: \n";
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrizEnteros[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
