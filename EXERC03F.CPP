#include <iostream>
using namespace std;

int main(void)
{
    int A, B, C, D, A2, A3, B2, B3, C2, C3, D2, D3;

    cout << "Insira um valor para <A>: "; cin >> A;
    cout << "Insira um valor para <B>: "; cin >> B;
    cout << "Insira um valor para <C>: "; cin >> C;
    cout << "Insira um valor para <D>: "; cin >> D;
    A2 = A % 2;
    A3 = A % 3;
    B2 = B % 2;
    B3 = B % 3;
    C2 = C % 2;
    C3 = C % 3;
    D2 = D % 2;
    D3 = D % 3;

    if (A2 == 0 or A3 == 0)
        cout << "\n" << A << " e divisivel por 2 ou 3." << endl;
    if (B2 == 0 or B3 == 0)
        cout << "\n" << B << " e divisivel por 2 ou 3." << endl;
    if (C2 == 0 or C3 == 0)
        cout << "\n" << C << " e divisivel por 2 ou 3." << endl;
    if (D2 == 0 or D3 == 0)
        cout << "\n" << D << " e divisivel por 2 ou 3." << endl;

    return 0;
}
