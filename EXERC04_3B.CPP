#include <iostream>
using namespace std;

int main(void)
{
    int S = 0, I;

    for (I = 1; I <= 100; I++)
        S += I;

    cout << "O somatorio representado pela sequencia 1+2+3+4+...+98+99+100 e: " << S << endl;

    return 0;
}
