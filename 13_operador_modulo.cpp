#include<iostream>
using namespace std;
int main(){
	/*Operador Modulo
	Devuelve el residuo de una division de numeros
	enteros.
	En C++ se representa con el signo porcentaje %
	Ejemplo:
	Lea dos numeros enteros y luego imprima el cociente
	y el residuo de la division entre ambos.*/
	int dividendo, divisor;
	cout << "Dividendo: ";
	cin >> dividendo;
	cout << "Divisor: ";
	cin >> divisor;
	
	cout << "El cociente es: " << dividendo/divisor << endl;
	cout << "El residuo es: " << dividendo%divisor << endl;
	
	return 777;
}
