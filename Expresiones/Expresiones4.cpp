//Escribe la siguiente expresion en c++ a + b/(c-d)

#include <iostream>

using namespace std;

int main(){
	
	float a, b, c, d, resultado = 0;
	
	cout<<"ingrese el valor de a: "; cin>> a;
	cout<<"ingrese el valor de b: "; cin>> b;
	cout<<"ingrese el valor de c: "; cin>> c;
	cout<<"ingrese el valor de d: "; cin>> d;
	
	resultado = a + (b/(c-d));
	
	cout<<"\n el resultado es: "<<resultado<<endl;
	
	return 0;
}



