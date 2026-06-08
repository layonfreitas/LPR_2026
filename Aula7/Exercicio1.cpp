#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros(5);

    int contador = 0;
    int maiornumero = 0;
    int posicao = 0;

    cout << "Digite 5 numeros inteiros: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> numeros[i];
    }
    cout << "Os numeros do vetores sao:";
    for (int Num : numeros)
    {
        cout << Num << " ";

        if (Num > maiornumero)
        {
            maiornumero = Num;
            posicao = contador;
        }
        contador++;
    

    }
    cout << endl;
    cout << "O maior numero e: " << maiornumero << endl;
    cout << "A posicao do maior numero e: " << posicao << endl;
   


}