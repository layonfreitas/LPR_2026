#include <locale> 
#include <iostream> 

using namespace std;

int inverterPositivo(int numero){
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    return invertido;
}

int inverterNegativo(int numero){
    int invertido = 0;
    numero = -numero; 

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    return -invertido; 
}   

 
int main(){
    setlocale(LC_ALL, "pt_BR.utf8");

    int numero, invertido;
    cout << "Digite um número: ";
    cin >> numero;

    if (numero >= 0){
        invertido = inverterPositivo(numero);
    } 
    else {
       invertido = inverterNegativo(numero);
    }
    cout << "Número invertido: " << invertido << endl;

}