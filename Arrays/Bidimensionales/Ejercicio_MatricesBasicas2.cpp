#include <iostream>

using namespace std;

int main (void) {
	
	int i, j;
	
	int tabla [4] [3];
	
	cout<<"Ingrese los datos: "<<endl;
	
	//recorrido del  arreglo
	
	for (i=0; i<4; i++) {
		
		for (j=0 ; j<3; j++) {
			
			cout<<"Ingrese el dato ["<<(i+1)<<"]["<<(j+1)<<"] = ";
			cin>>tabla [i] [j];
			
		}
	}
	return 0;
}
