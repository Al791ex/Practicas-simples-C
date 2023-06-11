/*crear un programa que halle la raiz de un numero. El usuario debera indicar el numero y el indice de la raiz. 
Calcular el cuadrado del resultado. Desarrolle una funcion para cada uno de los calculos */

#include <iostream>
#include <cmath>
using namespace std;

float raiz (float x, float y);

float cuadrado (float x);

int main (void){
	
	float n1, n2;  	
	float Reraiz;
	
	cout<<"Ingresa el numero a sacarle la RAIZ: ";
	cin>> n1;
	
	cout<<"Ingresa el indice de la RAIZ: ";
	cin>>n2;
	
	Reraiz = raiz (n1, n2);
	
	cout<<"\nLa Raiz de "<<n1<<" es: "<<Reraiz<<endl;
	cout<<"Su cuadrado es: "<<cuadrado (Reraiz);
	
	return 0;
}

float raiz (float x, float y){
	
	float raiz;
	raiz = pow(x,1/y);
	
	return raiz;
}

float cuadrado (float x){
	float resultado;
	
	resultado = pow (x,2);
	
	return resultado;
}
