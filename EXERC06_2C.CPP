#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int I, J;
    float A[4][4], B[4][4], C[4][4];
    char LETRA;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    for (I = 0; I <= 3; I++)
    {
        for (J = 0; J <= 3; J++)
        {
            cout << "A[" << I + 1 << "][" << J + 1 << "] = ";
            cin >> A[I][J];
        }
    }
    cout << endl;

    for (I = 0; I <= 3; I++)
    {
        for (J = 0; J <= 3; J++)
        {
            cout << "B[" << I + 1 << "][" << J + 1 << "] = ";
            cin >> B[I][J];
        }
    }
    cout << endl;

    for (I = 0; I <= 3; I++)
    {
        for (J = 0; J <= 3; J++)
        {
            C[I][J] = A[I][J] - B[I][J];
        }
    }

    for (I = 0; I <= 3; I++)
    {
        for (J = 0; J <= 3; J++)
            cout << "C[" << I + 1 << "][" << J + 1 << "] = " << C[I][J] << endl;;
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
