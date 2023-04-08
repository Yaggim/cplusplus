/*Ejercicio 3: Hacer una matriz de tipo entera de 2 * 2, 
llenarla de números y luego copiar todo su contenido hacia otra matriz.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int matrizEnteros[2][2];
	int matrizEnteros2[2][2];
	
	cout<<"Ingrese la matriz de 2 x 2: \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"["<<i<<"]["<<j<<"]: "; cin>>matrizEnteros[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matrizEnteros2[i][j]=matrizEnteros[i][j];
		}
	}
	
	cout<<"La matriz resultante es: \n";
	cout<<"------------------------------------\n\n ";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matrizEnteros2[i][j]<<" ";
		}
		cout<<"\n ";
	}	
	cout<<"\n------------------------------------\n";
	
	
	return 0;
}





