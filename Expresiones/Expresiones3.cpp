//2. Escribe la siguiente expresion en c++ (a+b)/(c+d)

#include<iostream>

using namespace std ;

int main(){

float a = 0;
float b = 0;
float c = 0;
float d = 0;
float resultado = 0;

cout<<"Ingrese el valor de a: ";
cin>>a;
cout<<"Ingrese el valor de b: ";
cin>>b;
cout<<"Ingrese el valor de c: ";
cin>>c;
cout<<"Ingrese el valor de d: ";
cin>>d;

resultado = (a+b)/(c+d);

cout.precision(2);
cout<<"El resultado es: "<<resultado<<endl;

return 0;
}
	
	
