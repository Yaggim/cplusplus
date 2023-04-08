/*Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. 
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int matrizEnteros[100][100], filas, columnas;
	char bandera='V';
	
	cout<<"Ingrese el numero de filas: "; cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Ingrese el valor de ["<<i<<"]["<<j<<"]: "; cin>>matrizEnteros[i][j];
		}
	}
	
	if(filas==columnas){
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				if(matrizEnteros[i][j]!=matrizEnteros[j][i]){
					bandera='F';
					break;
				}
			}
		}
	}
	
	if(bandera=='V'){
		cout<<"\nLa matriz es simetrica"<<endl;
	}
	else{
		cout<<"\nLa matriz no es simetrica"<<endl;
	}
	
	getch();
	return 0;
}
