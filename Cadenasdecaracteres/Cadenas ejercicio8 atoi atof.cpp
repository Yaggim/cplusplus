/*8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real,
convertirlos a sus respectivos valores y por ultimo sumarlos*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	
	char entero[100];
	char real[100];
	int numeroEntero;
	float numeroReal;
	float suma=0;
	
	cout<<"Ingrese un numero entero: "; cin.getline(entero,100,'\n');
	cout<<"Ingrese un numero real: "; cin.getline(real,100,'\n');
	
	
	numeroReal = atof(real);
	numeroEntero = atoi(entero);
	
	
	suma=numeroEntero+numeroReal;
	
	cout<<suma<<endl;
	
	system("pause");
	return 0;
}
