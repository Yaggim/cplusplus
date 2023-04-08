/*Escriba un programa que calcule las soluciones de una ecuacion
de segundo grado de la forma ax^2+bx+c=0, teniendo en cuenta que 
se resuelve con la formula general.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float a, b, c, raiz1=0, raiz2=0;
	
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	
	raiz1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	raiz2= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"\nLa raiz1 es: "<<raiz1<<endl;	
	cout<<"\nLa raiz2 es: "<<raiz2<<endl;	

	return 0;
}
