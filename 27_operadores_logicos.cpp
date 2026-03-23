#include<iostream>
using namespace std;

int main(){
	/*Operador Logico OR
	Devuelve true si se cumple al menos una expresion
	de comparacion cuando hay dos o mas expresiones.
	-> en C++, JAVA, C#, Javascript el operador OR es doble barra: ||
	-> en Windows la barra se obtiene con Alt+124
	
	ejemplo: Haga un programa que pregunte el mes y el año como
	numeros enteros.
	El programa va a imprimir la cantidad de dias que tiene el
	mes/año digitado.
	Si el mes es menor a uno Ó si el mes es mayor a doce
	entonces imprima: Mes no valido.*/
	int m, a;
	cout << "Digite el numero de mes: ";
	cin >> m;
	cout << "Digite el año: ";
	cin >> a;
	
	//uso de OR para evaluar elementos en comun
	if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
		cout << "Mes tiene 31 dias" << endl;
		
	if( m == 4 || m == 6 || m == 9 || m == 11 )
		cout << "Mes tiene 30 dias" << endl;
	
	if( m == 2 ){
		if( a%4 == 0 ) //si el residuo de dividir año entre 4 es cero entonces es biciesto
			cout << "Mes tiene 29 dias" << endl;
		else
			cout << "Mes tiene 28 dias" << endl;
	}
	
	//Uso de OR para rangos de exclusion
	if( m < 1 || m > 12 )
		cout << "Mes no valido" << endl;
		
	/*Haga un programa que pregunta un numero double para la temperatura
	que se toma a un paciente. el programa va a decir si la temperatura
	del paciente requiere atencion medica.
	La temperatura del cuerpo humano que requiere atencion medica es
	aquella que es menor a 36.5 Ó mayor a 37.5 grados centigrados.
	-> resuelvalo utilizando operador OR.*/
	double t;
	cout << "Digite la temperatura del paciente: ";
	cin >> t;
	
	if( t < 36.5 || t > 37.5 )
		cout << "Requiere atencion medica" << endl;
	else
		cout << "Temperatura normal" << endl;
	
	return 123;
}
