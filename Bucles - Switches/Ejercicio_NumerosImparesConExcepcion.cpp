#include <iostream>

// Crear un programa que muestre los numeros impares de forma descendiente del 50 al 0 y que no muestre el numero 33 (ciclo for)

using namespace std;

int main (int argc , char** argv) {
	
	int i;
	
	for (i = 50 ; i>=0 ; i--) {
		
		if (i!=33) {
			
			cout<<i<<endl;
		}
	}
	return 0;
} 
