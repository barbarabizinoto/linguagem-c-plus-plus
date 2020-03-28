#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
using namespace std;

int main(void)
{
    int A[15], B[15], I;
    char LETRA;

    for (I = 0; I <= 14; I++)
    {
        cout << "A[" << setw(2) << I + 1 << "] = ";
        cin >> A[I];
    }
    cout << endl;

    for (I = 0; I <= 14; I++)
        B[I] = pow(A[I],2);

    for (I = 0; I <= 14; I++)
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
