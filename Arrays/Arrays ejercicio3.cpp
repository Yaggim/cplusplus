/*Ejercicio 3: Escribe un programa que lea de la entrada est�ndar un vector de 
n�meros y muestre en la salida est�ndar los n�meros del vector con sus �ndices asociados.*/

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
