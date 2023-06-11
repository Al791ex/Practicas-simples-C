#include <iostream>

// Programa que por teclado pida la cantidad de numeros, lea cuantos hay menores de 15, mayores a 50, entre 25 y 40
using namespace std;

int main (int argc , char** argv) {
	
	int contador = 0,  c15= 0 ,  c50= 0 , rango = 0 , n , num ;
	
	cout<<"Ingresa la cantidad de numeros: "; 
	cin>>n;
	
	do {
	
		cout<<contador++<<"Ingresa un numero: ";
		cin>> num;
		
		if (num<15)
		c15++;
		
		if (num>50)
		c50++;
	
		if (num>=25 && num<=45) 
		rango++;
		
	} 
	
	 while (contador<n); 
	 
	 	cout<<"Numeros menores a 15 es: "<<c15;
	 	cout<<"Numeros mayores a 50 es: "<<c50;
	 	cout<<"Numeros entre 25 y 45 es: "<<rango;
	
	
	
	
	
	return 0;
} 
