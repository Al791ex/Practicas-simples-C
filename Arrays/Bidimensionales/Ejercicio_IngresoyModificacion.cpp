#include <iostream>

/* programa que accede y modifica los elementos de un array

Los elementos de un array se pueden usar igual que cualquier otra variable y se puede hacer con ellos las mismas operaciones que se pueden hacer
con el resto de variables.
*/

using namespace std; 

int main (void) {
	
	int n;
	int m = 5;
	int a [] = {2,8,3,0,4};
	
	n = a[0];
	
	a [0] = a [1] +a [2]; // 11
	a [1] ++; //9

	a [n] = m+ 10; // 15
	a [n+1] = 7; //7
	
	
	if (a [0]>=a[1])
		a [4] = a [0];
		
	cout<<a[0]<<" "<< a [1] << a [2] << " "<< a [3]<< " "<< a [4];
	
	cout<<endl;
	
 	
	
	
	
	system("pause");
}
