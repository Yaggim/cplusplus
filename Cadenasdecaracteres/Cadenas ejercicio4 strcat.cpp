/*4. Crear una cadena que tenga la siguiente frase: "Hola que tal", luego crear
otra cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre al
final de la primera cadena y mostrar el mensaje completo:
"Hola que tal (NombreDelUsuario)"*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadena1[]= "Hola que tal ";
	char nombre[100];
	
	cout<<"Ingrese su nombre: "; cin.getline(nombre,100,'\n');
	
	strcat(cadena1,nombre);
	
	cout<<cadena1<<endl;
	
	getch();	
	
	
	return 0;
}
