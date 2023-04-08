/*Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n*/


#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	int numero, resultado=0;
	
	cout<<"Ingrese un numero: ";  cin>>numero;
	
	for(int i=1; i<=numero; i++){
		
		resultado += pow(2,i);
	}
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	getch();
	
	return 0;
}
