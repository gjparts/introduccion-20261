#include<iostream>
#include<cmath> //libreria necesaria para funciones de matematicas
using namespace std;

int main(){
	/*Ley de precedencia de operadores (PEMDAS)
	Las expresiones deben evaluarse de izquierda a derecha dando
	prioriedad a las operaciones de acuerdo a la tabla siguiente:
	a) Parentesis	()
	b) Exponentes	pow
	c) Multiplicaciones y Divisiones	* /
	d) Sumas y Restas	+ -
	e) operadores NOT	!
	f) operadores AND	&&		 ALT+38 (ampersand)
	g) operadores OR	||       ALT+124 (barra)
	*/
	double d1 = 5, d2 = 9, d3 = 2, d4 = 10;
	cout << d1+d2/d3 << endl;
	cout << (d1+d2)/d3 << endl;
	cout << (d1+d2)/(d1-d3)+d4 << endl;
	cout << ((d1+d2)/(d1-d3))+d4 << endl;
	cout << d1*((d2-d3)/d4) << endl;
	cout << d1*(d2-d3)/d4 << endl;
	
	cout << "--------------------------------" << endl;
	//Division de enteros versus Division de decimales
	//en C++ la division se efectua dependiendo del tipo de dato
	//de los valores que la alimentan:
	cout << "La division de 1/3 es: " << 1/3 << endl;
	cout << "La division de 1.0/3.0 es: " << 1.0/3.0 << endl;
	cout << "La division de 5/2 es: " << 5/2 << endl;
	cout << "La division de 5.0/2.0 es: " << 5.0/2.0 << endl;
	//si los datos de entrada son enteros la division no tomara en cuenta
	//la parte decimal
	//si los datos de entrada son double o float la division toma en cuenta
	//los decimales
	cout << "--------------------------------" << endl;
	
	//funciones de matematicas en C++
	//para poder usarlas deberan incluir la libreria cmath
	
	//funcion pow: eleva un numero base a determinado exponente
	double n1 = 5;
	cout << n1 << " al cuadrado es " << pow(n1,2) << endl;
	//observe que el segundo parametro de pow es 2, ya que el segundo
	//parametro indica a que potencia vamos a elevar.
	//en el ejemplo anterior note que lo calculamos a la hora de imprimir
	
	//pero tambien se puede calcular la potencia y guardar en una variable:
	double n2 = 8;
	double potencia = pow(n2,5);
	//potencia guardara 8 elevado a la quinta potencia.
	cout << n2 << " a la quinta potencia es " << potencia << endl;
	
	//por medio de pow tambien es posible calcular raices
	//por ejemplo: raiz cubica de n1
	n1 = 27;
	cout << "La raiz cubica de " << n1 << " es " << pow(n1,1.0/3.0) << endl;
	n1 = 32;
	cout << "La raiz quintuple de " << n1 << " es " << pow(n1,1.0/5.0) << endl;
	
	//funcion sqrt: square root, calcula la raiz cuadrada:
	n1 = 25;
	cout << "La raiz cuadrada de " << n1 << " es " << sqrt(n1) << endl;
	
	//otro ejemplo:
	n1 = 81;
	double raiz = sqrt(n1);
	cout << "La raiz cuadrada de " << n1 << " es " << raiz << endl;
	
	//funcion round: redondea un numero decimal al proximo entero siempre y cuando
	//este iguale o supere a 0.5 en su parte decimal
	double numero = 3.32;
	cout << "round de " << numero << " es " << round(numero) << endl;
	numero = 7.5;
	cout << "round de " << numero << " es " << round(numero) << endl;
	numero = 4.0000005;
	cout << "round de " << numero << " es " << round(numero) << endl;
	numero = 6;
	cout << "round de " << numero << " es " << round(numero) << endl;
	numero = 2.78;
	cout << "round de " << numero << " es " << round(numero) << endl;
	
	//que pasa si necesito redondear a 2 decimales en c++?
	numero = 3.457896;
	double numeroRedondeado = round(numero*100)/100;
	cout << "round a 2 decimales de " << numero << " es " << numeroRedondeado << endl;
	
	//redondear a 3 decimales
	numeroRedondeado = round(numero*1000)/1000;
	cout << "round a 3 decimales de " << numero << " es " << numeroRedondeado << endl;
	
	//redondear a 4 decimales
	numeroRedondeado = round(numero*10000)/10000;
	cout << "round a 4 decimales de " << numero << " es " << numeroRedondeado << endl;
	
	//funcion ceil: devuelve el entero proximo del valor enviado siempre y cuando
	//su parte decimal sea mayor que cero.
	numero = 3.32;
	cout << "ceil de " << numero << " es " << ceil(numero) << endl;
	numero = 7.5;
	cout << "ceil de " << numero << " es " << ceil(numero) << endl;
	numero = 4.0000005;
	cout << "ceil de " << numero << " es " << ceil(numero) << endl;
	numero = 6;
	cout << "ceil de " << numero << " es " << ceil(numero) << endl;
	numero = 2.78;
	cout << "ceil de " << numero << " es " << ceil(numero) << endl;
	
	//floor: devuelve la parte entera de un valor enviado
	numero = 3.32;
	cout << "floor de " << numero << " es " << floor(numero) << endl;
	numero = 7.5;
	cout << "floor de " << numero << " es " << floor(numero) << endl;
	numero = 4.0000005;
	cout << "floor de " << numero << " es " << floor(numero) << endl;
	numero = 6;
	cout << "floor de " << numero << " es " << floor(numero) << endl;
	numero = 2.78;
	cout << "floor de " << numero << " es " << floor(numero) << endl;
	
	//un uso practico de floor es extraer la parte decimal de un numero
	numero = 4.563;
	double decimal = numero - floor(numero);
	cout << "La parte decimal de " << numero << " es " << decimal << endl;
	
	//funcion abs: devuelve el valor absoluto de un numero.
	numero = -45.6;
	cout << "El valor absoluto de " << numero << " es " << abs(numero) << endl;
	
	numero = -9;
	double absoluto = abs(numero);
	cout << "El valor absoluto de " << numero << " es " << absoluto << endl;
	
	return 345;
}










