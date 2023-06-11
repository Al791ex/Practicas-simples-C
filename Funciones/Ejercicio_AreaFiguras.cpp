/*Hacer un programa en c++ que permita al usuario elegir calcular el area de figuras geometricas como: circulo, cuadrado, triangulo y rectangulo. 
Realizar una funcion para cada uno de ellos*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float circulo (float x);

float triangulo (float x, float y);

float cuadrado (float x);

float rectangulo (float x, float y);

int main (void) {
	
	string aux;
	int operacion;
	float radio, base, altura, lado, largo, ancho;
	
	do {
		
		cout<<"Programa para calcular el AREA de figuras geometricas"<<endl;
		cout<<"Ingresa un numero segun la opcion a elegir: "<<endl;
	
		cout<<"\n1. Circulo";
		cout<<"\n2. Triangulo";
		cout<<"\n3. Cuadrado";
		cout<<"\n4. Rectangulo"<<endl;
		cout<<endl;
	
		cin>>operacion;
	
		cout<<endl;
		
		switch (operacion) {
		
		case 1:	
		
		cout<<"Ingresa el radio del circulo: ";
		cin>>radio;
		
		cout<<"Su AREA es: "<<circulo (radio);
		
		break;
		
		case 2:	
		
		cout<<"Ingresa la base del triangulo: ";
		cin>>base;
		
		cout<<"Ingresa la altura del triangulo: ";
		cin>>altura;
		
		cout<<"Su AREA es: "<<triangulo (base, altura);
		
		break;
		
		case 3:	
		
		cout<<"Ingresa la logintud de un lado del cuadrado: ";
		cin>>lado;
		
		cout<<"Su AREA es: "<<cuadrado (lado);
		
		break;
		
		case 4:	
		
		cout<<"Ingresa el largo del rectangulo: ";
		cin>>largo;
		
		cout<<"Ingresa el ancho del rectangulo: ";
		cin>>ancho;
		
		cout<<"Su AREA es: "<<rectangulo (largo, ancho);
		
		break;
		
		default: 
		
		cout<<"El dato ingresado es INVALIDO"<<endl;
	}
	
cout<<"\nQuieres realizar otra operacion? (S) para continuar, presiona otra tecla para finalizar el programa.... "<<endl;
cin>> aux;
cout<<endl;
} while (aux == "S");	

	
return 0;	

	}
	
	
float circulo (float x){
	
	float area, aux;
	
	area = pow(x,2)*3.1416;
	return area;
}

float triangulo (float x, float y){
	
	float area; 
	
	area = x*y/2;
	return area;
	
}

float cuadrado (float x){
	
	float area;
	area = pow (x,2);
	return area;
	
}

float rectangulo (float x, float y){
	
	float area;
	area = x*y;
	return area;
	
}
		
