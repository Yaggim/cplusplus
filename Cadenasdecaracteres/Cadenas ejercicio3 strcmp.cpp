/*Ejercicio 3: Pedir al usuario que digite dos cadenas de caracteres, 
e indicar si ambas cadenas son iguales, en caso de no serlo, indicar cuales mayor alfabeticamente*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadena1[100];
	char cadena2[100];
	
	cout<<"Ingrese la primer cadena de caracteres: \n"; cin.getline(cadena1,100,'\n');
	cout<<"Ingrese la segunda cadena de caracteres: \n"; cin.getline(cadena2,100,'\n');
	
	if(strcmp(cadena1,cadena2)==0){
		cout<<"Ambas cadenas son iguales: "<<cadena1<<" = "<<cadena2<<endl;
	}else{
		cout<<"Ambas cadenas son diferentes: "<<cadena1<<" != "<<cadena2<<endl;
	}
	if(strcmp(cadena1,cadena2) < 0){
		cout<<cadena1<<" esta primero en el abecedario que "<<cadena2<<endl;
	}else if (strcmp(cadena1,cadena2) > 0){
		cout<<cadena2<<" esta primero en el abecedario que "<<cadena1<<endl;
	}
	getch();
	
	return 0;
}
