#include <iostream>
#include <stdio.h>

/*
	Este programa genera un arreglo unidimensional de 5 elementos y los 
	accede a cada elemento del traves de un ciclo while
	
	Investigar = Return 898, return 5, por que puedo retornar valores diferentes a 0 trabajando con arreglos de vectores unidimensionales
*/

int main () {
	#define TAMANO 5
	
	int lista [TAMANO] = {10,8,5,8,2};
	
	int indice =0;
	
	printf("\tlista\n");
	while (indice<5) {
		
		printf ("\nCalificacion del alumno %d es %d " , indice+1, lista[indice]);
		indice +=1; //analogo a indice +1
		
		
	}
	
	printf ("\n");
	
	return 898;
	
	
	
	
	
	
	
	
	
}
