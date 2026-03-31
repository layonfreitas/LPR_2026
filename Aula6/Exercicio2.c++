#include <iostream>
#include <locale> //Para usar acentuação
using namespace std;

void mediaPar(){
     int quantidade;
    cout << "Digite a quantidade de números a serem inseridos: ";
    cin >> quantidade;

    int soma = 0;
    int contador = 0;
    

    while (quantidade > 0) {
        int numero;
        cout << "Digite um número: ";
        cin >> numero;

        if (numero % 2 == 0) {
            soma += numero;
            contador++;
        }

        quantidade--;
    }

    if (contador > 0) {
        double media = static_cast<double>(soma) / contador;
        cout << "A média dos números pares é: " << media << endl;
    } else {
        cout << "Nenhum número par foi digitado." << endl;
    }

    
}
void soma(){
    int soma = 0;

    for (int i = 50; i <= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i; 
        }
    }

    cout << "A soma dos números ímpares múltiplos de 3 de 50 a 500 é: " << soma << endl;
}

void quadrado(){
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    int quadrado = numero * numero;
    int somaDigitos = 0;

    while (quadrado > 0) {
        somaDigitos += quadrado % 10; 
        quadrado /= 10; 
    }

    cout << "A soma dos dígitos do quadrado de " << numero << " é: " << somaDigitos << endl;
}

int main()
{   
    setlocale(LC_ALL, "pt_BR.utf8");

    cout << "1 - Média de números pares" << endl;
    cout << "2 - Soma de números ímpares múltiplos de 3 de 50 a 500" << endl;
    cout << "3 - Soma dos dígitos do quadrado de um número" << endl;
    cout << "Digite a opção desejada: ";
    int opcao;
    cin >> opcao;
    switch (opcao) {
        case 1:
            mediaPar();
            break;
        case 2:
            soma();
            break;
        case 3:
            quadrado();
            break;
        default:
            cout << "Opção inválida." << endl;
    }

}