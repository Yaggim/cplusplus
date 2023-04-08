/*Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados
 de los 10 primeros enteros mayores que cero.*/
 
 #include <iostream>
 #include <conio.h>
 #include <math.h>
 
 using namespace std;
 
 int main(){
 	
 	int suma = 0;
 	
 	for(int i=1;i<=10;i++){
 		
 		cout<<"El cuadrado de "<<i<<" es: "<<pow(i,2)<<endl;
 		
 		suma+=pow(i,2);
 	}
 	
 	cout<<"La suma de los cuadrados es: "<<suma;
 	
 	return 0;
 }
