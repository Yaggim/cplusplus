/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include<iostream>

using namespace std;

int main(){
	
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Ingrese la edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese el sexo: "<<endl;
	cin>>sexo;
	cout<<"Ingrese la altura: "<<endl;
	cin>>altura;
	
	cout<<"\nLa edad es: "<<edad;
	cout<<"\nEl sexo es: "<<sexo;
	cout<<"\nLa altura es: "<<altura<<endl;
	
	return 0;
}
