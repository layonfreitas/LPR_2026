#include <iostream>
#include <list>
#include <string>

using namespace std;

    struct Piloto
    {
        string nome;
        string equipe;
        int pontuacao;
    };


bool comparar(Piloto a, Piloto b)
{
    return a.pontuacao > b.pontuacao;
}


void CadastrarPiloto(list<Piloto> &pilotos)
    {
        Piloto p;

        cout << "Nome: ";
        cin >> p.nome;
        cout << endl;

        cout << "Equipe: " ;
        cin >> p.equipe;
        cout << endl;

        cout << "Pontuacao: ";
        cin >> p.pontuacao;

        cout << endl;

        pilotos.push_back(p);
    }

void ExibirRanking(list<Piloto> pilotos)
{
    pilotos.sort(comparar);

    cout << "ranking dos pilotos:" << endl;

    int posicao = 1;

    for (Piloto p : pilotos)
    {
        cout << posicao << "º Lugar" << endl;
        cout << "Nome: " << p.nome << endl;
        cout << "Equipe: " << p.equipe << endl;
        cout << "Pontuacao: " << p.pontuacao << endl;


        posicao++;
    }
}


double CalcularPontuacaoMedia(list<Piloto> pilotos)
{
    int soma = 0;

    for (Piloto p : pilotos)
    {
        soma += p.pontuacao;
    }

    return (double)soma / pilotos.size();
}

void ExibirMelhorEquipe(list<Piloto> pilotos)
{
    string melhorEquipe;
    int maiorPontuacao = 0;

    for (Piloto p : pilotos)
    {
        int soma = 0;

        for (Piloto p2 : pilotos)
        {
            if (p.equipe == p2.equipe)
            {
                soma += p2.pontuacao;
            }
        }

        if (soma > maiorPontuacao)
        {
            maiorPontuacao = soma;
            melhorEquipe = p.equipe;
        }
    }

    cout << "\nMelhor equipe: " << melhorEquipe << endl;
    cout << "Total de pontos: " << maiorPontuacao << endl;
}

int main()
{
    list<Piloto> pilotos;


    for (int i = 1; i <= 10; i++)
    {
        cout << "Piloto " << i << endl;
        CadastrarPiloto(pilotos);
    }

    ExibirRanking(pilotos);

    double media = CalcularPontuacaoMedia(pilotos);

    cout << "Media de pontos: " << media << endl;

    int acimaMedia = 0;

    for (Piloto p : pilotos)
    {
        if (p.pontuacao > media)
        {
            acimaMedia++;
        }
    }

    cout << "Pilotos acima da media: " << acimaMedia << endl;

    ExibirMelhorEquipe(pilotos);

   
}