#include<iostream>
using namespace std;

int main(){
	//Captura de valores usando la consola/terminal del sistema
	//se utiliza la instruccion: cin
	//que significa console input
	
	//captura, lectura de datos:
	float x,y;
	cout << "Digite un precio: ";
	cin >> x;
	cout << "Digite otro precio: ";
	cin >> y;
	
	float suma = x+y;
	cout << "La suma de ambos precios es: " << suma << endl;
	float impuesto = suma*0.15;
	cout << "El ISV del 15% es: " << impuesto << endl;
	float total = suma+impuesto;
	cout << "El Total a pagar es: " << total << endl;
	
	return 123;
}
