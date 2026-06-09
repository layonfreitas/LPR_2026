#include <iostream>
#include <vector>

using namespace std;

int main (){
    int matriz[6][8] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    bool sair = false;
    int opcao, linha, coluna;

    while (!sair){
        cout << "digite uma opcao" << endl;
        cout << "1- Reservar assento" << endl;
        cout << "2- Cancelar reserva" << endl;
        cout << "3- Consultar assento" << endl;
        cout << "4- Mostrar mapa da sala"<< endl;
        cout << "5- Sair" << endl;

        cin >> opcao;

        switch (opcao){
            case 1:
                cout << "qual linha voce deseja reservar" << endl;
                cin >> linha;
                cout << "qual coluna voce deseja reservar" << endl;
                cin >> coluna;

                if(matriz[linha][coluna] == 0){
                    cout << "acento reservado" << endl;
                }
                else {
                 cout << " esse acento ja esta reservado" << endl;
                }
                
            case 2:
            case 3:
            case 4:
            case 5:
            default:


        }
    }
}