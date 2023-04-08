/*Ejercicio 9: Realice un programa que lea una cadena de caracteres de 
la entrada estándar y muestre en la salida estándar 
cuántas ocurrencias de cada vocal existen en la cadena.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadena[10];
	int longitud = 0;
	int vocalA = 0, vocalE=0,vocalI=0,vocalO=0,vocalU=0;
	
	cout<<"Ingrese una palabra o frase: "; cin.getline(cadena,10,'\n');
	
	longitud = strlen(cadena);
	
	strlwr(cadena);
	
	for(int i=0;i<=longitud;i++){
		
		switch(cadena[i]) {
			case 'a':
				vocalA++;
			break;
			case 'e':
				vocalE++;
			break;
			case 'i':
				vocalI++;
			break;
			case 'o':
				vocalO++;
			break;
			case 'u':
				vocalU++;
			break;
		}
	}
	
	cout<<"\nLa cantidad de A es: "<<vocalA<<endl;
	cout<<"\nLa cantidad de E es: "<<vocalE<<endl;
	cout<<"\nLa cantidad de I es: "<<vocalI<<endl;
	cout<<"\nLa cantidad de O es: "<<vocalO<<endl;
	cout<<"\nLa cantidad de U es: "<<vocalU<<endl;
	
	
	getch();	
	return 0;
}
