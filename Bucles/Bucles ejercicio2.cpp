/*Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
 En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que 
cero leídos.*/


#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int numero, contador = 0;
	
	do{
	cout<<"Ingrese un numero: "; cin>>numero;
	
	if(numero>0){
		contador++;
	}
	
	}while(numero!=0);
	
	cout<<"El numero de veces que introdujo numeros mayores a cero es: "<<contador<<endl;
	
	system("pause");
	
	return 0;
}
