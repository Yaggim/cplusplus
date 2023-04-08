/*Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, 
los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int vectorEnteros[] = {1, 2, 3, 4, 5};
	int vectorEnteros2[5];
	
		cout<<"El vector de enteros es: ";
	for(int i=0;i<5;i++){
		cout<<vectorEnteros[i]<<" ";
	}
	
	for(int i=0;i<5;i++){
		vectorEnteros2[i]=vectorEnteros[i]*2;
	}	
	
	cout<<"\nEl vector de enteros multipicado por 2 es: ";
	for(int i=0;i<5;i++){
		cout<<vectorEnteros2[i]<<" ";
	}
	getch();
	
	return 0;
}
