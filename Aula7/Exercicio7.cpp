#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3];

    cout << "Digite os valores da matriz A:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Digite o valor da posicao [" << i << "][" << j << "]:" << endl; 
            cin >> matrizA[i][j];
        }
    }

    cout << "Digite os valores da matriz B:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Digite o valor da posicao [" << i << "][" << j << "]:" << endl; 
            cin >> matrizB[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matrizC[i][j] = 0;

            for(int k = 0; k < 3; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    cout << "Matriz C:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Posicao [" << i << "][" << j << "] = ";
            cout << matrizC[i][j] << endl;
        }
      
    }



  
}