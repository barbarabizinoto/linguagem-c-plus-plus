#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

int P, B, E;
char LETRA;

void potencia(void);
void pausa(void);

int main(void)
{
    cout << "Insira um valor para a base    : "; cin >> B;
    cout << "Insira um valor para o expoente: "; cin >> E;
    potencia();
    pausa();
    return 0;
}

void potencia(void)
{
    P = pow(B,E);
    cout << "\nA potencia da base " << B << " elevado ao expoente " << E << " e igual a " << P << endl;
    return;
}

void pausa(void)
{
    cout << "\nTecle <S> + <ENTER> para sair do programa: ";
    do
    {
        LETRA = cin.get();
        LETRA = toupper(LETRA);
    }
    while (LETRA != 'S');
    return;
}
