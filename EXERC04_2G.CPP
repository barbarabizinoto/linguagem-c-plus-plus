#include <iostream>
using namespace std;

int main(void)
{
    int B, E, P = 1, I = 1;

    cout << "Insira um valor para a base: "; cin >> B;
    cout << "Insira um valor para o expoente: "; cin >> E;

    do
    {
        P *= B;
        I++;
    }
    while (I <= E);

    cout << "\nA potencia de " << B << " elevado a " << E << " e: " << P << endl;

    return 0;
}
