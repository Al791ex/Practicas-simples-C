#include <iostream>
#include <iomanip>

// Segun el dato introducido por el usuario se mostrara en pantalla un dia de la semana diferente

using namespace std; 

int main(void) {
	
	int Dia;
	
	cout<<"Ingresa un numero: ";
	cin>>Dia;
	
	if (Dia == 0 or Dia >=8) {
		
		cout<<"El numero que ingreso es INVALIDO"<<endl;
		
	} else if (Dia == 1) {
		cout<< "Lunes"<<endl;	
	
	} else if (Dia == 2) {
		cout<< "Martes"<<endl;
	
	} else if (Dia == 3) {
		cout<< "Miercoles"<<endl;
	
	} else if (Dia == 4) {
		cout<< "Jueves"<<endl;
	
	} else if (Dia == 5) {	
		cout<< "Viernes"<<endl;
	
	} else if (Dia == 6) {
		cout<< "Sabado"<<endl;
	
	} else if (Dia == 7) {
	
		cout<<"Domingo";
	}
	
	
	
	
	
	
	
	
	system("pause");
}
