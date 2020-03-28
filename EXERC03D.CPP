#include <iostream>
using namespace std;

int main(void)
{
    int A, B, C, X;

    cout << "Insira um valor para <A>: "; cin >> A;
    cout << "Insira um valor para <B>: "; cin >> B;
    cout << "Insira um valor para <C>: "; cin >> C;

    if (A > B)
    {
        X = A;
        A = B;
        B = X;
    }
    if (A > C)
    {
        X = A;
        A = C;
        C = X;
    }
    if (B > C)
    {
        X = B;
        B = C;
        C = X;
    }

    cout << "\nOrdem crescente dos valores fornecidos: " << A << ", " << B << ", " << C << "." << endl;

    return 0;
}
