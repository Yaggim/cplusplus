/*Ejercicio 8: Escriba un programa que calcule el valor de: 1+3+5+...+2n-1*/

#include <iostream>

using namespace std;

int main(){
	
	int numero, resultado;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i = 1; i<=numero;i++){
		
		resultado+= (2*i)-1;
	}
	
	
	cout<<"\nEl resultado de la sumatoria es: "<<resultado<<endl;

	return 0;
}
