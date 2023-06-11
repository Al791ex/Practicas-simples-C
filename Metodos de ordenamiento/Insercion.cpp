#include <iostream>
#include <conio.h>

using namespace std;

int main (void) {
	
	float Array [5];
	int posicion, x;
	
	
	
	// El programa pide datos al usuario
	for (int i = 0 ; i<5 ; i++) 
	{
		cout<<"Digita un numero: ";
		cin>> Array [i];
		
	}
	
	//Metodo por insercion
	for (int i = 0 ; i<5 ; i++) {
		
		posicion = i; 
		x = Array [i];
		
		// Evalua si n1>n2
		while ((posicion>0) && (Array [posicion-1] > x)) {
			
			//Cambia de posicion el numero
			Array [posicion] = Array [posicion-1];
			posicion--;
		}
		
		Array [posicion] = x;
	}
	
	
	//Imprime en pantalla el orden ascendente
	cout<<"\nOrden Ascendente: ";
	
	for (int i = 0; i<5; i++){
		
		cout<<Array [i]<<" ";
	
	}
	
	//Imprime en pantalla el orden descendente
	cout<<"\nOrden Descendente: ";
	
	for (int i = 4; i>=0; i--){
		
		cout<<Array [i]<<" ";
	
	}
	
	getch();
	return 0;
}
