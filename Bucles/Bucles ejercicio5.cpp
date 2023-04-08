/*Ejercicio 5: Escriba un programa que lea valores enteros 
hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. 
El programa debe entregar la suma de los valores mayores a 0 introducidos.*/


#include <iostream>

using namespace std;

int main(){
	
	int numero, sumatoria;
	
	do{
		cout<<"Ingrese un numero: "; cin>>numero;
		
		if(numero>0)
		sumatoria+=numero;
	}
	while(numero!=0 && (numero<20 || numero>30));
	
	cout<<"\nLa sumatoria de los numeros mayores a 0 es: "<<sumatoria<<endl;
	
	return 0;
}
