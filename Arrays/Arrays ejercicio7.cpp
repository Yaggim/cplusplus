/*Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido
 de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido
  por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.*/
  
  #include <iostream>
  #include <stdlib.h>
  
  using namespace std;
  
  int main(){
  	
  	char vectorCaracteres1[]= {'c','a'};
	char vectorCaracteres2[]={'b', 'j','!'};
	char vectorCaracteres3[5];
	
	for(int i=0;i<2;i++){
		vectorCaracteres3[i]=vectorCaracteres1[i];
	}  	
	for(int i=0;i<3;i++){
		vectorCaracteres3[i+2]=vectorCaracteres2[i];
	}  	
		cout<<"\nLa suma de los caracteres de primer vector y el segundo es: ";
	for(int i=0;i<5;i++){
		cout<<vectorCaracteres3[i];
	}
  	cout<<"\n"<<endl;
  	system("pause");
  	return 0;
  }

