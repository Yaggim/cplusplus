/*Escribe un programa que lea de la entrada estandar el precio de un producto y muestre 
en la salida estandar el precio del producto al aplicarle el iva*/

#include<iostream>

using namespace std;

int main(){
	
	float precio,totalIva;
	
	cout<<"Ingrese el precio del producto: ";
	cin>>precio;
	
	totalIva= precio*1.21;
	
	cout<<"/nEl precio del producto con iva es: "<<totalIva;	
	
	return 0;
}
