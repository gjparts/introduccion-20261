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
	Mayor o igual a 91  Excelente
	
	Cualquier calificacion fuera de esos rangos mostrara
	el mensaje: Calificacion no valida.*/
	int nota;
	cout << "Digite la calificacion obtenida: ";
	cin >> nota;
	
	if( nota >= 91 )
		cout << "Excelente" << endl;
	else
		if( nota >= 85 )
			cout << "Muy Bueno" << endl;
		else
			if( nota >= 65 )
				cout << "Bueno" << endl;
			else
				if( nota >= 0 )
					cout << "Necesita mejorar" << endl;
				else
					cout << "Calificacion no valida" << endl;
	
	/*Este tipo de problemas se ataca de forma descendente*/
	return 123;
}





