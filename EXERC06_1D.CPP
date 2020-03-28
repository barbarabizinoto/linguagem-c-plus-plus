#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int A[8], B[8], C[8], I;
    char LETRA;

    for (I = 0; I <= 7; I++)
    {
        cout << "Insira o " << I + 1 << "o. elemento da matriz A: ";
        cin >> A[I];
    }
    cout << endl;

    for (I = 0; I <= 7; I++)
    {
        cout << "Insira o " << I + 1 << "o. elemento da matriz B: ";
        cin >> B[I];
    }
    cout << endl;

    for (I = 0; I <= 7; I++)
        C[I] = A[I] - B[I];
    cout << endl;

    for (I = 0; I <= 7; I++)
        cout << I + 1 << "o. elemento da matriz C: " << C[I] << endl;
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
