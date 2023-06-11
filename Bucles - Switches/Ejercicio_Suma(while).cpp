#include <iostream>

//Numeros que se suman 


using namespace std; 

int main (void) {
	
	int contador = 0 , numero, n , suma = 0;
	
	cout<<"Ingresa la cantidad de numeros a sumar: ";
	cin>>n;
	
	while (contador<n) {
		
		cout<<"Ingresa un numero: ";
		cin>>numero;
		
		suma = suma + numero;
		
		contador++;
	}
	
	cout<<"\nLa suma de los numeros es: "<<suma;
	
	
	return 0;
}
