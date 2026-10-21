#include <iostream>
#include <string>

using namespace std;

class Funcionario {
private:
    string nome;
    double salarioBruto;
    double imposto;
public:
    Funcionario(string n, double s){
        nome = n;
        salarioBruto = s;

        if (salarioBruto <= 2000) {
            imposto = 0.1;
        } else if (salarioBruto <= 3000) {
            imposto = 0.15;
        } else {
            imposto = 0.2;
        }
    }

    double salarioLiquido() {
        return salarioBruto - (salarioBruto * imposto);
    }

    void mostrarDados(){
        cout << "Nome:" << nome << endl;
        cout << "Salario liquido: " << salarioLiquido() << endl;
    }

    void aumentarSalario(double percentual) {
        salarioBruto += salarioBruto * (percentual / 100);
        if (salarioBruto <= 2000) {
            imposto = 0.1;
        } else if (salarioBruto <= 3000) {
            imposto = 0.15;
        } else {
            imposto = 0.2;
        }
    }
};
    


int main() {
  string nome;
  double salario, percentual;

  cout << "Digite o nome do funcionário: ";
  cin >> nome;
  cout << "Digite o salário bruto: ";
  cin >> salario;
  
  Funcionario f(nome, salario);
  cout << "Dados do funcionário antes do aumento:" << endl;
  f.mostrarDados();
    cout << "Digite o percentual de aumento: ";
    cin >> percentual;
  f.aumentarSalario(percentual);
  cout << "Dados do funcionário após o aumento:" << endl;
  f.mostrarDados();


}
