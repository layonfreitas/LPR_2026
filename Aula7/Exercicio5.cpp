#include <iostream>
#include <vector>


using namespace std;

int main(){
    int matriz[3][3];
    int soma = 0;

    cout << "digite os valores da matriz" << endl;
    
    for(int i = 0; i < 3; i++){
         for(int j = 0; j < 3; j++){
            cout << "Digite o valor da posicao [" << i << "][" << j << "]:" << endl; 
            cin >> matriz[i][j];
         }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "o numero na linha " << i << " e na coluna " << j << " o valor e " << matriz[i][j] << endl;
            soma += matriz[i][j];
         }
    }

    cout << "a soma de todos os termo e " << soma << endl;
    
}