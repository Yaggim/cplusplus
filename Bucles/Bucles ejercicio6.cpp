/*Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos,
 sin utilizar la función pow.*/
 
 
 #include <iostream>
 
 using namespace std;
 
 int main(){
 	
 int x, y, resultado;
 
 	cout<<"Ingrese el valor de x: ";  cin>>x;
 	cout<<"\nIngrese el valor de y: "; cin>>y;
 	
 	for(int i=1; i<=y; i++){
 		
 		resultado+=x*x;
 	}
 	
 	cout<<"\nEl resultado de "<<x<<" elevado a la "<<y<<" es: "<<resultado<<endl;
 	
 	return 0;
 }
