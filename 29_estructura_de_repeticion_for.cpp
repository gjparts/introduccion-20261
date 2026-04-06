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
	//haga un programa que imprima los numeros del 1 al 10
	//en este caso usare for porque se donde empieza y se donde termina (finita)
	for(int i = 1; i <= 10; i++)
		cout << i << endl;	//esta instruccion se hara 10 veces
	
	//el uso de llaves es opcional cuando solo se repite una instruccion:
	for(int i = 1; i <= 10; i++)
	{
		cout << i << endl;	//esta instruccion se hara 10 veces
	}
	
	//si son varias instrucciones el uso de llaves es obligatorio:
	for(int i = 1; i <= 10; i++)
	{
		//estas instrucciones se haran 10 veces
		cout << "Linea nueva" << endl;
		cout << i << endl;
		cout << "bla bla bla" << endl;
	}
	
	//haga un programa que imprima los numeros desde el 4 hasta el 12
	for(int i = 4; i <= 12; i++) //i++ es lo mismo que decir i = i + 1 (operador de incremento)
		cout << i << endl;
	
	//la variable de control puede llamarse como Usted prefiera
	//se acostumbra a usar i para abreviar iteracion
	for(int baleada = 4; baleada <= 12; baleada++)
		cout << baleada << endl;
	
	//haga un programa que imprima los numeros del 0 al 10 de dos en dos
	for(int i = 0; i <= 10; i+=2)   //i+=2 es lo mismo que decir i = i + 2 (operador de incremento)
		cout << i << endl;
	
	//el programa anterior se puede escribir usando suma tradicional
	for(int i = 0; i <= 10; i = i + 2)
		cout << i << endl;
		
	//imprima los numeros del 0 al 50 de 5 en 5
	for(int i = 0; i <= 50; i+=5)
		cout << i << endl;
	
	cout << "---------------------" << endl;
	
	/*IMPORTANTE: dentro de cada iteracion podemos colocar logica, por ejemplo:
	imprima los numeros del 1 al 20; pero coloque un asterisco a la derecha de
	aquellos numeros que sean multiplos de 4.*/
	for(int i = 1; i <= 20; i++)
	{
		if( i%4 == 0 )
			cout << i << "*" << endl;
		else
			cout << i << endl;
	}
	
	//haga un programa que imprima los numeros del 0 al 10. Coloque un signo de admiracion
	//a la derecha de los numeros impares.
	for(int i = 0; i <= 10; i++)
	{
		if( i%2 == 0 )
			cout << i << endl; //es par
		else
			cout << i << "!" << endl; //es impar
	}
	
	//haga un programa que imprima los numeros del 10 al 1, de 1 en 1 en forma descendente
	for(int i = 10; i >= 1; i--) //es lo mismo que decir i = i - 1 (operador de decremento)
		cout << i << endl;
	
	//imprima lo numeros del 100 al 0, de 10 en 10 en forma descendente
	for(int i = 100; i >= 0; i-=10) //es lo mismo que decir i = i - 10
		cout << i << endl;
	
	//la variable de control no nedesariamente debe de ser int, puede ser double o float
	//por ejemplo para contar intervalos en decimales:
	//imprima los numeros del 0 al 5, de 0.25 en 0.25
	for(double i = 0; i <= 5; i += 0.25)
		cout << i << endl;
	
	return 345;
}









