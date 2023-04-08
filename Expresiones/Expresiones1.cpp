//3. Escribe la siguiente expresion en c++ (a+(b/c))/(d+(e/f))

#include<iostream>

using namespace std;

int main(){
	
	float total = 0;
	float numA = 0;
	float numB = 0;
	float numC = 0;
	float numD = 0;
	float numE = 0;
	float numF = 0;

	
	cout<<"Ingrese el numeroA: ";
	cin>>numA;
	
	cout<<"Ingrese el numeroB: ";
	cin>>numB;
	
	cout<<"Ingrese el numeroC: ";
	cin>>numC;
	
	cout<<"Ingrese el numeroD: ";
	cin>>numD;
	
	cout<<"Ingrese el numeroE: ";
	cin>>numE;
	
	cout<<"Ingrese el numeroF: ";
	cin>>numF;
	
	total = (numA+(numB/numC))/(numD+(numE/numF));
	
	cout.precision(2);// sirve para redondear despues de la coma
	cout<<"El resultado es: "<< total<<endl;//endl es para dar un salto de linea al final
	
	return 0;
}
