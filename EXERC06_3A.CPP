#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main(void)
{
    int I, J;
    char LETRA, A[12][40], X[40];

    for (I = 0; I <= 11; I++)
    {
        cout << "Informe o " << setw(2) << I + 1 << "o. nome: ";
        cin.getline(A[I], sizeof(A[I]));
    }
    cout << endl;

    for (I = 0; I <= 10; I++)
    {
        for (J = I + 1; J <= 11; J++)
        {
            if (strcmp(A[I], A[J]) < 0)
            {
                strcpy(X, A[I]);
                strcpy(A[I], A[J]);
                strcpy(A[J], X);
            }
        }
    }

    for (I = 0; I <= 11; I++)
        cout << setw(2) << I + 1 << "o. nome: " << A[I] << endl;
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
