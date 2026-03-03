#include<iostream>
using namespace std;

int main(){
	//pregunte los valores a,b,c e imprima el mayor
	//de los tres numeros leidos.
	double a,b,c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	if(a >= b)
		if(a >= c)
			cout << "el mayor es " << a << endl;
		else
			cout << "el mayor es " << c << endl;
	else
		if(b >= c)
			cout << "el mayor es " << b << endl;
		else
			cout << "el mayor es " << c << endl;
	
	/*pregunte los valores a,b,c imprima el menor
	de los tres numeros leidos.
	Por favor hagalo sin ver el ejemplo anterior.*/
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	if(a <= b)
		if(a <= c)
			cout << "el menor es " << a << endl;
		else
			cout << "el menor es " << c << endl;
	else
		if(b <= c)
			cout << "el menor es " << b << endl;
		else
			cout << "el menor es " << c << endl;
			
	return 123;
}




