/*7. Pedir su nombre al usuario en MAYUSCULA, si
su nombre comienza por la letra A, convertir su
nombre a minuscula, caso contrario no convertirlo.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char nombre[100];
	
	cout<<"Ingrese su nombre en mayuscula: "; cin.getline(nombre,100,'\n');
	
	if(nombre[0]=='A'){
		cout<<"\nSu nombre comienza con A\n"<<endl;
		strlwr(nombre);
	}else{
		cout<<"\nSu nombre no comienza con A\n"<<endl;
	}
	
	cout<<nombre<<endl;
		
	
	getch();
	return 0;	
}
