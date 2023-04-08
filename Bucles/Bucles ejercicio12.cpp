/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int numero, resultado=0;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i=1;i<=numero; i++){
		
		if(i%2 ==0){
			resultado-=i;
		}else{
			resultado+=i;
		}
	}
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	system("pause");
	
	return 0;
}
