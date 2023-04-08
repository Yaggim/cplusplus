/*1. Hacer un programa que pida al usuario que digite una cadena de caracteres,
luego verificar la longitud de la cadena, y si esta supera a 10 caracteres
mostrarla en pantalla, caso contrario no mostrarla*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(){
	
	char cadena[20];
	int longitud=0;
	
	cout<<"Ingrese una o varias palabras: ";
	cin.getline(cadena,20,'\n');
	
	longitud =  strlen(cadena);
	
	if(longitud>=10){
		cout<<"\n"<<cadena<<endl;
	}else{
		cout<<"\nLa cadena de caracteres es muy corta"<<endl;
	}
	
	system("pause");
	return 0;
}
