#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int A[10], B[10], I;
    char LETRA;

    for (I = 0; I <= 9; I++)
    {
        cout << "A[" << setw(2) << I + 1 << "] = ";
        cin >> A[I];
    }
    cout << endl;

    for (I = 0; I <= 9; I++)
        B[I] = A[9 - I];

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
