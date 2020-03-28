#include <iostream>
#include <cctype>
using namespace std;

int somatorio(int N);
void pausa(void);

int main(void)
{
    int X;
    cout << "Insira o ultimo numero a ser somado: "; cin >> X;
    cout << "\nO somatorio dos " << X << " primeiros numeros inteiros e: " << somatorio(X) << endl;
    pausa();
    return 0;
}

int somatorio(int N)
{
    int I, S = 0;
    for (I = 1; I <= N; I++)
        S += I;
    return S;
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
