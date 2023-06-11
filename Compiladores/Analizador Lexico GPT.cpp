#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Enumeración para representar los tipos de tokens
enum TipoToken {
  NUMERO,
  OPERADOR,
  PARENTESIS_IZQ,
  PARENTESIS_DER
};

// Estructura para representar un token
struct Token {
  TipoToken tipo;
  string valor;
};

// Función que realiza el análisis léxico
vector<Token> analizarLexico(const string& expresion) {
  vector<Token> tokens;
  int longitud = expresion.length();

  for (int i = 0; i < longitud; i++) {
    char c = expresion[i];

    if (c == ' ') {
      continue;  // Ignorar espacios en blanco
    } else if (isdigit(c)) {
      // Analizar un número
      string numero;
      numero += c;

      // Leer los dígitos siguientes
      while (i + 1 < longitud && isdigit(expresion[i + 1])) {
        i++;
        numero += expresion[i];
      }

      tokens.push_back({NUMERO, numero});
    } else if (c == '+' || c == '-' || c == '*' || c == '/') {
      // Analizar un operador
      tokens.push_back({OPERADOR, string(1, c)});
    } else if (c == '(') {
      // Analizar paréntesis izquierdo
      tokens.push_back({PARENTESIS_IZQ, string(1, c)});
    } else if (c == ')') {
      // Analizar paréntesis derecho
      tokens.push_back({PARENTESIS_DER, string(1, c)});
    } else {
      // Carácter no válido
      cout << "Error: Carácter no válido encontrado" << endl;
      break;
    }
  }

  return tokens;
}

// Función auxiliar para imprimir los tokens
void imprimirTokens(const vector<Token>& tokens) {
  for (const Token& token : tokens) {
    string tipo;

    switch (token.tipo) {
      case NUMERO:
        tipo = "Número";
        break;
      case OPERADOR:
        tipo = "Operador";
        break;
      case PARENTESIS_IZQ:
        tipo = "Paréntesis Izquierdo";
        break;
      case PARENTESIS_DER:
        tipo = "Paréntesis Derecho";
        break;
    }

    cout << "Tipo: " << tipo << ", Valor: " << token.valor << endl;
  }
}

int main() {
  string expresion;
  cout << "Ingrese una expresión matemática: ";
  getline(cin, expresion);

  vector<Token> tokens = analizarLexico(expresion);
  imprimirTokens(tokens);

  return 0;
}

