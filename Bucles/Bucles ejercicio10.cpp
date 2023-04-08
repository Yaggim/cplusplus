/*Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int numero, factorial=1, sumatoria=0;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i = 1; i<=numero; i++){
		factorial*=i;
		sumatoria+=factorial;
	}
	
	cout<<"\nEl resultado es: "<<sumatoria<<endl;
	
	
	system("pause");
	return 0;
}
