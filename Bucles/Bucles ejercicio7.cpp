/*Ejercicio 7: Escriba un programa que calcule el valor de: 1+2+3+...+n*/


#include <iostream>

using namespace std;

int main(){
	
	int resultado, numero;
	
	cout<<"Ingrese un numero a hacer su sumatoria: "; cin>>numero;
	
	for(int i=1;i<=numero;i++){
		resultado+=i;
	}
	
	cout<<"\nEl resultado de la sumatoria es: "<<resultado<<endl;
	
	
	return 0;
}
