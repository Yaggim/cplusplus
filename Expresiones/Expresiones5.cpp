/* Escriba un fragmento de programa que intercambie los valores de dos variables*/

#include <iostream>

using namespace std;

int main(){
	
	float a, b, provicional;
	
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	
	cout<<"\nEl valor de a es: "<<a<<"\nEl valor de b es: "<<b;
	
	provicional = a;
	a = b;
	b = provicional;
	
	cout<<"\n\n ----SE ESTA PRODUCIENDO EL INTERCAMBIO ----\n\n";
	cout<<"\nEl nuevo valor de a es: "<<a<<"\nEl nuevo valor de b es: \n"<<b;		
	
	return 0;
}
