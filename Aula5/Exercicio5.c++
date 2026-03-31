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
        acumulador += horaDia;
    
        contador++;
    }
     int semanas = contador / 5;
     int meses = semanas / 4.5;
    cout << "O total de horas de treinamento é: " << acumulador  << endl;
    cout << "O número de dias necessários é: " << contador  << endl;
    cout << "O número de semanas necessários é: " << semanas  << endl;
    cout << "O número de meses necessários é: " << meses << endl;
    
}