#include <locale> 
#include <iostream> 

using namespace std;

void inverterPositivo(int numero){
    int invertido = 0;
    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    cout << "Número invertido: " << invertido << endl;
}

void inverterNegativo(int numero){
    int invertido = 0;
    numero = -numero; // Tornar o número positivo para inverter
    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    cout << "Número invertido: -" << invertido << endl; // Adicionar o sinal negativo de volta
}   

 
int main(){
    setlocale(LC_ALL, "pt_BR.utf8");

    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    if (numero >= 0){
        inverterPositivo(numero);
    } 
    else {
        inverterNegativo(numero);
    }
    
    
}