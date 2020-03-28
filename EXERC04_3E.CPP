#include <iostream>
using namespace std;

int main(void)
{
    int I, R, S = 0;

    for (I = 1; I <= 50; I++)
    {
        R = I % 2;
        if (R == 0)
            S += I;
    }

    cout << "\nA soma de todos os valores pares existentes na faixa numerica de 1 a 50 e: " << S << endl;

    return 0;
}
