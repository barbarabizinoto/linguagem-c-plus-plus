#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int A[5], B[10], C[15], I, RA, RB;
    char LETRA;

    for (I = 0; I <= 4; I++)
    {
        do
        {
            cout << "Insira o " << I + 1 << "o. elemento da matriz A: ";
            cin >> A[I];
            RA = A[I] % 2;
            if (RA != 0)
                cout << "Insira um valor par." << endl;
        }
        while (RA != 0);
    }
    cout << endl;

    for (I = 0; I <= 9; I++)
    {
        do
        {
            cout << "Insira o " << setw(2) << I + 1 << "o. elemento da matriz B: ";
            cin >> B[I];
            RB = B[I] % 2;
            if (RB == 0)
                cout << "Insira um valor impar." << endl;
        }
        while (RB == 0);
    }
    cout << endl;

    for (I = 0; I <= 14; I++)
    {
        if (I <= 4)
            C[I] = A[I];
        else
            C[I] = B[I - 5];
    }

    for (I = 0; I <= 14; I++)
        cout << "C[" << setw(2) << I + 1 << "] = " << C[I] << endl;
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
