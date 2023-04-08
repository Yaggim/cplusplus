/*2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y
copiar todo su contenido hacia otro arreglo de caracteres*/


#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadena1[100];
	char cadena2[100];
	
	cout<<"Ingrese una o varias palabras: ";
	cin.getline(cadena1,100,'\n');
	
	strcpy(cadena2,cadena1);
	
	cout<<cadena2<<endl;
	
	system("pause");
	
	return 0;
}
