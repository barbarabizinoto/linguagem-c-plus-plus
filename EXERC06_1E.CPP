#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int A[10], B[10], C[20], I;
    char LETRA;

    for (I = 0; I <= 9; I++)
    {
        cout << "Insira o " << setw(2) << I + 1 << "o. elemento da matriz A: ";
        cin >> A[I];
    }
    cout << endl;

    for (I = 0; I <= 9; I++)
    {
        cout << "Insira o " << setw(2) << I + 1 << "o. elemento da matriz B: ";
        cin >> B[I];
    }
    cout << endl;

    for (I = 0; I <= 9; I++)
    {
        C[I] = A[I];
        C[I + 10] = B[I];
    }
    cout << endl;

    for (I = 0; I <= 19; I++)
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
