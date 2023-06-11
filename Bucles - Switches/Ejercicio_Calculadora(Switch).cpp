#include <iostream>
#include <string>

/*
Desarrollar un programa que simule una calculadora y que con la opcion 1 sume, 2 reste, 3multiplicacion, 4division, 5modulo
*/
using namespace std; 

int main (void) {
	
	int operacion, num1, num2;
	float n1 , n2 , suma, resta, multiplicacion, division, modulo;
	string aux; 
	
	
	do {
	
		cout<<"Ingresa un numero segun la opcion a elegir: ";
		cout<<"\n1.Suma";
		cout<<"\n2.Resta";
		cout<<"\n3.Multiplicacion";
		cout<<"\n4.Division";
		cout<<"\n5.Modulo"<<endl;
		cout<<endl;
		cin>>operacion;
	
	
	
		cout<<"Ingresa el n1: " ;
		cin>>n1;
	
		cout<<"ingresa el n2: ";
		cin>>n2;
	
		num1 = n1;
		num2 = n2;
	
		switch(operacion) {
		
		case 1: 
			
			suma = n1+n2;
			cout<<"El resultado de la operacion es: "<<suma<<endl;
		break;
		
		case 2: 
			
			resta = n1-n2;
			cout<<"El resultado de la operacion es: "<<resta<<endl;
		break;
		
		case 3: 
			
			multiplicacion = n1*n2;
			cout<<"El resultado de la operacion es: "<<multiplicacion<<endl;
		break;
		
		case 4: 
			
			division = n1/n2;
			cout<<"El resultado de la operacion es: "<<division<<endl;
		break;
		
		case 5: 
			
			modulo = num1%num2;
			cout<<"El resultado de la operacion es: "<<modulo<<endl;
		break;
		
		default:
			
			cout<<"El dato ingresado es INVALIDO"<<endl;
			
	}
		
	cout<<"Desea continuar? digite (S), en caso contrario digite (N): "<<endl;
	cin>>aux;	
		
	} while (aux == "S" );
		
	return 0;
}
