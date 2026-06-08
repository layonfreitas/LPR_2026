#include <iostream>
#include <vector>

using namespace std;

int recuperaçao = 0;
int reprovado = 0;
int aprovado = 0;


void ClassificarAluno(string nome, int nota) {
    if (nota < 60) {
        cout << "A situacao do aluno " << nome << " e reprovado" << endl;
        reprovado++;
    }
    else if (nota <= 79) {
        cout << "A situacao do aluno " << nome << " e de recuperacao" << endl;
        recuperaçao++;
    }
    else {
        cout << "A situacao do aluno " << nome << " e aprovado" << endl;
        aprovado++;
    }
}

int main() {
    vector<string> nomes(10);
    vector<int> notas(10);

    int contador = 0;
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;
    int nota;
    int soma = 0; 
    int media;


    cout << "Digite os nomes dos alunos" << endl;

    while (contador < 10) {
        cin >> nomes[contador];
        contador++;
    }

    cout << "Digite as notas dos alunos" << endl;

    while (contador1 < 10) {
        cout << "Digite a nota do aluno: " << nomes[contador1] << endl;
        cin >> nota;
        if (nota >= 0 && nota <= 100){
            notas[contador1] = nota;
            contador1++;
        }
        else {
            cout << "Nota invalida" << endl;
        }
    }

    while (contador2 < 10) {
        ClassificarAluno(nomes[contador2], notas[contador2]);
        contador2++;
    }

    while (contador3 < 10){

        soma += notas[contador3];
        contador3++;

        

    }

    media = soma / 10;

    cout << "A quantidade de alunos aprovados e: " << aprovado << endl;
    cout << "A quantidade de alunos de recuperacao e: " << recuperaçao << endl;
    cout << "A quantidade de alunos reprovados e: " << reprovado << endl;
    cout << "A media da turma e "<< media << endl;





}