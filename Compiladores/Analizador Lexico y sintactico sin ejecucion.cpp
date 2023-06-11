//Analizador lexico
#include <iostream>
#include <string>
using namespace std;


string Lexer(string expresion){
	
	int longitud = expresion.length();
	
	for (int i= 0; i<longitud; i++){
		
		if(expresion[i] == ' '){
			continue;
			
		}else if (isdigit(expresion[i])){
			
			string tokenN;
			tokenN = tokenN + expresion[i];
			cout<<"Token numerico: "<<tokenN<<endl;
				
		}else if (expresion[i] == '+' || expresion[i] == '-' || expresion[i] == '*' || expresion[i] == '/' || expresion[i] == '%') {
			
			string tokenA;
			tokenA = tokenA + expresion[i];
            cout<<"Token Aritmetico: "<<tokenA<<endl;
        }
        else{
        	cout<<"Error: Token invalido"<<endl;
        }
	}
}

string Parser(string expresion){
	
	int longitud = expresion.length();
	bool numeroAnterior;
	
	for (int i= 0; i<longitud; i++){
		
		if(expresion[i] == ' '){
			continue;
			
		}else if (isdigit(expresion[i])){
			numeroAnterior = true;
				
		}else if (expresion[i] == '+' || expresion[i] == '-' || expresion[i] == '*' || expresion[i] == '/' || expresion[i] == '%') {
			if (numeroAnterior == false){
				cout<<"Sintaxis invalida";
			}
		numeroAnterior = false;
        }else{
        	 cout<<"Sintaxis invalida";
        }
		
	}
	
}
int main(){
	string expresion;
	bool activar = false;
	cout<<"Ingresa una expresion matematica: ";
	getline(cin,expresion);
	
	string lexer = Lexer(expresion);
	string parser = Parser(expresion);
	
	return 0;
	
} 
		
	
	



