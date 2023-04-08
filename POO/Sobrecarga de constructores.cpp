//Sobrecarga de constructores

#include <iostream>
#include <stdlib.h>

using namespace std;

class Fecha{
	private:
		int dia;
		int mes;
		int anio;
	public:
		Fecha(int, int, int); //constructor1
		Fecha(long);//constructor2
		void mostrarFecha();
};

Fecha::Fecha(int _dia,int _mes,int _anio){
	dia = _dia;
	mes = _mes;
	anio = _anio;	
}
Fecha::Fecha(long fecha){
	anio = int(fecha/10000); //extraer anio
	mes = int((fecha-anio*10000)/100); //extraer mes
	dia = int(fecha-anio*10000-mes*100); //extraer dia
}

void Fecha::mostrarFecha(){
	cout<<"La fecha es: "<<dia<<'/'<<mes<<'/'<<anio<<endl;
}

int main(){
	
	Fecha hoy = Fecha(16,03,2023);
	Fecha maniana = Fecha(20230317);
	
	hoy.mostrarFecha();
	maniana.mostrarFecha();
	
	system("pause");
	return 0;
}
