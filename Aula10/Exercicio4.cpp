
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Item {
public:
    string nome;
    int durabilidade;
    int dano;

    Item(string nome, int durabilidade, int dano) {
        this->nome = nome;
        this->durabilidade = durabilidade;
        this->dano = dano;
    }

    void Usar() {
        if (durabilidade > 0) {
            durabilidade--;
            cout << "Usando " << nome
                 << ". Durabilidade restante: "
                 << durabilidade << endl;
        } else {
            cout << nome << " esta quebrado." << endl;
        }
    }

    void Reparar() {
        durabilidade = 100;
        cout << nome << " foi reparado. Durabilidade: "
             << durabilidade << endl;
    }
};

class Personagem {
public:
    string nome;
    int vida;
    int nivel;
    vector<Item> inventario;

    Personagem(string nome, int vida, int nivel) {
        this->nome = nome;
        this->vida = vida;
        this->nivel = nivel;
    }

    void atacar() {
        cout << nome << " esta atacando!" << endl;
    }

    void receberDano(int dano) {
        vida -= dano;

        if (vida < 0) {
            vida = 0;
        }

        cout << nome << " recebeu " << dano
             << " de dano. Vida restante: "
             << vida << endl;
    }

    void Comer() {
        vida += 10;

        if (vida > 20) {
            vida = 20;
        }

        cout << nome << " recuperou vida. Vida atual: "
             << vida << endl;
    }

    void MostrarStatus() {
        cout << "\nNome: " << nome << endl;
        cout << "Vida: " << vida << "/20" << endl;
        cout << "Nivel: " << nivel << endl;
        cout << "Itens: " << inventario.size() << endl;
    }
};

class Cenario {
public:
    string nome;
    string tipo;
    int perigo;
    vector<Personagem*> personagens;

    Cenario(string nome, string tipo, int perigo) {
        this->nome = nome;
        this->tipo = tipo;
        this->perigo = perigo;
    }

    void Explorar() {
        cout << "Explorando " << nome << "..." << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Nivel de perigo: " << perigo << endl;
    }

    void GerarRecursos() {
        cout << "Gerando recursos em " << nome << "..." << endl;
    }
};

int main() {
    Personagem steve("Steve", 20, 1);
    Item espada("Espada de ferro", 100, 6);
    Cenario floresta("Floresta", "Natural", 3);

    steve.inventario.push_back(espada);
    floresta.personagens.push_back(&steve);

    int opcao;

    do {
        cout << "JOGO DO STEVE" << endl;
        cout << "1 - Atacar" << endl;
        cout << "2 - Usar espada" << endl;
        cout << "3 - Reparar espada" << endl;
        cout << "4 - Receber dano" << endl;
        cout << "5 - Comer" << endl;
        cout << "6 - Ver status" << endl;
        cout << "7 - Explorar floresta" << endl;
        cout << "8 - Gerar recursos" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                steve.atacar();
                break;

            case 2:
                steve.inventario[0].Usar();
                break;

            case 3:
                steve.inventario[0].Reparar();
                break;

            case 4: {
                int dano;
                cout << "Quanto de dano Steve vai receber? ";
                cin >> dano;

                if (dano < 0) {
                    cout << "O dano nao pode ser negativo." << endl;
                } else {
                    steve.receberDano(dano);
                }
                break;
            }

            case 5:
                steve.Comer();
                break;

            case 6:
                steve.MostrarStatus();
                break;

            case 7:
                floresta.Explorar();
                break;

            case 8:
                floresta.GerarRecursos();
                break;

            case 0:
                cout << "Saindo do jogo..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

}
