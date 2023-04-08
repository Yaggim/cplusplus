/*Ejercicio 14: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: 
 a) Alumnos que aprobaron todos los exámenes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron únicamente el último examen.
 
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.*/

#include <iostream>

using namespace std;

int main(){
	
	int contadorTodos=0, contadorAlM1=0, contadorUltimo=0;
	float nota1=0, nota2=0, nota3=0;
	
	for(int i=1;i<=5;i++){
	
		cout<<"\nIngrese la nota del primer examen del alumno "<<i<<": "; cin>>nota1;
		cout<<"\nIngrese la nota del segundo examen del alumno "<<i<<": "; cin>>nota2;
		cout<<"\nIngrese la nota del tercer examen del alumno "<<i<<": "; cin>>nota3;
		
		if(nota1>=7 && nota2>=7 && nota3>=7){
			contadorTodos++;
		}
		if(nota1>=7 || nota2>=7 || nota3>=7){
			contadorAlM1++;
		}
		if(nota3>=7){
			contadorUltimo++;
		}
	}
	
		cout<<"\nLa cantidad de alumnos que aprobaron todos los examenes son: "<<contadorTodos;
		cout<<"\nLa cantidad de alumnos que aprobaron al menos un examen son: "<<contadorAlM1;
		cout<<"\nLa cantidad de alumnos que aprobaron solo el tercer examen son: "<<contadorUltimo;
		
	return 0;
}
