#include <iostream>
#include <vector>


using namespace std;

struct Filme{
    string titulo;
    string diretor;
    int duracaoMinutos;
    int anoLancamento;
};
int main()
{
    Filme filme[3];

    int contador = 0;
    int anoAntigo = 9999999; // um valor grande para fazer a verificação do filme mais antigo
    string tituloAntigo;


    while(contador < 3){
        cout << "Filme " << contador + 1 << endl;
        cout << "Digite o titulo do filme: "; 
        cin >> filme[contador].titulo;
        cout << "Digite o nome do diretor: ";
        cin >> filme[contador].diretor;
        cout << "Digite a duracao do filme em minutos: ";
        cin >> filme[contador].duracaoMinutos;
        cout << "Digite o ano de lancamento do filme: ";
        cin >>  filme[contador].anoLancamento;
        cout << endl;
        contador++;
    }
    cout << "Os filmes cadastrados sao: " << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Filme " << i + 1 << endl;
        cout << "Titulo: " << filme[i].titulo << endl;
        cout << "Diretor: " << filme[i].diretor << endl;
        cout << "Duracao: " << filme[i].duracaoMinutos << endl;
        cout << "Ano de lancamento: " << filme[i].anoLancamento << endl;
        cout << endl;

        if (filme[i].anoLancamento < anoAntigo)
        {
            anoAntigo = filme[i].anoLancamento;
            tituloAntigo = filme[i].titulo;
        }
    
    }

    cout << "O filme mais antigo e o " << tituloAntigo  <<  " e ele foi lancado em " << anoAntigo << endl;




    





}