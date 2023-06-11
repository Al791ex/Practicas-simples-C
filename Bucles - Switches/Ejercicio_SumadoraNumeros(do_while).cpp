#include <iostream>

using namespace std;

int main (int argc , char** argv) {
	
	int contador = 0 , suma = 0 , num , n;
	
		cout<<"Introduzca la cantidad de numeros a sumar: ";
		cin>>num;
	
	do {
		
		cout<<"Introduzca un numero: ";
		cin>>n;
		
		if (n>=0) {
			
			suma = suma + n;
			contador++;
		
		} else {
			
			cout<<"El programa ha FINALIZADO...."<<endl;
			break;
			
		}
	}while (contador<num);
	
	cout<<"La suma de los numeros seleccionados es: "<<suma;
	
	return 0;
} 
