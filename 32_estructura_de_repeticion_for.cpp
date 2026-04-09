#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que pregunte 8 numeros al usuario
	Imprima cual es el mayor de ellos.
	-> Resuelvalo usando la estructura de repeticion for*/
	double mayor = -99999999; //variable bandera (flag)
	//en este tipo de problemas se inicializa el mayor con el valor mas pequeño posible
	//para que tambien funcione con numeros negativos.
	
	for(int i = 1; i <= 8; i++)
	{
		double numero;
		cout << "Digite un numero: ";
		cin >> numero;
		
		//si el numero recien leido supera al numero mayor
		//entonces el nuevo mayor es el numero recien leido
		if( numero > mayor )
			mayor = numero;
	}
	cout << "El numero mayor es: " << mayor << endl;
	
	return 123;
}
