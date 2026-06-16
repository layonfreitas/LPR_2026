#include <iostream>
#include <vector>


using namespace std;

struct Produto{
    string nome;
    double preco;
    int codigo;
    int quantidade;
};

int main(){
    Produto produto[3];

    int contador = 0;
    int valorTotal = 0;
    

    while(contador < 3){
        cout << "Produto " << contador + 1 << endl;
        cout << "Digite o nome do produto: "; 
        cin >> produto[contador].nome;
        cout << "Digite o preco do produto: ";
        cin >> produto[contador].preco;
        cout << "Digite o codigo do produto: ";
        cin >>  produto[contador].codigo;
        cout << "Digite a quantidade do produto: ";
        cin >>  produto[contador].quantidade;
        cout << endl;
        contador++;
    
    }

    for (int i = 0; i < 3; i++){
       valorTotal += produto[i].preco * produto[i].quantidade;
    }

    cout << "O valor total de produtos no estoque e de " << valorTotal << endl;


}