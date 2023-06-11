#include <iostream>

// Empieza desde filas
// sizeof tamano en bytes del dato, los enteros son iguales

using namespace std;

int main (void) {
	
	int edades [3] [2] = { {1,2} , {9,8} , {14,21} };
	
	int filas = (sizeof(edades)/sizeof(edades[0]));
	
	int columnas = (sizeof(edades[0])/sizeof(edades[0] [0]));
	
	for (int i=0 ; i<filas; i++) {
		
		for (int j = 0; j< columnas; j++) {
			
			cout<<edades [i] [j]<<endl;
			
		}
		
		
	}
	
	system("pause");
}
