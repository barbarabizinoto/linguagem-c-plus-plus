#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

float PREST, VALOR, TAXA, TEMPO;
char LETRA;

void prestacao(void);
void pausa(void);

int main(void)
{
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira o valor: "; cin >> VALOR;
    cout << "Insira a taxa : "; cin >> TAXA;
    cout << "Insira o tempo: "; cin >> TEMPO;
    prestacao();
    pausa();
    return 0;
}

void prestacao(void)
{
    PREST = VALOR + (VALOR * (TAXA/100) * TEMPO);
    cout << "\nO valor da prestacao em atraso e: " << PREST << endl;
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
