/*Ejercicio 4: Escribe un programa que defina un vector de n�meros y muestre
 en la salida est�ndar el vector en orden inverso�del �ltimo al primer elemento.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int vectorNumeros[100], largo;
	
	cout<<"Ingrese el largo del vector: "; cin>>largo;
	
	for(int i=0;i<largo;i++){
		cout<<"Ingrese el numero de la posicion "<<i<<" : "; cin>>vectorNumeros[i];
	}
	for(int i=largo-1;i>=0;i--){
		cout<<"El numero de la posicion "<<i<<" es: "<<vectorNumeros[i]<<"\n";
	}
	
	getch();
	return 0;
}
