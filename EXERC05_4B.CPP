#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

float prestacao(float VALOR, float TAXA, float TEMPO);
void pausa(void);

int main(void)
{
    float X, Y, Z;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira o valor: "; cin >> X;
    cout << "Insira a taxa: "; cin >> Y;
    cout << "Insira o tempo: "; cin >> Z;
    cout << "\nO valor da prestacao em atraso e " << prestacao(X, Y, Z) << endl;
    pausa();
    return 0;
}

float prestacao(float VALOR, float TAXA, float TEMPO)
{
    float PREST;
    PREST = VALOR + (VALOR * (TAXA/100) * TEMPO);
    return PREST;
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
