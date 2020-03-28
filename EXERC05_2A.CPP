#include <iostream>
#include <cctype>
using namespace std;

void somatorio(int N);
void pausa(void);

int main(void)
{
    int X;
    cout << "Digite o ultimo numero a ser somado: "; cin >> X;
    somatorio(X);
    pausa();
    return 0;
}

void somatorio(int N)
{
    int I, S = 0;
    for (I = 1; I <= N; I++)
        S += I;
    cout << "O somatorio dos " << N << " primeiros numeros inteiros e = " << S << endl;
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
