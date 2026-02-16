#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a,b,c,d;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	cout << "d: ";
	cin >> d;
	
	double numerador = sqrt(a+pow(b,3));
	double denominador = pow(c*d,1.0/3.0);
	double resultado = numerador/denominador-7;
	cout << "Resultado: " << resultado << endl;
	
	return 123;
}
