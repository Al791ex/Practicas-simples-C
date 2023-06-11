//Programa que calcule el perimetro y area de un triangulo y cuadrado. Utilizar una funcion para cada caso.

#include <iostream>
#include <cmath>

using namespace std;

float area (float x, float y);
float perimetro (float x, float y);

float Carea (float x);
float Cperimetro (float x);

int main (void){
	
	float base, altura, lado;
	
	
	cout<<"Programa para calcular AREA y PERIMETRO de un TRIANGULO"<<endl;
	
	cout<<"Ingresa la BASE del triangulo: ";
	cin>>base;
	
	cout<<"Ingresa la ALTURA del triangulo: ";
	cin>>altura;
	
	cout<<"\nEl AREA del triangulo es: "<<area (base , altura);
	
	cout<<"\nEl PERIMETRO del triangulo es: "<<perimetro (base , altura);
	
	cout<<endl;
	cout<<"\nPrograma para calcular AREA y PERIMETRO de un CUADRADO"<<endl;
	
	cout<<"Ingresa un LADO del CUADRADO: ";
	cin>>lado;
	
	cout<<"\nEl AREA del Cuadrado es: "<<Carea (lado);
	
	cout<<"\nEl PERIMETRO del Cuadrado es: "<<Cperimetro (lado);
	
	return 0;
}

float area (float x , float y){
	
	float t_area;
	t_area = x*y/2;
	
	return t_area;
	
	
}

float perimetro (float x, float y){
	
	float t_perimetro;
	t_perimetro = x+y;
	
	return t_perimetro;
	
}

float Carea (float x){
	
	float c_area;
	c_area = pow (x,2);
	
	return c_area;
	
}


float Cperimetro (float x){
	
	float c_perimetro;
	c_perimetro = x+x+x+x;
	
	return c_perimetro;
	
}

