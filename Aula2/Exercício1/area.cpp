#include <iostream>
#include <iomanip>
#include <locale> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.utf8");
    float area, raio;
    const float pi = 3.14159;

    cout << "Digite o raio do círculo: ";
    cin >> raio;

    area = pi * raio * raio;

    cout << "A área do circulo é: " << area<< endl;


}