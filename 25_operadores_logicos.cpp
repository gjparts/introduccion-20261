#include<iostream>
using namespace std;

int main(){
	/*Solicite al usuario que digite los
	valores para a,b,c.
	Si a es mayor a 5 Y b es menor a 9
	Y c es igual a 7 entonces muestre el mensaje:
	COMBINACION CORRECTA.
	De lo contrario muestre: ACCESO NO VALIDO.
	-> Resuelvalo usando operadores logicos.*/
	int a,b,c;
	cout << "a: ";
	cin >> a;	
	cout << "b:";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	if( a > 5 && b < 9 && c == 7 )
		cout << "COMBINACION CORRECTA";
	else
		cout << "ACCESO NO VALIDO";
		
	cout << endl;
	
	return 123;
}
