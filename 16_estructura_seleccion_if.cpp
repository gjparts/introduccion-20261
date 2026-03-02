#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que pregunte un numero al usuario.
	El programa va a imprimir si el numero digitado es
	positivo o negativo.*/
	double n;
	cout << "Digite un numero: ";
	cin >> n;
	
	if( n >= 0 )
		cout << "Positivo" << endl;
	else
		cout << "Negativo" << endl;

	/*En una tienda se da un descuento de acuerdo
	al monto vendido.
	Si el monto es mayor que 10000 entonces damos
	un descuento del 20% sobre el valor de lo vendido
	de lo contrario no damos descuento.
	Capture el monto vendido e imprima el valor
	del descuento y el valor final a pagar.*/
	float venta, descuento;
	cout << "Digite por favor el monto de la venta: ";
	cin >> venta;
	
	if( venta > 10000 )
		descuento = venta*0.20;
	else
		descuento = 0;
	
	cout << "El descuento es: " << descuento << endl;
	cout << "El total pagar es: " << venta-descuento << endl;
	
	return 123;
}












