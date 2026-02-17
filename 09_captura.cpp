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
	
	double discriminante, numerador, denominador, resultado;
	discriminante = pow(b,2)-4*a*c;
	numerador = -b+sqrt(discriminante);
	denominador = 2*a;
	resultado = numerador/denominador;
	
	cout << "Resultado: " << resultado << endl;
	
	cout << "Resultado: " << (-b + sqrt(pow(b,2)-4*a*c))/(2*a) << endl;
	
	return 777;
}
