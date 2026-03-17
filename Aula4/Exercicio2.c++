#include <iostream>
#include <iomanip>
#include <locale> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.utf8");
    int numero1, numerro2;
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numerro2;

     if (numero1 % numerro2 == 0 || numerro2 % numero1 == 0 ) {
        cout << "Os números são múltiplos." << endl;
     }
     else {
        cout << "Os números não são múltiplos." << endl;
     }
}
    

