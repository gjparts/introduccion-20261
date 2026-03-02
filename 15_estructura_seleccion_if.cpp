#include<iostream>
using namespace std;

int main(){
	/*Estructura de seleccion:
	Es una construnccion que permite al programa
	tomar decisiones y ejecutar distintos
	bloques de codigo segun se cumpla o no
	una condicion.
	
	O sea, es lo que hace que el programa
	no siempre haga lo mismo sino que pueda
	variar o elegir diferentes caminos.
	
	En C++ existen dos estructuras de seleccion:
	1) if
	2) switch
	
	Estructura de seleccion if
	Esta utiliza los operadores de comparacion para evaluar los valores
	de una o mas variables.
	
	Operadores de comparacion:
	>	mayor
	<	menor
	==	igual
	>=	mayor o igual
	<=	menor o igual
	!=	distinto de
	*/
	
	//ejemplos:
	double a,b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	
	if( a == b )
		cout << "a es igual a b" << endl;
		
	if( a != b )
		cout << "a es diferente a b" << endl;
	
	if( a > b )
		cout << "a es mayor a b" << endl;
	
	if( a < b )
		cout << "a es menor a b" << endl;
	
	if( a >= b )
		cout << "a es mayor o igual a b" << endl;
	
	if( a <= b )
		cout << "a es menor o igual a b" << endl;
	
	cout << "--------------------------------" << endl;
	
	/*Ejercicio: realice un programa que solicite al usuario su calificacion.
	El programa va a mostrar un mensaje indicando si se aprobo o reprobo.
	-> Si la calificacion es mayor o igual a 60 muestre: APROBADO
	-> Si la calificacion es menor que 60 muestre: REPROBADO*/
	
	return 123;
}











