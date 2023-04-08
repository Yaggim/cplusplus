#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int numeros[10];
	int min, aux;
	
	for(int i = 0; i<10; i++){
		cout<<"Ingrese el numero de la posicion["<<i<<"]: ";
		cin>>numeros[i];
	}
	
	for(int i=0; i<10;i++){
		min=i;
		for(int j=i+1; j<10;j++){
			if(numeros[j]<numeros[min]){
				min = j;
			}
		}
		aux=numeros[i];
		numeros[i]=numeros[min];
		numeros[min]=aux;
	}
		
	cout<<"\nOrden ascendente: ";
	for(int i = 0;i<10; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\nOrden descendente: ";
	for(int i = 9;i>=0; i--){
		cout<<numeros[i]<<" ";
	}
	
	
	getch();
	return 0;
}
