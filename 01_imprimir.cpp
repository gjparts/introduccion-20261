#include<iostream>
using namespace std;

int main(){
	//comentario de una linea
	
	/*comentario
	de varias
	lineas*/
	
	//todo comentario es conocido como pseudocodigo
	
	//cout = console out
	//imprime texto en la terminal o consola del sistema
	//endl = representa un salto de linea
	cout << "Hola UNAH" << endl;
	cout << "Me llamo Gerardo" << endl;
	cout << "UNAH" << "Cortes" << 2026 << endl;
	cout << "Perro" << endl << "Gato" << endl << "Loro" << endl;
	
	//si no utiliza endl los cout imprimen en la misma linea
	cout << "Rojo";
	cout << "Verde";
	cout << "Azul";
	cout << "Amarillo";
	
	//varios saltos de linea
	cout << endl << endl << endl << endl << endl;
	cout << "Ing. en Sistemas";
	
	//imprimir caracteres de escape
	// \n imprime un salto de linea
	cout << "Linea 1\nLinea 2\nLinea 3\n";
	//varios saltos de linea
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	
	//caracter de escape para tabular
	cout << "Nombre\tEdad\tGenero" << endl;
	cout << "Gerardo\t43\tMasculino" << endl;
	cout << "Irene\t42\tFemenino" << endl;
	cout << "Josue\t13\tMasculino" << endl;
	
	//como imprimo un slash inverso?
	cout << "Esto es un slash inverso: \\" << endl;
	//imprimir una comilla doble:
	cout << "Esto es una comilla doble: \"" << endl;
	
	cout << "Ramon Valdez alias \"Don Ramon\"" << endl;
	
	//imprimir texto en formato RAW (sin tratamiento)
	//Importante: texto RAW solo es soportado por C++ a partir de la version 11
	//del compilador.
	//deberá agregar el parametro -std=c++11 en las opciones del compilador
	//para que no le genere error.
	
	return 123;
}










