#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,y,z;
	cout << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;
	cout << "z:";
	cin >> z;
	
	double numerador, denominador, division, raiz;
	numerador = x-z;
	denominador = pow(y,3);
	division = pow(numerador/denominador,2);
	raiz = pow(division,1.0/4.0);
	cout << "Resultado: " << raiz << endl;
	
	cout << "Resultado: " << pow(pow((x-z)/pow(y,3),2),1.0/4.0) << endl;
	
	return 678;
}
