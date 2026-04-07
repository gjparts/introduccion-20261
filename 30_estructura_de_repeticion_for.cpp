#include<iostream>
using namespace std;

int main(){
	/*Haga un nuevo archivo y escriba un programa que
	pregunte 5 numeros (double o float) al usuario
	e imprima el promedio de ellos.
	Requisito: resuelvalo utilizando una estructura de repeticion for.*/
	//variable acumulador
	double suma = 0;
	
	for(int i = 1; i <= 5; i++)
	{
		double numero; //var. temporal
		cout << "Digite un numero: ";
		cin >> numero;
		
		//sumar el numero leido
		suma = suma + numero;
	}
	//una vez leidos los 5 numeros calcular el promedio:
	double promedio = suma/5.0;
	cout << "El promedio de los numeros leidos es: " << promedio << endl;
	
	return 777;
}
