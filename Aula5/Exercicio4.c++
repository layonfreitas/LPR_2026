#include <locale> 
#include <iostream> 

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.utf8");
    int numero,soma = 0;
    cout << "Digite um número: ";
    cin >> numero;
    int numeroQuadrado = numero * numero;
  
    
    while(numeroQuadrado > 0 )
    {
      int valor = numeroQuadrado % 10;
      soma += valor;
      numeroQuadrado /= 10;
    }
  
    cout << "A soma dos dígitos do quadrado é: " << soma << endl;

}