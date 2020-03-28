#include <iostream>
#include <cctype>
using namespace std;

int S = 0, N, I;
char LETRA;

void somatorio(void);
void pausa(void);

int main(void)
{
    cout << "Digite o ultimo numero a ser somado: "; cin >> N;
    somatorio();
    pausa();
    return 0;
}

void somatorio(void)
{
    for (I = 1; I <= N; I++)
        S += I;
    cout << "O somatorio dos " << N << " primeiros numeros inteiros e = " << S << endl;
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
