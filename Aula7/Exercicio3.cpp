#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros(10);
    int vezes = 0;
    int numero = 0;
    int posicao = 0;
    cout << "Digite 10 numeros inteiros:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> numeros[i];
    }

    cout << "Digite o numero que voce quer pesquisar:" << endl;
    cin >> numero;

    for (int Num : numeros)
    {
        if (Num == numero)
        {
            cout << "O seu numero foi achado na posicao: " << posicao << endl;
            
            vezes++;
        }
        posicao++;
    }
    if (vezes == 0){
       cout << "O seu numero nao foi achado" << endl;
    
    }
    
}