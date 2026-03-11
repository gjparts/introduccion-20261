#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que pregunte el valor de un producto.
	Si el producto vale mas de 2000 entonces se le dara
	un descuento del 10%. Tambien se le va imprimir un
	mensaje que diga: FELICIDADES HAS OBTENIDO UN DESCUENTO.

	De lo contrario el programa no dara descuento
	e imprimira un mensaje indicando que solo productos
	arriba de 2000 tienen descuento.

	Si el producto tiene descuento imprima
	el valor del descuento y el total a pagar.*/
	
	//si una variable depende del cumplimiento de una condicion
	//lo mas recomendable es inicializarla en este caso con CERO
	float precio, descuento = 0;
	
	cout << "Digite el precio del producto: ";
	cin >> precio;
	
	if(precio > 2000)
	{
		descuento = precio*0.10;
		cout << "FELICIDADES HAS OBTENIDO UN DESCUENTO" << endl;
		cout << "Valor del descuento: " << descuento << endl;
		cout << "Total a pagar: " << precio-descuento << endl;
	}
	else
		cout << "SOLO PRODUCTOS ARRIBA DE 2000 TIENEN DESCUENTO" << endl;
	
	return 123;
}





