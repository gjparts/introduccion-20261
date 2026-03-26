#include<iostream>
using namespace std;

int main(){
	/*Estructuras de repeticion
	Son aquellas que ejecutan varias veces mas de una instruccion
	de acuerdo al cumplimiento de reglas o condiciones.
	Las mas populares son:
	1) for
	2) while
	3) do-while
	-> a cada repeticion que se haga en una estructura de este tipo se le conoce como iteracion.
	
	Estructura de repeticion for
	Permite repetir una o varias instrucciones de forma finita.
	Sintaxis en C++:
	for(inicializar la variable de control; condicion de terminacion; salto o step)
	{
		instruccion o instrucciones a ejecutar
	}
	El uso de las llaves dependera de cuantas instrucciones va a ejecutar
	a) Si es solo una instruccion no es necesario el uso de llaves
	b) Si son varias instrucciones a repetir; entonces si es necesario el uso de llaves
	*/
	//haga un programa que imprima que los numeros del 1 al 10
	//en este caso usare for porque se donde empieza y se donde termina (finita)
	for(int i = 1; i <= 10; i++)
		cout << i << endl;	//esta instruccion se hara 10 veces
	
	//el uso de llaves es opcional:
	for(int i = 1; i <= 10; i++)
	{
		cout << i << endl;	//esta instruccion se hara 10 veces
	}
	
	//si son varias instrucciones el uso de llaves es obligatorio:
	for(int i = 1; i <= 10; i++)
	{
		cout << "Linea nueva" << endl;
		cout << i << endl;	//esta instruccion se hara 10 veces
		cout << "bla bla bla" << endl;
	}
		
	return 345;
}
