#include <iostream>
using namespace std;

int main(void)
{
    int A, B, R;

    cout << "Insira um valor para <A>: "; cin >> A;
    cout << "Insira um valor para <B>: "; cin >> B;

    if (A > B)
        R = A - B;
    else
        R = B - A;

    cout << "\nA diferença do maior valor pelo menor valor e: " << R << endl;

    return 0;
}
