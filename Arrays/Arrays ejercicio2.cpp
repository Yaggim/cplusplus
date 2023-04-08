/*Ejercicio 2: Escribe un programa que defina un vector de números y calcule
 la multiplicación acumulada de sus elementos.*/
 
 #include <iostream>
 #include <conio.h>
 
using namespace std;

int main(){
	
	int vectorNumeros[5];
	int resultado=1;
	
	cout<<"Ingrese 5 elementos a ser multiplicados: \n\n";
	
	for(int i = 0; i<5;i++){
	cin>>vectorNumeros[i];
	resultado*=vectorNumeros[i];
	}	
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	getch();

	
	return 0;
}
