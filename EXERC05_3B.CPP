#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

void prestacao(float VALOR, float TAXA, float TEMPO, float &PREST);
void pausa(void);

int main(void)
{
    float X, Y, Z, W;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira o valor: "; cin >> X;
    cout << "Insira a taxa : "; cin >> Y;
    cout << "Insira o tempo: "; cin >> Z;
    prestacao(X, Y, Z, W);
    cout << "\nO valor da prestacao em atraso e " << W << endl;
    pausa();
    return 0;
}

void prestacao(float VALOR, float TAXA, float TEMPO, float &PREST)
{
    PREST = VALOR + (VALOR * (TAXA/100) * TEMPO);
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
