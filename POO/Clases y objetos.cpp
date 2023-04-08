#include <iostream>
#include <stdlib.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Persona{
	private: //encapsulamiento de atributos
		int edad; //abstraccion
		string nombre;
	public: //metodos
		Persona(int,string); //constructor						
		void leer();
		void correr();
};

//constructor, nos sirve para incializar los atributos de las clases
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){ //leer pertenece a la clase persona
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}
void Persona::correr(){//correr pertenece a la clase persona
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" años"<<endl;
}

int main(int argc, char** argv) {
	
	Persona p1 = Persona(12,"Marcelo");
	p1.leer();
	Persona p2 = Persona(25,"Camila");
	p2.correr();
	
	system("pause");
	return 0;
}

