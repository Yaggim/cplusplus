/*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, 
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. 
Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	float temp=0, tempM=0, tempB=0, tempA=0;
	
	int i = 4;
	
	do{
		
		cout<<"Ingrese la temperatura de la hora: "<<i<<" es: "; cin>>temp;
				
		if(i==4){
			tempB=temp;
		}
		
		if(temp>tempA){
			tempA=temp;
		}
		if(temp<tempB){
			tempB=temp;
		}
		tempM+=temp;
		i+=4;
		
	}while(i<=24);	
	
		cout<<"\nLa temperatura maxima es: "<<tempA;
		cout<<"\nLa temperatura minima es: "<<tempB;
		cout<<"\nLa temperatura media es: "<<tempM/6;
	
	
	return 0;
}
