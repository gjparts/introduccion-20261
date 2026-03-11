#include<iostream>
using namespace std;

int main(){
	/*Uso de bloques en estructuras de seleccion if
	En C++ cuando queremos condicionar mas de una instruccion
	es necesario agrupar estas instrucciones por medio
	del uso de llaves. Ejemplo:*/
	
	int edad;
	cout << "Digite su edad: ";
	cin >> edad;
	
	if(edad >= 18)
	{
		cout << "Eres mayor de edad" << endl;
		cout << "Puedes votar" << endl;
		cout << "Puedes tramitar tu permiso de conducir" << endl;
		cout << "Legalmente puedes trabajar en una empresa" << endl;
	}
	else
	{
		cout << "Eres menor de edad" << endl;
		cout << "No puedes votar" << endl;
		cout << "Tus padres responden ante la ley por tus actos" << endl;
	}
	cout << "------------------" << endl;
	
	//cuando se condiciona solo una instruccion no es necesario
	//el uso de bloques de llaves:
	cout << "Digite su edad:";
	cin >> edad;
	
	if(edad >= 18)
		cout << "Eres mayor de edad" << endl;
	else
		cout << "Eres menor de edad" << endl;
	cout << "------------------" << endl;
	
	//aunque algunas personas aun con una sola instruccion
	//prefieren usar llaves porque les da seguridad y comodidad
	//pero esto es considerado una mala practica:
	cout << "Digite su edad:";
	cin >> edad;
	
	if(edad >= 18)
	{
		cout << "Eres mayor de edad" << endl;
	}
	else
	{
		cout << "Eres menor de edad" << endl;
	}
		
	
	return 123;
}















