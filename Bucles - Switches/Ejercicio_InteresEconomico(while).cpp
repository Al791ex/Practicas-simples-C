#include <iostream>

// Escribir un programa que calcule cuantos años tarda en duplicarse un capital depositado al 5% de interes anual.


using namespace std;

int main (void) {
	
	float anio = 1, deposito, i = 0, b, c = 0, total;
	
	cout<<"Ingresa tu capital depositado: "; 
	cin>>deposito;

	b = deposito*0.05;
	cout<<"El monto por cada año de interes es: "<<b<<endl;
	
	while (i<20)  	
	{
		c = c+b; 
		cout<<"\n Cantidad de años: "<<anio<<endl<<"El monto por acumulativo por cada año de interes es:"<<c<<endl;
		i++;
		anio++;
		
	}	
	
	anio = anio--;
	total = deposito+c;
		cout<<"\nEl monto total es: "<<total<<" En "<<anio<<" Años"<<endl;
	
	
	
	return 0;
}
