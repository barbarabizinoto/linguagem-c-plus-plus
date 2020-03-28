#include <iostream>
using namespace std;

int main(void)
{
    int B, E, P = 1, I;

    cout << "Insira um valor para a base: "; cin >> B;
    cout << "Insira um valor para o expoente: "; cin >> E;

    for (I = 1; I <= E; I++)
        P *= B;

    cout << "\nA potencia de " << B << " elevado a " << E << " e: " << P << endl;

    return 0;
}
