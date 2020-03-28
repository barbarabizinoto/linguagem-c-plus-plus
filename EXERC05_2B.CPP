#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

void prestacao(float VALOR, float TAXA, float TEMPO);
void pausa(void);

int main(void)
{
    float X, Y, Z;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira o valor: "; cin >> X;
    cout << "Insira a taxa : "; cin >> Y;
    cout << "Insira o tempo: "; cin >> Z;
    prestacao(X, Y, Z);
    pausa();
    return 0;
}

void prestacao(float VALOR, float TAXA, float TEMPO)
{
    float PREST;
    PREST = VALOR + (VALOR * (TAXA/100) * TEMPO);
    cout << "\nO valor da prestacao em atraso e " << PREST << endl;
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
