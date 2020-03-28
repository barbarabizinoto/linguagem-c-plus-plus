#include <iostream>
using namespace std;

int main(void)
{
    int S = 0, I = 1;

    do
    {
        S += I;
        I++;
    }
    while (I <= 100);

    cout << "O somatorio representado pela sequencia 1+2+3+4+...+98+99+100 e: " << S << endl;

    return 0;
}
