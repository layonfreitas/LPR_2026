#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno;
class Turma;

class Matricula {
private:
    Aluno* aluno;
    Turma* turma;
    string data;

public:
    Matricula(Aluno* aluno, Turma* turma, string data) {
        this->aluno = aluno;
        this->turma = turma;
        this->data = data;
    }

    Aluno* getAluno() {
        return aluno;
    }

    Turma* getTurma() {
        return turma;
    }

    string getData() {
        return data;
    }
};

class Aluno {
private:
    string nome;
    vector<Matricula*> matriculas;

public:
    Aluno(string nome) {
        this->nome = nome;
    }

    string getNome() {
        return nome;
    }

    void adicionarMatricula(Matricula* matricula) {
        matriculas.push_back(matricula);
    }

    bool estaMatriculado(Turma* turma);
};

class Turma {
private:
    string nome;
    vector<Matricula*> matriculas;

public:
    Turma(string nome) {
        this->nome = nome;
    }

    string getNome() {
        return nome;
    }

    void adicionarMatricula(Matricula* matricula) {
        matriculas.push_back(matricula);
    }

    bool matricular(Aluno* aluno, string data);

    vector<Aluno*> listarAlunos() {
        vector<Aluno*> alunos;

        for (Matricula* matricula : matriculas) {
            alunos.push_back(matricula->getAluno());
        }

        return alunos;
    }
};

bool Aluno::estaMatriculado(Turma* turma) {
    for (Matricula* matricula : matriculas) {
        if (matricula->getTurma() == turma) {
            return true;
        }
    }

    return false;
}

bool Turma::matricular(Aluno* aluno, string data) {
    if (aluno->estaMatriculado(this)) {
        cout << "Aluno ja esta matriculado nesta turma!" << endl;
        return false;
    }

    Matricula* matricula = new Matricula(aluno, this, data);

    aluno->adicionarMatricula(matricula);
    adicionarMatricula(matricula);

    cout << "Matricula realizada com sucesso!" << endl;

    return true;
}

int main() {
    vector<Aluno*> alunos;
    vector<Turma*> turmas;

    int opcao;

    do {
        cout << " SISTEMA DE MATRICULAS" << endl;
        cout << "1 - Cadastrar aluno" << endl;
        cout << "2 - Cadastrar turma" << endl;
        cout << "3 - Matricular aluno" << endl;
        cout << "4 - Listar alunos de uma turma" << endl;
        cout << "5 - Listar alunos cadastrados" << endl;
        cout << "6 - Listar turmas cadastradas" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            string nome;

            cout << "Digite o nome do aluno: ";
            getline(cin, nome);

            alunos.push_back(new Aluno(nome));

            cout << "Aluno cadastrado com sucesso!" << endl;
        }

        else if (opcao == 2) {
            string nome;

            cout << "Digite o nome da turma: ";
            getline(cin, nome);

            turmas.push_back(new Turma(nome));

            cout << "Turma cadastrada com sucesso!" << endl;
        }

        else if (opcao == 3) {
            if (alunos.empty() || turmas.empty()) {
                cout << "Cadastre pelo menos um aluno e uma turma!" << endl;
            } else {
                cout << "ALUNOS" << endl;

                for (int i = 0; i < alunos.size(); i++) {
                    cout << i << " - " << alunos[i]->getNome() << endl;
                }

                int indiceAluno;

                cout << "Escolha o numero do aluno: ";
                cin >> indiceAluno;
                cin.ignore();

                if (indiceAluno < 0 || indiceAluno >= alunos.size()) {
                    cout << "Aluno invalido!" << endl;
                } else {
                    cout << "TURMAS" << endl;

                    for (int i = 0; i < turmas.size(); i++) {
                        cout << i << " - " << turmas[i]->getNome() << endl;
                    }

                    int indiceTurma;

                    cout << "Escolha o numero da turma: ";
                    cin >> indiceTurma;
                    cin.ignore();

                    if (indiceTurma < 0 || indiceTurma >= turmas.size()) {
                        cout << "Turma invalida!" << endl;
                    } else {
                        string data;

                        cout << "Digite a data da matricula (DD/MM/AAAA): ";
                        getline(cin, data);

                        turmas[indiceTurma]->matricular(
                            alunos[indiceAluno],
                            data
                        );
                    }
                }
            }
        }

        else if (opcao == 4) {
            if (turmas.empty()) {
                cout << "Nenhuma turma cadastrada!" << endl;
            } else {
                cout << "TURMAS" << endl;

                for (int i = 0; i < turmas.size(); i++) {
                    cout << i << " - " << turmas[i]->getNome() << endl;
                }

                int indice;

                cout << "Escolha a turma: ";
                cin >> indice;
                cin.ignore();

                if (indice < 0 || indice >= turmas.size()) {
                    cout << "Turma invalida!" << endl;
                } else {
                    vector<Aluno*> lista = turmas[indice]->listarAlunos();

                    cout << "Alunos da turma "
                         << turmas[indice]->getNome() << ":" << endl;

                    if (lista.empty()) {
                        cout << "Nenhum aluno matriculado." << endl;
                    } else {
                        for (Aluno* aluno : lista) {
                            cout << aluno->getNome() << endl;
                        }
                    }
                }
            }
        }

        else if (opcao == 5) {
            cout << "ALUNOS CADASTRADOS" << endl;

            for (Aluno* aluno : alunos) {
                cout << aluno->getNome() << endl;
            }

            if (alunos.empty()) {
                cout << "Nenhum aluno cadastrado." << endl;
            }
        }

        else if (opcao == 6) {
            cout << "TURMAS CADASTRADAS" << endl;

            for (Turma* turma : turmas) {
                cout << turma->getNome() << endl;
            }

            if (turmas.empty()) {
                cout << "Nenhuma turma cadastrada." << endl;
            }
        }

        else if (opcao != 0) {
            cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

    for (Aluno* aluno : alunos) {
        delete aluno;
    }

    for (Turma* turma : turmas) {
        delete turma;
    }


}