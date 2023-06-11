#include <iostream>
#include <string>


using namespace std;

int main (void) {
	
	string titulos [5];
	string autores [5];
	
	cout<<"Por favor ingrese la siguiente informacion de los libros: "<<endl;
	
	
	
	for (int i =0 ; i<5 ; i++){
		
		cout<<"\n***** libros"<<i + 1<<"******:\n";
		cout<<"titulo: ";
		//cin>>titulos[i];
		getline (cin, titulos[i]);
		cout<<"autor: ";
		//cin>>autores[i];
		getline (cin,autores[i]);
		
		
		
	}	
		
	cout<<"Autor: "<<autores[0]<<endl;
	cout<<"titulo: "<<titulos[0]<<endl;

	
	
	
	
	
	
	return 0;
}
