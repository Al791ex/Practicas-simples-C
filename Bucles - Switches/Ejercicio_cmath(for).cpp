#include <iostream>
#include <cmath>

/*
Desarrollar un programa con el ciclo for que muestre el cuadrado de la sumatoria de los numeros del 1 al 20. Utilizar la libreria cmath
*/
using namespace std; 

int main (void) {

	int i , suma = 0 , cuadrado;
	
	cout<<"Numeros del 1 al 20: "<<endl;
	cout<<endl;
	
	for (i=1 ; i<=20 ; i++) {
		
		cuadrado = pow(i,2);
		suma = suma + cuadrado;
		
		cout<<i<<endl;	
	}
	
	cout<<"\nLa sumatoria de los numeros elevados al cuadrado es: "<<suma<<endl;	
	
		
	system("pause");
}
