/*Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de sus elementos.*/

#include <iostream>

using namespace std;

int main(){
	
	int vectorNumeros[]={4,3,2,9,0};
	int suma=0;
	
	for(int i=0;i<5;i++){
		suma+=vectorNumeros[i];
	}
	
	cout<<"\nLa suma de los numeros es: "<<suma<<endl;
	
	
	
	
	return 0;
}
