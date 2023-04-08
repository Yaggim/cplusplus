/*Realice un programa que calcule el valor que toma la siguiente funcion para
unos valores dados de x e y  f(x,y)= raizx/y´2-1*/

#include <iostream>
#include <cmath> //Libreria matematica y trigonometrica de c++

using namespace std;


int main(){
	
	float resultado = 0, x, y;
	
	cout<<"Ingrese el valor de x: "; cin>>x;
	cout<<"Ingrese el valor de y: "; cin>>y;
	
	//sqrt hace la raiz cuadrada, pow hace la potencia
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;	
	
	return 0;
}
