#include <iostream>
using namespace std;

int main(void)
{
    int S = 0, I = 1;

    while (I <= 100)
    {
        S += I;
        I++;
    }

    cout << "O somatorio representado pela sequencia 1+2+3+4+...+98+99+100 e: " << S << endl;

    return 0;
}
