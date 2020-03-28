#include <iostream>
using namespace std;

int main(void)
{
    int A, B, X;

    cout << "Insira um valor para <A>: "; cin >> A;
    cout << "Insira um valor para <B>: "; cin >> B;
    X = A;
    A = B;
    B = X;
    cout << "\nOs valores invertidos sao: " << A << " e " << B << endl;

    return 0;
}
