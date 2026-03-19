#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que capture una calificacion
	como numero entero. El programa va a imprimir
	un mensaje dependiendo del rango en que
	se encuentre dicha calificacion de acuerdo
	a la tabla siguiente:
	Rango				Mensaje
	De 0 en delante		Necesita mejorar
	De 65 en delante	Bueno
	De 85 en delante	Muy Bueno
	Mayor o igual a 91  Excelente*/
	int nota;
	cout << "Digite su calificacion: ";
	cin >> nota;
	
	if( nota >= 0 && nota < 65 ) cout << "Necesita mejorar";
	if( nota >= 65 && nota < 85 ) cout << "Bueno";
	if( nota >= 85 && nota < 91 ) cout << "Muy bueno";
	if( nota >= 91 ) cout << "Excelente";
	
	cout << endl;
	
	//Observe que AND sirve para evaluar rangos numericos.
	
	/*Haga un programa que pregunta la edad de una persona
	luego van a imprimir a que grupo de edad pertenece de
	acuerdo a la tabla siguiente:
	Rango					Grupo
	de 0 a menos de 18		Menor de edad
	de 18 a menos de 21		Mayor de edad
	de 21 a menos de 60 	Adulto
	de 60 en delante		Tercera edad
	*/
	int edad;
	cout << "Digite su edad: ";
	cin >> edad;
	
	if( edad >= 0 && edad < 18 ) cout << "Menor de edad";
	if( edad >= 18 && edad < 21 ) cout << "Mayor de edad";
	if( edad >= 21 && edad < 60 ) cout << "Adulto";
	if( edad >= 60 ) cout << "Tercera edad";
	
	return 111;
}








