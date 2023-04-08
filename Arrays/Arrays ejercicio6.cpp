/*Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número en el vector
 cuyo valor equivale a la suma del resto de números del vector.*/
 
 #include <iostream>
 #include <conio.h>
 
 
using namespace std;


int main(){
	
	int vectorEnteros[100], largo, mayor, total;
	
	cout<<"Ingrese el largo del vector: "; cin>>largo; 
	
	if(largo>0){
	cout<<"Ingrese el numero del indice 0: "; cin>>vectorEnteros[0];
	mayor=vectorEnteros[0];
	total=mayor;
	}
	
	for(int i=1;i<largo;i++){
		cout<<"Ingrese el numero del indice "<<i<<": "; cin>>vectorEnteros[i];
		
		if(mayor<vectorEnteros[i]){
			mayor=vectorEnteros[i];
		}
		total+=vectorEnteros[i];
	}
	
	if(mayor==total-mayor){
		cout<<"\nLa suma de los numeros restantes es igual al mayor: "<<mayor<<"!!"<<endl;
	}else{
		cout<<"\nNo existe ningun numero que sea igual a la suma de los demas"<<endl;
	}
	
	getch();
	return 0;
}
