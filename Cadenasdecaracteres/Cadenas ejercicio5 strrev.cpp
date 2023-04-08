/*Ejercicio 5: Hacer un programa que determine si una palabra es capicua*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[100];
	char copiaPalabra[100];
	
	cout<<"Ingrese una palabra: "; cin.getline(palabra,100,'\n');
	
	strcpy(copiaPalabra,palabra);
	strrev(palabra);
	
	if(strcmp(palabra,copiaPalabra)==0)	{
		cout<<"La palabra "<<copiaPalabra<<" es capicua"<<endl;
	}else{
		cout<<"La palabra "<<copiaPalabra<<" no es capicua"<<endl;
	}
	
	system("pause");
	return 0;	
}
