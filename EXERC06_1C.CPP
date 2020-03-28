#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int A[8], B[8], I, J, K;
    char LETRA;

    for (I = 0; I <= 7; I++)
    {
        cout << "Insira o " << I + 1 << "o. elemento da matriz A: ";
        cin >> A[I];
    }
    cout << endl;

    for (I = 0; I <= 7; I++)
    {
        B[I] = 1;
        for (K = 1; K <= A[I]; K++)
            B[I] *= K;
    }
    cout << endl;

    for (I = 0; I <= 7; I++)
        cout << "B[" << I + 1 << "] = " << B[I] << endl;
    cout << endl;

    cout << "Tecle <S> + <ENTER> para sair do programa: ";
    do
    {
        LETRA = cin.get();
        LETRA = toupper(LETRA);
    }
    while (LETRA != 'S');

    return 0;
}
