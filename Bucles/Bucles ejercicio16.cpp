/*Ejercicio 16: Realice un programa que calcule la descomposición en factores primos de un número entero.
Por ejemplo: 20 = 2*2*5.*/


#include <iostream>
using namespace std;
 
int main() {
  int numero,factor;
 
  cout <<"Ingrese un numero > 1:";
  cin >>numero;
  factor = 2;
 
  while (numero>1) {
    if (numero%factor==0) {
      cout << factor << " ";
      numero = numero/factor;
    }
    else
      factor++;
  }
 
  return 0;
}
