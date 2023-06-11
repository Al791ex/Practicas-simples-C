#include <iostream>
#include <conio.h>

using namespace std;

void Quicksort (int [], int, int);
int partition (int[], int, int);

 int main () {
 	
 	int Array [5], n = 5, i;
 	
 	// El programa pide datos al usuario
	for (i = 0 ; i<n ; i++) {
		cout<<"Introduce un numero: ";
		cin>>Array[i];
	}	
	// Llama a la funcion Quicksort
	Quicksort (Array, 0 , n-1);
	
 	//Imprime en pantalla el orden ascendente
	cout<<"\nOrden Ascendente: ";
	
	for (int i = 0; i<n; i++){
		
		cout<<Array [i]<<" ";
	}
	
	//Imprime en pantalla el orden descendente
	cout<<"\nOrden Descendente: ";
	
	for (int i = 4; i>=0; i--){
		
		cout<<Array [i]<<" ";
	
	}
	
	return 0;
 }

//Metodo Quicksort

	void Quicksort (int Array [], int l, int u){
		
	int j;
	if (l<u) {
		
		j = partition (Array, l, u);
		Quicksort (Array, l, j -1);
		Quicksort (Array, j+1, u);
	}	
}
	
int partition (int Array[], int l, int u) {
	
	int v, i, j, temp;
	v = Array [l];
	i = l; 
	j = u+1;
	do{
		
		do {
			i++;
		}
		while (Array [i]<v && i<=u);
		
		do {
			j--;
		}
		
		while (v<Array [j]);
		if (i<j) {
			
			temp = Array [i];
			Array [i] = Array [j];
			Array [j] = temp;
		}
		
		
	} while (i<j);
	Array [l] = Array [j];
	Array [j] = v;
	
	getch();
	return (j);

}
