//1. Escribe la siguiente expresion en c++ a/b + 1

#include<iostream>

using namespace std;

int main(){
	
	float total = 0;
	float numA = 0;
	float numB = 0;
	
	cout<<"Ingrese el numerador: ";
	cin>>numA;
	
	do{
	cout<<"Ingrese el denominador distinto de 0: ";
	cin>>numB;
	}while(numB==0);
	
	total = (numA/numB) + 1;
	
	cout.precision(2);// sirve para redondear despues de la coma
	cout<<"El resultado es: "<< total<<endl;//endl es para dar un salto de linea al final
	
	return 0;
}
