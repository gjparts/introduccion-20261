#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	
	double suma, raiz1, raiz2;
	suma = pow(x,2)+pow(y,2);
	raiz1 = pow(suma,1.0/5.0);
	raiz2 = pow(raiz1,1.0/7.0);
	cout << "resultado: " << raiz2 << endl;
	
	cout << "resultado: " << pow(pow(pow(x,2)+pow(y,2),1.0/5.0),1.0/7.0) << endl;
	
	return 567;
}
