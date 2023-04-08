/*Ejercicio 2: Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre
 la diagonal principal de la matriz.*/
 
 #include <iostream>
 #include <conio.h>
 
 using namespace std;
 
 int main(){
 	
 	int matrizEnteros[3][3];
 	
 	
 	
 	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese el numero de la fila "<<i<<" columna "<<j<<": "; cin>>matrizEnteros[i][j];
		}
	}	
 	cout<<"La diagonal principal de la matriz es: \n\n";
 	
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			if(i==0 && j==0){
 				cout<<matrizEnteros[i][j]<<"\n ";
 			}
 			if(i==1&&j==1){
 				cout<<matrizEnteros[i][j]<<"\n  ";
 			}
 			if(i==2&&j==2){
 				cout<<matrizEnteros[i][j];
 			}
 		}
 	} 	
 	getch();
 	
 	return 0;
 }

