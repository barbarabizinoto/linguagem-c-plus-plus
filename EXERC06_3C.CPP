#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int A[10], B[10], I, J, K, X;
    char LETRA;

    for (I = 0; I <= 9; I++)
    {
        cout << "Insira o " << setw(2) << I + 1 << "o. elemento da matriz A: ";
        cin >> A[I];
    }
    cout << endl;

    for (I = 0; I <= 9; I++)
    {
        B[I] = 1;
        for (J = 1; J <= A[I]; J++)
            B[I] *= J;
    }

    for (I = 0; I <= 8; I++)
    {
        for (K = I + 1; K <= 9; K++)
        {
            if (B[I] > B[K])
            {
                X = B[I];
                B[I] = B[K];
                B[K] = X;
            }
        }
    }

    for (I = 0; I <= 9; I++)
        cout << "B[" << setw(2) << I + 1 << "] = " << B[I] << endl;
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
