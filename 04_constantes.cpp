#include<iostream>
#include<cmath>
using namespace std;

int main(){
	/*Constante: es un valor almacenado en la memoria que permanece
	inalterable, invariable, inmutable.*/
	//para usar constantes en c++ y lenguajes afinaes se usa la palabra
	//reservada const
	
	const double gravedadTierra = 9.8;
	
	//intentamos cambiar el valor de la constante:
	//gravedadTierra = 100;
	
	/*Los constantes se utilizan para datos que no se quiere que sean
	modificados por los programadores. Valores como la gravedad de la tierra,
	la velocidad de la luz o la circunferencia de la tierra son fijos y
	no se pueden cambiar.*/
	const double pi = 3.14159;
	const double velocidadLuz = 299792458;
	const double velocidadSonido = 343;
	
	//voy a calcular el area de un circulo con radio de 4
	double radio = 4;
	double areaCirculo = pi*pow(radio,2);
	cout << "Area del circulo: " << areaCirculo << endl;
	
	return 45;
}
