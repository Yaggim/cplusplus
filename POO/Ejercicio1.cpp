/*EJERCICIO 1: Construya una clase llamada Rectangulo que tenga los siguientes atributos:
 largo y ancho, y los siguientes metodos: perimetro() y area().
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Rectangulo{
	
	private:
		float largo;
		float ancho;
	public:
		Rectangulo(float, float);
		void perimetro();
		void area();
};

	Rectangulo::Rectangulo(float _largo, float _ancho){
		largo = _largo;
		ancho = _ancho;
	}
	
	void Rectangulo::perimetro(){
		cout<<"El perimetro de el rectangulo es: "<<2*(largo+ancho)<<endl;
	}
	
	void Rectangulo::area(){
		cout<<"El area de el rectangulo es: "<<largo*ancho<<endl;
	}
	
	int main(){
		
		Rectangulo r1 = Rectangulo(10,15);
		
		r1.area();
		r1.perimetro();
		
		return 0;
	}
