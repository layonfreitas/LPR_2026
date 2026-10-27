#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Reserva {
    private:
        int codigo;
        string data;
        string nomeCliente;

    public:
        Reserva(int codigo, string data, string nomeCliente) {
            this->codigo = codigo;
            this->data = data;
            this->nomeCliente = nomeCliente;
        }

        void exibir() {
            cout << "Codigo: " << codigo
                 << ", Data: " << data
                 << ", Cliente: " << nomeCliente << endl;
        }
};

class Cliente {
    private:
        string nome;
        vector<Reserva> reservas;

    public:
        Cliente(string nome) {
            this->nome = nome;
        }

        void adicionarReserva(Reserva reserva) {
            reservas.push_back(reserva);
        }

        void listarReservas() {
            cout << "\nReservas de " << nome << ":" << endl;

            if (reservas.empty()) {
                cout << "Nenhuma reserva cadastrada." << endl;
                return;
            }

            for (Reserva reserva : reservas) {
                reserva.exibir();
            }
        }
};

int main() {
    string nome;
    int codigo;
    string data;
    char continuar;

    cout << "Digite o nome do cliente: ";
    getline(cin, nome);

    Cliente cliente(nome);

    do {
        cout << "Digite o codigo da reserva: ";
        cin >> codigo;

        cout << "Digite a data da reserva: ";
        cin >> data;

        Reserva reserva(codigo, data, nome);
        cliente.adicionarReserva(reserva);

        cout << "Deseja adicionar outra reserva? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cliente.listarReservas();

    return 0;
}