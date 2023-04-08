/*Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine
 el mayor elemento del vector.*/
 
 #include <iostream>
 #include <stdlib.h>
 
 using namespace std;
 
 int main(){
 	
 	int vectorEnteros[100], largo, mayor, posicion;
	 
	cout<<"Ingrese el largo del vector: "; cin>>largo; 
	
	if(largo>0){
	cout<<"Ingrese el numero del indice 0: "; cin>>vectorEnteros[0];
	mayor=vectorEnteros[0];
	posicion=0;
	}
	
	for(int i=1;i<largo;i++){
		cout<<"Ingrese el numero del indice "<<i<<": "; cin>>vectorEnteros[i];
		
		if(mayor<vectorEnteros[i]){
			mayor=vectorEnteros[i];
			posicion=i;
		}
	}
 	
 	cout<<"\nEl numero mayor es "<<mayor<<" y se encuentra en el indice "<<posicion<<" del vector"<<endl;
 	
 	system("pause");
 	
 	return 0;
 }

