#include <locale> 
#include <iostream> 

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.utf8");
    int horaDia, acumulador = 0, contador = 0;
    cout << "Digite a quatidade de horas de treinamento por dia ";
    cin >> horaDia;
    
    while (acumulador < 1000)
    {
        acumulador += horaDia * 5;
    
        contador++;
    }
     ;
    cout << "O número de dias necessários para chegar a 1000 horas de treinamento é: " << contador * 5 << endl;
    cout << "O número de semanas necessários para chegar a 1000 horas de treinamento é: " << contador  << endl;
    cout << "O número de meses necessários para chegar a 1000 horas de treinamento é: " << contador / 4.5 << endl;
    
}