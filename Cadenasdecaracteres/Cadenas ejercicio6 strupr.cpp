/*Ejercicio 6. Convertir dos cadenas de texto de minusculas a MAYUSCULAS. Compararlas, 
y decir si son iguales o no.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadena1[100];
	char cadena2[100];
	
	cout<<"Ingrese una palabra o frase: "; cin.getline(cadena1,100,'\n');
	cout<<"\nIngrese otra palabra o frase: "; cin.getline(cadena2,100,'\n');
	
	strupr(cadena1);
	strupr(cadena2);
	
	if(strcmp(cadena1,cadena2)==0){
		cout<<"Las palabras o frases: "<<cadena1<<" son iguales"<<endl;
	}else{
		cout<<"Las palabras o frases son diferentes"<<endl;
	}
	
	getch();  
	return 0;
}
