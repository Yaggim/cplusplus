/*7. La calificacion final de un estudiante es la media ponderada de tres notas:
La nota de practicas que cuenta con un 30% del total, la nota teórica que cuenta un
60% y la nota de participacion que cuenta el 10% restante. Escriba un programa
que lea de la entrada estandar las tres notas de un alumno y escriba en la 
salida estandar su nota final*/

#include <iostream>

using namespace std;

int main(){
	
	float resultado = 0, nota1, nota2, nota3;
	
	cout<<"Ingrese la nota1: "; cin>>nota1;
	cout<<"Ingrese la nota2: "; cin>>nota2;
	cout<<"Ingrese la nota3: "; cin>>nota3;

	nota1= nota1*0.3;
	nota2 *= 0.6;
	nota3 *= 0.1;
	
	resultado= nota1+nota2+nota3;
	
	cout<<"\nla nota final es: "<<resultado<<endl;
	
	return 0;
}
