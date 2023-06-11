#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main (void) {
	
	
	int	matriz [5] [6];
	
	float suma = 0 , psuma = 0 , isuma = 0 , sumaf , sumac , sumad , pares ;
	
	//Rellenando la Matriz
	
	for (int i = 0 ; i<5 ; i++) {
		
		for (int j = 0 ; j<6 ; j++) {
			
			matriz [i] [j] = rand() %10;
		}
	
	}
	
	// Mostrando la Matriz
	
	for (int a = 0 ; a<5 ; a++ ) {
		
		for (int b = 0 ; b<6; b++) {
			
			cout<< "\t"<<matriz [a] [b];
	
			
		}
		
		cout<<endl;	
	}
	
	//Suma
	
	for (int i =0 ; i<5 ; i++) {
		
		for (int j=0 ; j<6 ; j++) {
			
			suma = suma + matriz [i] [j]; 
 			
		}
		
	}
		cout<<"\nLa suma de los elementos DENTRO de la matriz es: "<<suma;
	
	// Mostrar Pares
	
	for (int i = 0 ; i<5 ; i++) {
		
		for (int j = 0 ; j<6 ; j++) {
			
			pares = matriz [i] [j] %2;
			
			if (pares == 0){
				
				psuma = psuma + matriz [i] [j] ;

			}				
		} 	
	}
		cout<<"\nLa suma de los elementos PARES dentro de la matriz es: "<<psuma;
		
		
	// Mostrar Impares
	
	for (int i = 0 ; i<5 ; i++) {
		
		for (int j = 0 ; j<6 ; j++) {
			
			pares = matriz [i] [j] %2;
			
			if (pares != 0){
				
				isuma = isuma + matriz [i] [j] ;

			}				
		} 
	}
	
	cout<<"\nLa suma de los elementos IMPARES dentro de la matriz es: "<<isuma<<endl;
	cout<<endl;
	
	
	//Mostrar suma de filas 
	
	for (int i = 0 ; i<5 ; i++) {
		
		sumaf = 0;
		
		for (int j = 0 ; j<6 ; j++) {
			
			sumaf = sumaf + matriz [i] [j]; 
			
			
		}
		cout<<"La suma de los elementos dentro de la FILA "<<i<<": "<<sumaf<<endl;	
	}
	cout<<endl;
	
	
	//Mostrar suma de columnas 
	
	for (int j = 0 ; j<6 ; j++ ) {
		
		sumac = 0;
		
		for (int i = 0 ; i<5 ; i++) {
			
			sumac = sumac + matriz [i] [j];
			
		}
		
		cout<<"La suma de los elementos dentro de la COLUMNA "<<j<<": "<<sumac<<endl;
	}
	
	
	// Suma diagonal principal
	
	for (int i = 0 ; i<5 ; i++) {
		
		for (int j = 0 ; j<6 ; j++) {
			
			if (i==j) {
				
				sumad = sumad + matriz [i] [j];
				
			} 
			
			
		}
	}
	cout<<"\nLa suma de los elementos en la Diagonal Principal: "<<sumad<<endl;
	cout<<endl;
	
	
	// Matriz Transpuesta
	
	for (int j = 0 ; j<6 ; j++) {
		
		for (int i = 0 ; i<5 ; i++) {
			 
			cout<<"\t"<<matriz [i] [j];
			
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
