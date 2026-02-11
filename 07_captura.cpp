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
	
	//existen muchas forma de resolverlo
	//forma 1: calcular todo al imprimir
	cout << "El resultado es: " << (a+b)/(c-d) << endl;
	cout << "El resultado a dos decimales es: " << round(((a+b)/(c-d))*100)/100 << endl;
	
	//forma 2: separar el numerador del denominador en variables
	//pero calcular la division en la impresion
	double numerador = a+b;
	double denominador = c-d;
	cout << "El resultado es: " << numerador/denominador << endl;
	cout << "El resultado a dos decimales es: " << round(numerador/denominador*100)/100 << endl;
	
	//forma 3: realizar todo el calculo y depositarlo en una variable
	double resultado = (a+b)/(c-d);
	cout << "El resultado es: " << resultado << endl;
	cout << "El resultado a dos decimales es: " << round(resultado*100)/100 << endl;
	
	//forma 4: separar numerador y denominador, asi como resultado en variables
	double num = a+b;
	double den = c-d;
	double res = num/den;
	cout << "El resultado es: " << res << endl;
	cout << "El resultado a dos decimales es: " << round(res*100)/100 << endl;
	
	return 111;
}
