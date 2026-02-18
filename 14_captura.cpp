#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,y,z;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "z: ";
	cin >> z;
	
	double numerador, denominador, resultado;
	numerador = x-y;
	denominador = pow(z,1.0/8.0);
	resultado = pow(numerador/denominador,3);
	
	cout << "Resultado: " << resultado << endl;
	
	cout << "Resultado: " << pow((x-y)/pow(z,1.0/8.0),3) << endl;
	
	return 456;
}
