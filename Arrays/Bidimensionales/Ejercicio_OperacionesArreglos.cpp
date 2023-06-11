#include <iostream>

using namespace std; 

int main (void) {
	
	int matriz [3] [3];
	int suma = 0 , pares = 0 , sumap = 0 , sumai = 0 , sumad , sumaf , sumac ;
	
	cout<<"Ingresa por teclado cada elemento de la MATRIZ!!"<<endl;
	cout<<endl;
	
	// Rellena la matriz con datos del usuario
	for (int i = 0 ; i<3 ; i++) {
		
		for (int j =0 ; j<3 ; j++) {
			
			cout<<"["<<i<<"]"<<"["<<j<<"]: ";
			cin>> matriz [i] [j]; 
			
		}
	}
	
	cout<<endl;
	
	// Muestra la matriz
		for (int i = 0 ; i<3 ; i++) {
		
		for (int j =0 ; j<3 ; j++) {
			
			cout<<"\t"<< matriz [i] [j];
		}
		cout<<endl;
	}
	
	// Suma los elementos de la matriz
	for (int i = 0 ; i<3 ; i++) {
		
		for (int j =0 ; j<3 ; j++) {
			
		suma = suma + matriz [i] [j];
		
		}
	cout<<endl;

}
	cout<<"La suma de los elementos de la matriz es: "<<suma<<endl;
	cout<<endl;
	
	// Suma los elementos PARES de la matriz
		for (int i = 0 ; i<3 ; i++) {
		
		for (int j =0 ; j<3 ; j++) {
			
			pares = matriz [i] [j] % 2;
			
			if ( pares == 0 ) {
				
				sumap = sumap + matriz [i] [j];
				
				
			}
		}
	
	}
	cout<<"La suma de los elementos Pares de la matriz es: "<<sumap<<endl;
	cout<<endl;
	
	
	// Suma de los elementos IMPARES de la matriz
		for (int i = 0 ; i<3 ; i++) {
		
		for (int j =0 ; j<3 ; j++) {
			
			pares = matriz [i] [j] % 2;
			
			if ( pares != 0 ) {
				
				sumai = sumai + matriz [i] [j];
				
				
			}
		}
	
	}
	cout<<"La suma de los elementos IMPARES de la matriz es: "<<sumai<<endl;
	cout<<endl;
	
	
	// Suma de los elementos de 1 fila
		for (int i = 0 ; i<1 ; i++) {
			sumaf = 0;
			
			for (int j =0 ; j<3 ; j++) {
			
			sumaf = sumaf + matriz [i] [j]; 
				
			}
			cout<<"La suma de los elementos de la FILA "<<i<<" es: "<<sumaf<<endl;
		}
		
	cout<<endl;
	
	
	// Suma de los elementos de 1 columna
		for (int j = 0 ; j<1 ; j++) {
			sumac = 0;
			
			for (int i =0 ; i<3 ; i++) {
			
			sumac = sumac + matriz [i] [j]; 
				
			}
			cout<<"La suma de los elementos de la COLUMNA "<<j<<" es: "<<sumac<<endl;
		}
		
	cout<<endl;
		
	// Suma de los elementos de la DIAGONAL PRINCIPAL
		for (int i = 0 ; i<3 ; i++) {
			
			for (int j =0 ; j<3 ; j++) {
			
				if (i==j) {
					
					sumad = sumad + matriz [i] [j];
				}
			}
		}
		
	cout<<"La suma de los elementos de la DIAGONAL PRINCIPAL es: "<<sumad<<endl;
	
	cout<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");


}
