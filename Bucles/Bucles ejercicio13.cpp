/*Ejercicio 13: Hacer un que realice la serie fibonacci -- 1 1 2 3 5 8 13...n  */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero, x=0, y=1, z=1;
	
	cout<<"Ingrese un numero para la serie de fibonacci: "; cin>>numero;
	cout<<"1 ";
	for(int i=1; i<numero; i++){
		z = x + y;
		cout<<z<<" ";
		x=y;
		y=z;
	}
	
	return 0;
}
