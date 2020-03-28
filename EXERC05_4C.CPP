#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

int potencia(int B, int E);
void pausa(void);

int main(void)
{
    int X, Y;
    cout << "Insira o valor da base: "; cin >> X;
    cout << "Insira o valor do expoente: "; cin >> Y;
    cout << "\nA potencia da base " << X << " elevado ao expoente " << Y << " e igual a " << potencia(X, Y) << endl;
    pausa();
    return 0;
}

int potencia(int B, int E)
{
    int P;
    P = pow(B,E);
    return P;
}

void pausa(void)
{
    char LETRA;
    cout << "\nTecle <S> + <ENTER> para sair do programa: ";
    do
    {
        LETRA = cin.get();
        LETRA = toupper(LETRA);
    }
    while (LETRA != 'S');
    return;
}
