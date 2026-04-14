#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0)); //inicializar el generador de numeros aleatorios
	
	/*Ejercicio en clase: Haga un programa que genere 10 numeros al azar entre 0 y 100, imprima
	los numeros generados y luego imprima un resumen indicando cuantos de los numeros generados
	fueron pares y cuantos impares. No importa que se repitan numeros.
	Requisito: hagalo usando la estructura de repeticion for.*/
	int pares = 0;
	int impares = 0;
	
	for(int i = 1; i <= 10; i++)
	{
		int azar = rand()%101;
		cout << azar << endl;
		
		if( azar%2 == 0 )
			pares++;
		else
			impares++;
	}
	cout << "Pares: " << pares << endl;
	cout << "Impares: " << impares << endl;
	
	return 123;
}
