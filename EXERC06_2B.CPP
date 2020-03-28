#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
using namespace std;

int main(void)
{
    int A[5], B[5][3], C[5], I, J, K;
    char LETRA;

    for (I = 0; I <= 4; I++)
    {
        cout << "A[" << I + 1 << "] = ";
        cin >> A[I];
    }
    cout << endl;

    for (I = 0; I <= 4; I++)
    {
        for (J = 0; J <= 2; J++)
        {
            if (J == 0)
            {
                B[I][J] = A[I] + 5;
                cout << "B[" << I + 1 << "][" << J + 1 << "] = " << B[I][J] << endl;
            }
            else if (J == 1)
            {
                C[I] = 1;
                for (K = 1; K <= A[I]; K++)
                    C[I] *= K;
                cout << "B[" << I + 1 << "][" << J + 1 << "] = " << C[I] << endl;
            }
            else if (J == 2)
            {
                B[I][J] = pow(A[I], 2);
                cout << "B[" << I + 1 << "][" << J + 1 << "] = " << B[I][J] << endl;
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
