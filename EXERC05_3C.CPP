#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

void potencia(int B, int E, int &P);
void pausa(void);

int main(void)
{
    int X, Y, Z;
    cout << "Insira um valor para a base: "; cin >> X;
    cout << "Insira um valor para o expoente: "; cin >> Y;
    potencia(X, Y, Z);
    cout << "\nA potencia da base " << X << " elevado ao expoente " << Y << " e igual a " << Z << endl;
    pausa();
    return 0;
}

void potencia(int B, int E, int &P)
{
    P = pow(B, E);
    return;
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
