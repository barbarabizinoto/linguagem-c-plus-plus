#include <iostream>
using namespace std;

int main(void)
{
    int I = 1, R, S = 0;

    do
    {
        R = I % 2;
        if (R == 0)
            S += I;
        I++;
    }
    while (I <= 50);

    cout << "\nA soma de todos os valores pares existentes na faixa numerica de 1 a 50 e: " << S << endl;

    return 0;
}
