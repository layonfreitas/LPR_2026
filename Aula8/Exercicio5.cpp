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
    if(quantidadeChamados >= 10){
        cout << "Limite de chamados atingido" << endl;
    }
    else{
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
    for(int i = 0; i < quantidadeChamados; i++){
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

    int indice = -1;
    for(int i = 0; i < quantidadeChamados; i++){
        if(chamados[i].numero == numeroChamado){
            indice = i;
            break;
        }
    }

    if(indice == -1){
        cout << "Chamado nao encontrado" << endl;
        return;
    }

    int opcao;
    cout << "1 - Em andamento" << endl;
    cout << "2 - Resolvido" << endl;
    cout << "3 - Cancelado" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    if(opcao == 1)
        chamados[indice].status = "Em andamento";
    else if(opcao == 2)
        chamados[indice].status = "Resolvido";
    else if(opcao == 3)
        chamados[indice].status = "Cancelado";
    else
        cout << "Opcao invalida" << endl;
}

void estatisticas(){
    int abertos = 0, emAndamento = 0, resolvidos = 0, cancelados = 0;

    for(int i = 0; i < quantidadeChamados; i++){
        if(chamados[i].status == "Aberto")
            abertos++;
        else if(chamados[i].status == "Em andamento")
            emAndamento++;
        else if(chamados[i].status == "Resolvido")
            resolvidos++;
        else if(chamados[i].status == "Cancelado")
            cancelados++;
    }

    cout << "Abertos: " << abertos << endl;
    cout << "Em andamento: " << emAndamento << endl;
    cout << "Resolvidos: " << resolvidos << endl;
    cout << "Cancelados: " << cancelados << endl;
}

int main(){
    int opcao;

    do{
        cout << "1 - Cadastrar chamado" << endl;
        cout << "2 - Listar chamados" << endl;
        cout << "3 - Atualizar status" << endl;
        cout << "4 - Estatisticas" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        if(opcao == 1)
            cadastrarChamado();
        else if(opcao == 2)
            listarChamados();
        else if(opcao == 3)
            atualizarStatus();
        else if(opcao == 4)
            estatisticas();
        else if(opcao != 0)
            cout << "Opcao invalida" << endl;

    } while(opcao != 0);

    return 0;
}