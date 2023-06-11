#include <iostream>
#include <iomanip>

// Pide 3 numeros y los muestra en pantalla de mayor a menor en lineas distintas. Si hay numeros iguales se colocan en la misma linea.

using namespace std; 

int main(void) {
	
	float n1, n2, n3;
	
	cout<<"Ingresa el valor de n1: ";
	cin>> n1;
	
	cout<<"Ingresa el valor de n2: ";
	cin>> n2;
	
	cout<<"Ingresa el valor de n3: ";
	cin>> n3;
	
	if (n1>n2) {
		if (n2>n3) {
			
			cout<< n1<<endl;
			cout<< n2<<endl;
			cout<< n3<<endl;
		} else if (n2 == n3){
			
			cout<< n1<<endl;
			cout<< n2<<n3<<endl;
		}
	} else if (n2>n1) {
		if (n3>n2) {
			cout<< n3<<endl;
			cout<< n2<<endl;
			cout<< n1<<endl;
		} else if (n2 == n1) {
			cout<< n3<<endl;
			cout<< n2<<n1<<endl;
		}
	
	} else if (n3>n1) { 
		if (n2>n1) {
		cout<< n3<<endl;
		cout<< n2<<endl;
		cout<< n1<<endl;
			
		} else if (n2 == n1) {
			cout<< n3<<endl;
			cout<< n2<<n1<<endl;
			
			
		} else if (cout<< n3<<endl);
	
	} else if (n1== n2 and n3) {
		
		cout<< n1<<n2<n3<endl;
	}
	
	
	system("pause");
}
