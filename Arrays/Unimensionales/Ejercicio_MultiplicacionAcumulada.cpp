#include <iostream>

// Escribe un programa que defina un vector de numeros y que calcule la multiplicacion acumulada de sus elementos

using namespace std;

int main (void) {
	
	int numeros [] = {1,2,3,4};
	int suma = 1;
	for (int i= 0 ; i<4 ; i++) {
		
		suma = suma*numeros[i];
	}
		cout<<"resultado: "<<suma<<endl;

	return 0;
}
