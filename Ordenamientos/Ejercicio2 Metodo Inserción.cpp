#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numeros[10];
	int aux, pos;
	
	for(int i = 0; i<10; i++){
		cout<<"Ingrese el numero de la posicion["<<i<<"]: ";
		cin>>numeros[i];
	}
	
	for(int i=0; i<10;i++){
		pos = i;
		aux = numeros[i];  //guardo el numero de la posición actual en un auxiliar
		
		while((pos>0)&&(numeros[pos-1]>aux)){  //si la posicion es mayor a 0 y el numero anterior es mayor
			numeros[pos] = numeros[pos-1];    //entonces reemplazo el de la derecha por el actual
			pos--;							//retrocedo una posicion
		}
		numeros[pos] = aux;					
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
