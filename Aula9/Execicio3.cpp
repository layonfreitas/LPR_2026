#include <iostream>
#include <random>
#include <list>

using namespace std;

int main() {
    list<int> numeros;
    // gerar uma semente aleatória
    random_device rd;
    mt19937 gen(rd());
    // gerar números aleatórios entre 1 e 100
    uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < 100; i++) {
        numeros.push_back(dis(gen));
    }
    numeros.sort();
    for (int numero : numeros) {
        cout << numero << endl;
    }
    for (auto it = numeros.begin(); it != numeros.end(); ) {
        if (*it % 2 == 0) {
            it = numeros.erase(it); // Remove o elemento e vai para o próximo
        } else {
            ++it;
        }
    }
    for (int numero : numeros) {
        cout << numero << endl;
    }

    for (auto it = numeros.begin(); it != numeros.end(); ++it) {
    auto prox = it;
    ++prox;

    if (prox != numeros.end() && *it == *prox) {
        cout << "Numero repetido: " << *it << endl;
    }
}
}
