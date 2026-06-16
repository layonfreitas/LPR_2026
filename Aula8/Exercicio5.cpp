#include <iostream>
#include <vector>


using namespace std;

struct Chamado{
    int numero;
    int prioridade;
    string solicitante;
    string setor;
    string descricao;
    string status;
};

    Chamado chamados[10];
    int quantidadeChamados = 0;

string classificarPrioridade(int prioridade){
    if(prioridade == 1)
        return "Baixa";
    else if(prioridade == 2)
        return "Media";
    else if(prioridade == 3)
        return "Alta";
    else
        return "Invalida";
}


void cadastrarChamado(){

    if (quantidadeChamados >= 10){
        cout << "Limite de chamados atingido" << endl;
        
    }
    else {
    
    cout << "Numero do chamado: ";
    cin >> chamados[quantidadeChamados].numero;
    cout << "Prioridade 1-Baixa, 2-Media, 3-Alta: ";
    cin >> chamados[quantidadeChamados].prioridade;
    cout << "Solicitante: ";
    cin >> chamados[quantidadeChamados].solicitante;
    cout << "Setor: ";
    cin >> chamados[quantidadeChamados].setor;
    cout << "Descricao: ";
    cin >> chamados[quantidadeChamados].descricao;


    chamados[quantidadeChamados].status = "Aberto";
    
    cout << "Chamado cadastrado" << endl;

    quantidadeChamados++;

    }

}

void listarChamados(){
    cout << "Lista de chamados:" << endl;
    for (int i = 0; i < quantidadeChamados; i++){
        cout << "Numero: " << chamados[i].numero << endl;
        cout << "Prioridade: " << classificarPrioridade(chamados[i].prioridade) << endl;
        cout << "Solicitante: " << chamados[i].solicitante << endl;
        cout << "Setor: " << chamados[i].setor << endl;
        cout << "Descricao: " << chamados[i].descricao << endl;
        cout << "Status: " << chamados[i].status << endl;
    }
}

void atualizarStatus(){
    int numeroChamado;
    cout << "Digite o numero do chamado que deseja atualizar: ";
    cin >> numeroChamado;

    cout << "Digite qual é o status:";
    cin >> chamados[numeroChamado].status;

}




int main(){


}