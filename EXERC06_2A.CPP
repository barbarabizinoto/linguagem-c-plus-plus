#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int A[5][3], B[5][3], C[5][3], I, J;
    char LETRA;

    for (I = 0; I <= 4; I++)
    {
        for (J = 0; J <= 2; J++)
        {
            cout << "A[" << I + 1 << "][" << J + 1 << "] = ";
            cin >> A[I][J];


        }
    }
    cout << endl;

    for (I = 0; I <= 4; I++)
    {
        for (J = 0; J <= 2; J++)
        {
            cout << "B[" << I + 1 << "][" << J + 1 << "] = ";
            cin >> B[I][J];
        }
    }
    cout << endl;

    for (I = 0; I <= 4; I++)
    {
        for (J = 0; J <= 2; J++)
            C[I][J] = A[I][J] + B[I][J];
    }

    for (I = 0; I <= 4; I++)
    {
        for (J = 0; J <= 2; J++)
            cout << "C[" << I + 1 << "][" << J + 1 << "] = " << C[I][J] << endl;
    }
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
