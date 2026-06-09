#include <iostream>
#include <vector>

using namespace std;

int matriz[6][8] = {0};

void reservar() {
    int linha, coluna;

    cout << "Qual linha voce deseja reservar? ";
    cin >> linha;

    cout << "Qual coluna voce deseja reservar? ";
    cin >> coluna;

    if (matriz[linha][coluna] == 0) {
        matriz[linha][coluna] = 1;
        cout << "Assento reservado" << endl;
    } else {
        cout << "Esse assento ja esta reservado" << endl;
    }
}

void cancelar() {
    int linha, coluna;

    cout << "Qual linha voce deseja cancelar? ";
    cin >> linha;

    cout << "Qual coluna voce deseja cancelar? ";
    cin >> coluna;

    if (matriz[linha][coluna] == 0) {
        cout << "Esse assento nao esta reservado" << endl;
    } else {
        matriz[linha][coluna] = 0;
        cout << "Assento cancelado" << endl;
    }
}

void consultar() {
    int linha, coluna;

    cout << "Qual linha voce deseja consultar? ";
    cin >> linha;

    cout << "Qual coluna voce deseja consultar? ";
    cin >> coluna;

    if (matriz[linha][coluna] == 0) {
        cout << "Esse assento nao esta reservado" << endl;
    } else {
        cout << "Esse assento esta reservado" << endl;
    }
}

void mostrar() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    bool sair = false;
    int opcao;

    while (!sair) {
        cout << "\n1- Reservar assento" << endl;
        cout << "2- Cancelar reserva" << endl;
        cout << "3- Consultar assento" << endl;
        cout << "4- Mostrar mapa da sala" << endl;
        cout << "5- Sair" << endl;

        cin >> opcao;

        switch (opcao) {
            case 1:
                reservar();
                break;
            case 2:
                cancelar();
                break;
            case 3:
                consultar();
                break;
            case 4:
                mostrar();
                break;
            case 5:
                sair = true;
                break;
            default:
                cout << "Opcao invalida" << endl;
        }
    }
}