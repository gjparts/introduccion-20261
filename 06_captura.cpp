#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a,b,c,d;
	cout << "Digite el precio del primer producto: ";
	cin >> a;
	cout << "Digite el precio del segundo producto: ";
	cin >> b;
	cout << "Digite el precio del tercer producto: ";
	cin >> c;
	cout << "Digite el precio del cuarto producto: ";
	cin >> d;
	
	double suma = a+b+c+d;
	double isv = suma*0.15;
	double pagar = suma+isv;
	
	cout << "La suma de los precios es: " << round(suma*100)/100 << endl;
	cout << "El ISV (15%) es : " << round(isv*100)/100 << endl;
	cout << "El Total a pagar es : " << round(pagar*100)/100 << endl;
	
	cout << "el valor original de suma es: " << suma << endl;
	cout << "el valor original de isv es: " << isv << endl;
	cout << "el valor original de pagar es: " << pagar << endl;
	
	return 777;
}

