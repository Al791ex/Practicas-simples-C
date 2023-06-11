#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Realizar un programa en el que se puedan guardar 5 nombres de maximo 20 caracteres. 
El usuario ingresara los nombres que quiere guardar y posteriormente se mostraran los nombres que ingreso
*/

int main (void) {
	
	int contador;
	char nombre [5] [20];
	
	for (contador =0; contador<5; contador++) {
		
		printf("Ingresa un nombre: "); //cout
		gets(nombre[contador]); //cin
		
	}	
	
	printf ("\n Nombres ingresados: \n");
	
	for (contador =0; contador<5; contador++) {
		
		puts (nombre[contador]); // mostrar 
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
