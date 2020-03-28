#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int I, J;
    float A[3][3];
    char LETRA;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    for (I = 0; I <= 2; I++)
    {
        for (J = 0; J <= 2; J++)
        {
            cout << "A[" << I + 1 << "][" << J + 1 << "] = ";
            cin >> A[I][J];
        }
    }
    cout << endl;

    for (I = 0; I <= 2; I++)
    {
        for (J = 0; J <= 2; J++)
        {
            if (I == J)
            {
                A[I][J] *= 2;
                cout << "A[" << I + 1 << "][" << J + 1 << "] = " << A[I][J] << endl;
            }
            else
            {
                A[I][J] *= 3;
                cout << "A[" << I + 1 << "][" << J + 1 << "] = " << A[I][J] << endl;
            }
        }
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
