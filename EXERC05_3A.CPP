#include <iostream>
#include <cctype>
using namespace std;

void somatorio(int N, int &S);
void pausa(void);

int main(void)
{
    int X, Y;
    cout << "Insira o ultimo valor a ser somado: "; cin >> X;
    somatorio(X, Y);
    cout << "O somatorio dos " << X << " primeiros numeros inteiros e " << Y << endl;
    pausa();
    return 0;
}

void somatorio(int N, int &S)
{
    int I;
    S = 0;
    for (I = 1; I <= N; I++)
        S += I;
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
