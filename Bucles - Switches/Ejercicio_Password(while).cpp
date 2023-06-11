#include <iostream>

using namespace std;

int main (int argc , char** argv) {
	
	int pass;
	
	cout<<"Ingresa tu contrasena: ";
	cin>>pass;
	
	while (pass != 4567) {
		pass = 0;
		
		cout<<"Contrasena incorrecta, intentalo de nuevo: ";
		cin>>pass;
		
	}
	
	cout<<"\nContrasena correcta, puedes pasar";
	return 0;
} 
