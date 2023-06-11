#include <iostream>
#include <conio.h>

using namespace std;


int main (void) {
	
	float Arreglo [5];
	float x = 0;
	
	// El programa pide datos al usuario
	for (int i = 0 ; i<5 ; i++) 
	{
		cout<<"Digita un numero: ";
		cin>> Arreglo [i];
		
	}
	

	// Metodo burbuja	
	for (int i = 0 ; i<5; i++){
		
		for (int j = 0 ; j<5 ; j++){
			
			//Evalua la condicion n1>n2 
			if (Arreglo [j] > Arreglo [j+1]){
				
				//Intercambia los valores segun se cumpla la condicion 
				x = Arreglo [j];
				Arreglo [j] = Arreglo [j+1];
				Arreglo [j+1] = x;
			}
		}		
	}
	
	//Imprime en pantalla el orden ascendente
	cout<<"\nOrden Ascendente: ";
	
	for (int i = 1; i<=5; i++){
		
		cout<<Arreglo[i]<<" ";
	
	}
	
	//Imprime en pantalla el orden descendente
	cout<<"\nOrden Descendente: ";
	
	for (int i = 5; i>0; i--){
		
		cout<<Arreglo[i]<<" ";
	
	}
	
	getch();
	return 0;
}
