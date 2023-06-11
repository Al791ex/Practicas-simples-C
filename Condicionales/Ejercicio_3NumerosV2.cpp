#include <iostream>
#include <string>

// El programa pide 3 numeros e indica si el tercero es igual a la suma del primero y el segundo.

using namespace std; 

int main () {
	
	float n1 , n2 , n3;
	float suma;
	
	cout<<"Ingresa el Primer Digito";
	cin n1;
	
	cout<<"Ingresa el Segundo Digito";
	cin n2;
	
	cout<<"Ingresa el Tercer Digito";
	cin n3;
	
	suma = n1+n2;
	
	if (suma == n3) { 
		cout<<"La suma de n1 y n2 = n3 "<< suma;
	
	} else {
	
		cout<<"La suma de n1 y n2 /= n3 ";
		
	}
	
	
	
	
	
	
	
	
	return 0 ;
}

