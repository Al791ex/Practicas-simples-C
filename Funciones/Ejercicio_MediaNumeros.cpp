#include <iostream>

// Calculo de la media de dos numeros

using namespace std;

double calcula_media (double, double); // Declaracion de la funcion

int main () {
	
	double n1, n2;
	
	cout<<"Introduzca el primer numero: ";
	cin>>n1;
	
	cout<<"Introduzca el segundo numero: ";
	cin>>n2;
	
	double resultado = calcula_media(n1, n2); // Llamada
	
	cout<<"La media de "<<n1<<"y"<<n2<<"es"<<resultado<<".\n";
		
}


// Definicion
double calula_media (double n1, double n2) 
{
	
	double media; 
	media = (n1+n2)/2.;
	return media;	
}

