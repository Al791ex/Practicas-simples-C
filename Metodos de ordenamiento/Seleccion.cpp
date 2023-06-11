#include <iostream>
#include <conio.h>

using namespace std;

int main (void) {
	
	int Array [5];
	int min, x;
	
	// El programa pide datos al usuario
	for (int i = 0 ; i<5 ; i++) 
	{
		cout<<"Digita un numero: ";
		cin>> Array [i];
		
	}
	
	// Metodo por seleccion
	for (int i = 0 ; i<5 ; i++){
		
		min = i;
		
		for (int j = i+1 ; j<5 ; j++){
			
			if (Array [j] < Array [min]){
				
				min = j; 	
			}
		}
	
		x = Array [i];
		Array [i] = Array [min];
		Array [min] = x;
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
