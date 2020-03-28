#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int I, J;
    char LETRA, A[12][40], B[11][40], X[40], C[23][40];

    for (I = 0; I <= 11; I++)
    {
        cout << "A[" << setw(2) << I + 1 << "] = ";
        cin.getline(A[I], sizeof(A[I]));
    }
    cout << endl;

    for (I = 0; I <= 10; I++)
    {
        cout << "B[" << setw(2) <<  I + 1 << "] = ";
        cin.getline(B[I], sizeof(B[I]));
    }
    cout << endl;

    for (I = 0; I <= 22; I++)
    {
        if (I <= 10)
            C[I][J] = A[I][J];
        else
            C[I][J] = A[I - 11][J];
    }

    for (I = 0; I <= 22; I++)
    {
        cout << "C[" << setw(2) << I + 1 << "] = " << C[I][J] << endl;
    }

    cout << "Tecle <S> + <ENTER> para sair do programa: ";
    do
    {
        LETRA = cin.get();
        LETRA = toupper(LETRA);
    }
    while (LETRA != 'S');

    return 0;
}
