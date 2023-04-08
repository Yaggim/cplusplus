/*Ejercicio 15: Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100.
 El programa debe generar un numero aleatorio en ese mismo rango[1-100],  e indicarle al usuario
 si el numero que dígito es menor o mayor al numero aleatorio, así hasta que lo adivine.
 y por ultimo mostrarle el numero de intentos que le llevo.*/
 
 #include <iostream>
 #include<stdlib.h>
 #include<time.h>
 
 using namespace std;
 
 int main(){
 	
 	srand(time(NULL));
 	int numero, aleatorio, contador=0;
 	
 	aleatorio = 1+rand()%(101-1);
 	
 	cout<<"Bienvenido al juego de adivinar!!\n\n";
 	
 	do{
 		cout<<"Adivine el numero: "; cin>>numero;
 		
 		if(numero>aleatorio){
 			cout<<"\nEl numero a adivinar es menor intente nuevamente..\n"<<endl;
 		}else if(numero<aleatorio){
 			cout<<"\nEl numero a adivinar es mayor intente nuevamente..\n"<<endl;
 		}
 		contador++;
 	}while(numero!=aleatorio);
 	
 	cout<<"\nFelicitaciones acertaste!!"<<endl;
 	cout<<"\nEl numero es: "<<aleatorio<<endl;
 	cout<<"\nEl numero de intentos fue: "<<contador<<endl;
 	
 	
 	
 	return 0;
 }
