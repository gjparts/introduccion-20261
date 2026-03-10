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
	
	//Forma 2:
	double venta, descuento;
	cout << "Digite lo vendido: ";
	cin >> venta;
	
	if( venta >= 10000 )
		descuento = venta*0.50;
	else
		if( venta >= 5000 )
			descuento = venta*0.30;
		else
			if( venta >= 1000 )
				descuento = venta*0.20;
			else
				if( venta >= 0 )
					descuento = venta*0.10;
				else
					descuento = 0;
	
	cout << "El descuento es: " << descuento << endl;
	
	return 123;
}
