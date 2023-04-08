/*Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y 
muestre en la salida estándar su tabla de multiplicar.*/

#include <iostream>

using namespace std;

int main(){
	
	int numero, resultado, contador=1;
	
	cout<<"Ingrese un numero del 1 al 10: "; cin>>numero;
	
	while(contador<=10){
		
		resultado = numero * contador;
		
		cout<<numero<<" * "<<contador<<" = "<<resultado<<endl;
		contador++;
	}	
	
	return 0;
}
