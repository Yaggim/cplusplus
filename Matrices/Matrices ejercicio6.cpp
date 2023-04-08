/*Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int matrizEnteros1[3][3];
	int matrizEnteros2[3][3];
	int matrizResultante[3][3];
	
	
	cout<<"Primera Matriz: "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese el valor de ["<<i<<"]["<<j<<"]: "; cin>>matrizEnteros1[i][j];
		}
	}
	cout<<"La matriz es: \n";
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrizEnteros1[i][j]<<" ";
		}
		cout<<"\n";
	}
	system("pause");
	system("clear");
	
	cout<<"Segunda Matriz: "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese el valor de ["<<i<<"]["<<j<<"]: "; cin>>matrizEnteros2[i][j];
		}
	}
	
	cout<<"La matriz es: \n";
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrizEnteros2[i][j]<<" ";
		}
		cout<<"\n";
	}
	system("pause");
	system("clear");
	
	cout<<"La suma de las matrices es: \n";
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			matrizResultante[i][j]=matrizEnteros1[i][j]+matrizEnteros2[i][j];
		}
	}
	
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrizResultante[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
