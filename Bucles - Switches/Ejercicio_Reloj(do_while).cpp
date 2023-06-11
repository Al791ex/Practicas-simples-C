#include <iostream>
#include <string>
/*Programa que recibe como dato de entrada una hora expresada horas, minutos y segundos y escribe la nueva hora transcurrido 1 segundo hasta cumplir un minuto. 
Controlar el valor de las entradas.#
Te debe mostrar la hora cada segundo que pase hasta cumplir los diez segundos, alli debe suspender el proceso y preguntar si quieres continuar o no, partiendo de la hora en que paro
*/
using namespace std; 

int main (void) {
	string x;
	int contador = 0;
	float hora, min, seg;
	
	cout<<"Ingresa la hora: ";
	cin>>hora;
	
	cout<<"Ingresa los minutos: ";
	cin>>min;
	
	cout<<"Ingresa los segundos: ";
	cin>>seg;
	do {

		if (hora>=0 && hora<=23 && min>=0 && min<=59 && seg>=0 && seg<=59) {
		
			do {
			
			seg+=1;
		
			contador++;
		
			cout<<hora<<":"<<min<<":"<<seg<<endl;
			} while (contador<10);
		
		}else {
				cout<<"los datos ingresados son incorrectos";
			}

		cout<<"Quieres continuar? (S/N) :";
		cin>> x;
	

		if (x== "S") {
		
			do {
			seg++;
			contador++;
			cout<<hora<<":"<<min<<":"<<seg<<endl;	
					
			}while (contador<20);
		
		} else {
			cout<<"Finalizando programa...";
		}

	}while (x =="S");

	return 0;
}