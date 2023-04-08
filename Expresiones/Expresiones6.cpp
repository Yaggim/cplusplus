// Nota media de cuatro alumnos

#include <iostream>

using namespace std;

int main(){
	
	float media = 0;
	float a1, a2, a3, a4;
	
	cout<<"Ingrese la nota del alumno 1: "; cin>>a1;
	cout<<"Ingrese la nota del alumno 2: "; cin>>a2;
	cout<<"Ingrese la nota del alumno 3: "; cin>>a3;
	cout<<"Ingrese la nota del alumno 4: "; cin>>a4;
	
	media = (a1+a2+a3+a4)/4;
	
	cout<<"\nLa media de las nota de los alumnos es: "<<media<<endl;
	
	return 0;
}
