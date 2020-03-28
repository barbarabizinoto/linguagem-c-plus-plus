#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int A[8], B[8], I, J, X, MEIO, COMECO, FINAL, PESQ;
    char RESP;
    bool ACHA;

    for (I = 0; I <= 7; I++)
    {
        cout << "A[" << I + 1 << "] = ";
        cin >> A[I];
    }
    cout << endl;

    for (I = 0; I <= 7; I++)
        B[I] = A[I] * 5;

    for (I = 0; I <= 6; I++)
    {
        for (J = I + 1; J <= 7; J++)
        {
            if (B[I] > B[J])
            {
                X = B[I];
                B[I] = B[J];
                B[J] = X;
            }
        }
    }

    for (I = 0; I <= 7; I++)
        cout << "B[" << I + 1 << "] = " << B[I] << endl;
    cout << endl;

    do
    {
        cout << "Entre o valor a ser pesquisado na matriz B: ";
        cin >> PESQ;
        COMECO = 0;
        FINAL = 7;
        ACHA = false;
        while (COMECO <= FINAL && ACHA == false)
        {
            MEIO = (COMECO + FINAL) / 2;
            if ((PESQ, B[MEIO]) == 0)
                ACHA = true;
            else if ((PESQ, B[MEIO]) < 0)
                FINAL = MEIO - 1;
            else
                COMECO = MEIO + 1;
        }
        if (ACHA == true)
            cout << PESQ << " localizado na posição " << MEIO + 1;
        else
            cout << PESQ << " nao foi localizado";
        cout << endl;
        cout << "\nContinua? [S]/[N] + <ENTER>: ";
        cin >> RESP;
        RESP = toupper(RESP);
    }
    while (RESP == 'S');

    return 0;
}
