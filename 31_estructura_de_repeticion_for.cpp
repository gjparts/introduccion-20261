#include<iostream>
using namespace std;

int main(){
	/*Haga un nuevo programa que pregunte 6 edades como numeros enteros.
	Debera imprimir cuantas de las edades digitadas corresponden a: menor de edad,
	mayor de edad y tercera edad segun la tabla de rangos siguiente:
	
	Menor de edad		de 0 a 17
	Mayor de edad		de 18 a 59
	Tercera edad		de 60 en adelante*/
	int menores = 0, mayores = 0, tercera = 0; //variables contador
	
	//bucle de 6 iteraciones
	for( int i = 1; i <= 6; i++ )
	{
		int edad; //variable temporal
		cout << "Digite una edad: ";
		cin >> edad;
		
		//clasificar la edad digitada
		if( edad >= 0 && edad <= 17 ) menores++;
		if( edad >= 18 && edad <= 59 ) mayores++;
		if( edad >= 60 ) tercera++;
	}
	//resultados:
	cout << "Menores de edad: " << menores << endl;
	cout << "Mayores de edad: " << mayores << endl;
	cout << "Tercera edad: " << tercera << endl;
	
	return 432;
}
