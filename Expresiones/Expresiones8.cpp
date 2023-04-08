/* Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo
y de como resultado de salida su hipotenusa */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float cateto1, cateto2, hipotenusa = 0;
	
	cout<<"Escriba el primer cateto: "; cin>>cateto1;
	cout<<"Escriba el segundo cateto: "; cin>>cateto2;
	
	hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout.precision(3);
	cout<<"\nLa hipotenusa es igual a: "<<hipotenusa<<endl;
	
	return 0;
}
