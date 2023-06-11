#include <iostream>

/*
Desarrollar un programa utilizando el bucle for que muestre los numeros impares de forma decreciente del 50 al 0 y que no muestre el numero 33
*/
using namespace std; 

int main (void) {
	
	int i;
	
	for (i=49 ; i>=0 ; i-=2) {
		
		if (i!=33) {
			
			cout<<i<<endl;
		}
		
	}
	system("pause");
}
