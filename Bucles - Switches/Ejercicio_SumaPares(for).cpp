#include <iostream>

// Utilizar un contador que empiece de 4 hasta menor a 100, con una condicion establecer los pares y sumar dichos numeros.

using namespace std; 

int main (int argc , char** argv) {

	int par = 0;

	for (int i = 2 ; i<100 ; i++) 
	{
		if (i % 2 == 0) 
		
			par +=i;
	}  

	cout<<"La suma de todos los numeros pares es: "<<par; 		







	
	return 0;
}
