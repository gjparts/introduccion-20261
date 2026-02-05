#include<iostream>
using namespace std;

int main(){
	/*Ley de precedencia de operadores (PEMDAS)
	Las expresiones deben evaluarse de izquierda a derecha dando
	prioriedad a las operaciones de acuerdo a la tabla siguiente:
	a) Parentesis	()
	b) Exponentes	pow
	c) Multiplicaciones y Divisiones	* /
	d) Sumas y Restas	+ -
	e) operadores NOT	!
	f) operadores AND	&&		 ALT+38 (ampersand)
	g) operadores OR	||       ALT+124 (barra)
	*/
	double d1 = 5, d2 = 9, d3 = 2, d4 = 10;
	cout << d1+d2/d3 << endl;
	cout << (d1+d2)/d3 << endl;
	cout << (d1+d2)/(d1-d3)+d4 << endl;
	cout << ((d1+d2)/(d1-d3))+d4 << endl;
	cout << d1*((d2-d3)/d4) << endl;
	cout << d1*(d2-d3)/d4 << endl;
	
	cout << "--------------------------------" << endl;
	//Division de enteros versus Division de decimales
	//en C++ la division se efectua dependiendo del tipo de dato
	//de los valores que la alimentan:
	cout << "La division de 1/3 es: " << 1/3 << endl;
	cout << "La division de 1.0/3.0 es: " << 1.0/3.0 << endl;
	cout << "La division de 5/2 es: " << 5/2 << endl;
	cout << "La division de 5.0/2.0 es: " << 5.0/2.0 << endl;
	//si los datos de entrada son enteros la division no tomara en cuenta
	//la parte decimal
	//si los datos de entrada son double o float la division toma en cuenta
	//los decimales
	cout << "--------------------------------" << endl;
	
	return 345;
}



