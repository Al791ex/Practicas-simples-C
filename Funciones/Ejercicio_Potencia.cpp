/*Programa que calcule la potencia del 2 al 10 del numero pi (3.1416).
Calcular a traves de la funcion sqrt la raiz de cada potencia  construir una funcion que calcule la potencia enesima de un numero*/

#include <iostream>
#include <cmath>

using namespace std;

float potencias (float x);
float elevar_numero (float x, float y);


int main (void){
	
	float pi = 3.1416;
	float n1, n2, aux;
	cout<<"Las Potencias del 2 al 10 del numero pi con su raiz cuadrada: "<<endl;
	cout<<potencias (pi);

	cout<<endl;
	cout<<"\nPotencia ENESIMA de un numero"<<endl;
	cout<<"Ingresa el numero a trabajar: ";
	cin>>n1;
	cout<<"Ingresa la potencia: ";
	cin>>n2;

	cout<<""<<endl;
	
	aux = elevar_numero (n1 , n2);
	cout<<"El RESULTADO es: "<<aux;
	
	return 0;
}

float potencias (float x){
	
	float potencia , aux, raiz;
	
	
	for (int i = 2 ; i<=10 ; i++){
		aux = 0;
		potencia = pow(x,i);
		aux = potencia;
		raiz = sqrt(aux);
		cout<<potencia<<endl;
		cout<<raiz<<endl;
		cout<<endl;
	}
	
	return 0;
	
	
}

float elevar_numero (float x, float y){
	float potencia;
	
	potencia = pow(x,y);
	
	return potencia;
	
	
}
