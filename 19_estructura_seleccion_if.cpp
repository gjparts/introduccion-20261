#include<iostream>
using namespace std;

int main(){
	/*Haga un prorgrama que pida el valor de lo vendido.
	Se dara un descuento de acuerdo a la tabla siguiente:
	Rango		Porcentaje descuento
	0 o mas		10%
	1000 o mas	20%
	5000 o mas	30%
	10000 o mas	50%
	De lo contrario descuento sera 0
	Imprima el valor del descuento*/
	
	//Forma 1:
	double venta;
	cout << "Digite lo vendido: ";
	cin >> venta;
	
	if( venta >= 10000 )
		cout << "El descuento es: " << venta*0.50 << endl;
	else
		if( venta >= 5000 )
			cout << "El descuento es: " << venta*0.30 << endl;
		else
			if( venta >= 1000 )
				cout << "El descuento es: " << venta*0.20 << endl;
			else
				if( venta >= 0 )
					cout << "El descuento es: " << venta*0.10 << endl;
				else
					cout << "No hay descuento" << endl;
	
	return 123;
}








