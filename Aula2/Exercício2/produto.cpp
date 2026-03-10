#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int A, B, C, D, diferenca;
   cout << "Digite os valores para A, B, C e D: ";
   cin >> A >> B >> C >> D;
   diferenca = (A * B) - (C * D);
   cout << "DIFERENCA = " << diferenca << endl;
   
}