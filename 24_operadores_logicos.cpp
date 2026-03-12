#include<iostream>
using namespace std;
int main(){
	/*Operadores logicos para condiciones
	En c++ existen tres operadores logicos
	1) AND	&&
	2) OR	||    alt+124
	3) NOT	!
	
	Operador logico AND: hace obligatorio el
	cumplimiento de dos o mas condiciones.
	Ejemplo:
	Haga un programa que pida tres numeros
	e imprima el mayor de ellos.
	*/
	double a,b,c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	cout << "El mayor es: ";
	if( a >= b && a >= c ) cout << a << endl;
	if( b >= a && b >= c ) cout << b << endl;
	if( c >= a && c >= b ) cout << c << endl;
	
	/*Haga un programa que pida cuatro numeros e imprima
	el mayor de ellos*/
	float q,w,e,r;
	cout << "q: ";
	cin >> q;
	cout << "w: ";
	cin >> w;
	cout << "e: ";
	cin >> e;
	cout << "r: ";
	cin >> r;
	
	cout << "El mayor es: ";
	if( q >= w && q >= e && q >= r ) cout << q << endl;
	if( w >= q && w >= e && w >= r ) cout << w << endl;
	if( e >= q && e >= w && e >= r ) cout << e << endl;
	if( r >= q && r >= w && r >= e ) cout << r << endl;
	
	cout << "---------------------------" << endl;
	/*Haga un programa que pida cuatro numeros e imprima
	el mayor de ellos. Si todos son iguales que imprima
	el mensaje: TODOS SON IGUALES.*/
	
	float g,h,j,k;
	cout << "g: ";
	cin >> g;
	cout << "h: ";
	cin >> h;
	cout << "j: ";
	cin >> j;
	cout << "k: ";
	cin >> k;
	
	if( g == h && g == j && g == k )
		cout << "TODOS SON IGUALES" << endl;
	else
	{
		cout << "El mayor es: ";
		if( g > h && g > j && g > k ) cout << g << endl;
		if( h > g && h > j && h > k ) cout << h << endl;
		if( j > g && j > h && j > k ) cout << j << endl;
		if( k > g && k > h && k > j ) cout << h << endl;
	}
	
	return 777;
}
