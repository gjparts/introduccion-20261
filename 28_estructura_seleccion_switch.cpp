#include<iostream>
using namespace std;

int main(){
	/*Estructura de seleccion switch
	Evalua una variable y dependiendo de su valor
	ejecuta el caso correspondiente. ejemplo:
	
	-> En C++ switch solo funciona como numeros enteros.
	
	Un edificio tiene 4 pisos, cada uno tiene un nombre que lo describe,
	estos son:
	numero	descripcion
	1		Lobby
	2		Comercios
	3		Bancos
	4		Cafeterias
	Haga un programa que pregunte al usuario el numero de piso a;
	que desea ir, luego el programa va aimprimir el nombre del piso al
	que se dirigen.
	si digita un piso no valido debera mostrar un mensaje indicandolo.*/
	int piso;
	cout << "Digite el piso: ";
	cin >> piso;
	switch(piso)
	{
		case 1:
			//puede tener mas de una instruccion por caso
			cout << "Lobby" << endl;
			cout << "Este piso es la recepcion." << endl;
		break;
		case 2:
			cout << "Comercios" << endl;
		break;
		case 3:
			cout << "Bancos" << endl;
		break;
		case 4:
			cout << "Cafeterias" << endl;
			cout << "Buen provecho" << endl;
		break;
		default:
			//caso que se ejecuta cuando no se cumple ninguno de los casos anteriores
			cout << "Piso no valido" << endl;
		break;
	}
	/*Ejercicio:
	Haga un programa que solicite digitar el mes y el año como numeros enteros.
	El programa va a imprimir cuantos dias tiene el mes/año digitado.
	-> meses solo aceptan numeros entre 1 y 12
	-> resuelvalo usando switch.*/
	int m,a;
	cout << "mes: ";
	cin >> m;
	cout << "año: ";
	cin >> a;
	switch(m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << "31 dias" << endl;
		break;
		case 4: case 6: case 9: case 11:
			cout << "30 dias" << endl;
		break;
		case 2:
			//puede haber mas logica dentro de un case
			if(a%4 == 0)
				cout << "29 dias" << endl;
			else
				cout << "28 dias" << endl;
		break;
		
		default:
			cout << "Mes no valido" << endl;
		break;
	}
	//cuando se tiene casos con resultados en comun se pueden desencadenar como en el ejemplo anterior.
	
	//switch en C++ permite evaluar rangos de numeros enteros
	int edad;
	cout << "Digite su edad: ";
	cin >> edad;
	
	switch(edad)
	{
		case 0 ... 17:
			cout << "Menor de edad" << endl;
		break;
		case 18 ... 20:
			cout << "Mayor de edad" << endl;
		break;
		case 21 ... 59:
			cout << "Adulto" << endl;
		break;
		case 60 ... 9999:
			cout << "Tercera edad" << endl;
		break;
		default:
			cout << "Edad no soportada." << endl;
		break;
	}
	
	
	return 765;
}
