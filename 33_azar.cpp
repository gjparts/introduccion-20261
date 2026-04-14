#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	/*Generacion de numeros aleatorios (al azar)
	Para lograrlo vamos a ocupar la libreria cmath y la libreria ctime*/
	//en c++ antes de generar numeros al azar es importante
	//ejecutar algo que se le conoce como semilla (semilla) por
	//medio de un randomizer.
	//por lo general la semilla a usar es la fecha y hora de la computadora
	//pero en milisegundos:
	srand(time(0));
	//lo anterior solo se hace una vez en todo el programa, normalmente
	//al inicio de main
	
	//Generar un numero al azar entre 1 y 6
	int azar;
	azar = rand()%6+1;
	cout << "Numero al azar entre 1 y 6: " << azar << endl;
	
	//Generar un numero al azar entre 0 y 4
	azar = rand()%5; //se le coloca uno mas al maximo
	cout << "Numero al azar entre 0 y 4: " << azar << endl;
	
	//Generar un numero al azar entre 10 y 20
	//cuando se quiere usar rangos que no inician en 1 o en 0 se aplica
	//el calculo siguiente: rand()%(max-min+1)+min
	azar = rand()%(20-10+1)+10;
	cout << "Numero al azar entre 10 y 20: " << azar << endl;
	
	/*Ejercicio en clase: Haga un programa que genere un numero al azar entre 1 y 5.
	Luego Usted debera imprimir un nombre de una fruta de acuerdo al numero generado,
	asigne usted el nombre de fruta que prefiera para cada numero entre 1 y 5.*/
	azar = rand()%5+1;
	switch(azar)
	{
		case 1:
			cout << "Sandia" << endl; 
		break;
		case 2:
			cout << "Naranja" << endl; 
		break;
		case 3:
			cout << "Melon" << endl; 
		break;
		case 4:
			cout << "Uva" << endl; 
		break;
		case 5:
			cout << "Kiwi" << endl; 
		break;
	}
	
	return 876;
}










