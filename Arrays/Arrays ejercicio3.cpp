/*Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de 
números y muestre en la salida estándar los números del vector con sus índices asociados.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int vectorNumeros[5];
	
	cout<<"Ingrese 5 numeros: \n\n";
	for(int i=0;i<5;i++){
		cin>>vectorNumeros[i];
		
	}
	
	for(int i=0;i<5;i++){
		cout<<"En el indice "<<i<<" el numero del vector es: "<<vectorNumeros[i]<<"\n"<<endl;
	}
	
	system("pause");
	
	return 0;
}
