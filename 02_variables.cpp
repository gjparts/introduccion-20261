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
	
	//declaracion de una variable sin inicializar:
	int variable1;
	//el tipo de dato de esta variable es int el cual se usa para registrar un numero entero
	//imprimir el valor de una variable
	cout << "El valor de variable1 es " << variable1 << endl;
	//Importante: en C++ no es obligatorio colocarle un valor de inicio
	//a las variables; pero se recomienda porque si no lo hace C++ le va a asignar
	//un valor el cual puede ser CERO o cualquier otro numero que encuentre en la memoria
	
	//cuando se declara una variable se recomienda inicilaizarla con el valor
	//aunque este sea cero.
	int variable2 = 0;
	cout << "El valor de variable2 es " << variable2 << endl;
	int variable3 = 200;
	cout << "El valor de variable3 es " << variable3 << endl;
	
	//tambien puede declarar la variable sin inicializar y luego ponerle el valor
	int variable4;
	variable4 = 777;
	cout << "El valor de variable4 es " << variable4 << endl;
	
	//declarar multiples variables del mismo tipo al mismo tiempo (sin inicializar)
	int num1, num2, num3;
	num1 = 60;
	num3 = 80;
	cout << "El valor de num1 es " << num1 << endl;
	cout << "El valor de num2 es " << num2 << endl;
	cout << "El valor de num3 es " << num3 << endl;
	
	//declarar multiples variables del mismo tipo al mismo tiempo inicializadas
	int cifra1 = 7, cifra2 = 400, cifra3 = -48;
	cout << "El valor de cifra1 es " << cifra1 << endl;
	cout << "El valor de cifra2 es " << cifra2 << endl;
	cout << "El valor de cifra3 es " << cifra3 << endl;
	
	/*que es eso de int?
	int se refiere a que la variable almacena un valor cuyo tipo de dato
	es un numero entero pero de 4 bytes (32 bit).*/

	//existen otros tipos de datos? si
	/*Tipos de dato para almacenar numeros decimales:
	float: se usa para almacenar numeros con decimales de 4 bytes (32 bit) lo que se conoce
	       como numero decimal de baja precision.
	double: se usa para almacenar numeros con decimales de 8 bytes (64 bit) lo que se conoce
	       como numero decimal de alta precision.*/
	float salario = 36245.43;
	double valorGrande = 3.141592653589793;
	
	cout << "el valor de salario es: " << salario << endl;
	cout << "el valorGrande es: " << valorGrande << endl;
	
	/*tipo de dato long long
	permite guardar un numero entero de alta precision de 8 bytes (64 bit)
	a diferencia de int que es de 4 bytes (32 bit).
	Se usa para guardar numeros enteros mayores a 2147483647.
	long long no debe superar enteros mayores a 9223372036854775807
	*/
	long long enteroGrande = 9223372036854775807;
	cout << "el valor de enteroGrande es: " << enteroGrande << endl;
	
	/*tipo de dato char: almacena solo un caracter.
	una variable char mide 1 byte (8 bit)
	para sacar el caracter comilla simple use Alt+39*/
	char c1 = 'z';
	char c2 = '5';
	char c3 = '$';
	cout << "el valor de c1 es: " << c1 << endl;
	cout << "el valor de c2 es: " << c2 << endl;
	cout << "el valor de c3 es: " << c3 << endl;
	
	return 1234;
}














