#include<iostream>
using namespace std;
int main(){
	//declarar una variable y asignarle un valor
	int a = 9;
	//lo anterior declara una variable que se llama a
	//su tipo de dato es int
	//su valor de inicio es 9
	
	//imprimir el contenido de una variable:
	cout << a << endl;
	
	//que es una variable?
	/*Variable: es un espacio de memoria donde se almacena un valor.
	-> Toda variable debe de tener un tipo de dato.
	-> El tipo de dato se coloca a la izquierda del nombre de la variable
	   en el lenguaje C++ asi como en la mayoria de lenguajes modernos
	-> Cada lenguaje de programacion tiene sus propios tipos de datos
	   los cuales se agrupan en:
	   1) tipos de datos primitivos: vienen definidos en el compilador
	      del lenguaje de programacion. ejemplos:
	      a) en C++ son int, double, float, char, long, bool
	      b) en JAVA son int, double, float, char, long, bool
	   2) tipos de datos compuestos: estan formados por elementos primitivos. ejm:
	      a) en C++: string, fstream, vector
	      b) en JAVA: String, Random, Scanner
	
	Consideraciones a la hora de nombrar variables:
	1) No utilice espacios en blanco para nombrar variables en su lugar
	   utilice guiones bajos o no use espacios, ejm:
	   int edad de mi gato; INCORRECTO
	   int edad_de_mi_gato; CORRECTO (Snake Case)
	   int EdadDeMiGato; CORRECTO (Pascal Case)
	   int edadDeMiGato; CORRECTO (Camel Case o Notacion Hungara)
	2) No utilice palabras reservadas del lenguaje (for, if, while, etc.)
	   int return; INCORRECTO
	   int if; INCORRECTO
	   int string; INCORRECTO, genera problemas a futuro con el manejo de string
	   int using; INCORRECTO
	3) No use caracteres especiales como operadores matematicos y otros simbolos
	   int nombre+; INCORRECTO
	   int nombre?; INCORRECTO
	   int nombre#; INCORRECTO
	   int ?nombre; INCORRECTO
	   int *nombre; CORRECTO * antes del nombre indica que es un apuntador de memoria
	   int &nombre; INCORRECTO
	4) El nombre de la variable no puede iniciar con numero
	   int 23x; INCORRECTO
	   int x23; CORRECTO
	5) Dos variables no pueden el mismo nombre dentro del mismo ambito (scope)
		int mascotas;
		double mascotas; INCORRECTO ya se declaro mascotas como int antes
	6) Cuando haga referencia a una variable que ya declaro debe hacerlo respetando
	   las mayusculas y minusculas con las que fue declarada.
	   
	   int mascotas = 4;
	   cout << Mascotas << endl; INCORRECTO mascotas fue declarada con m minusculas
	   cout << mascotas << endl; CORRECTO
	7) La variacion en las mayusculas y minusculas para los nombres de variables
	   puede permitir tener dos variables que se llamen parecido aunque sean diferentes:
	   	
		int mascotas = 4;
		int Mascotas = 2;
		int MaScOtAs = 21;
		int MASCOTAS = 5;
		int MAScotas = 90;
		
		cout << Mascotas << endl;
		
		->Note que tengo dos variables una Mascotas con M mayuscula y otra con m minuscula
		  el lenguaje considera esto como dos variables totalmente distintas aunque
		  se lean parecido.
		-> Eviten nombras variables que lean parecido porque generan CONFUSION.
	*/
	int mascotas = 4;
	int Mascotas = 2;
	int MaScOtAs = 21;
	int MASCOTAS = 5;
	int MAScotas = 90;
	
	cout << Mascotas << endl;
	
	return 1234;
}
