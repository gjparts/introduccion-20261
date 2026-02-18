#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	double numerador, denominador, resultado;
	numerador = pow(a,3)+pow(b,2)+c;
	denominador = pow(a+b,1.0/5.0);
	resultado = numerador/denominador;
	
	cout << "Resultado: " << resultado << endl;
	
	cout << "Resultado: " << (pow(a,3)+pow(b,2)+c)/(pow(a+b,1.0/5.0)) << endl;
	
	return 123;
}
