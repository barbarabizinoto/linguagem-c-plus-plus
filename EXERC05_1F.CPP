#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

char LETRA;
float COMPRIMENTO, LARGURA, ALTURA, VOLUME;

void volume(void);
void pausa(void);

int main(void)
{
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira o valor do comprimento: "; cin >> COMPRIMENTO;
    cout << "Insira o valor da largura    : "; cin >> LARGURA;
    cout << "Insira o valor da altura     : "; cin >> ALTURA;
    volume();
    pausa();
    return 0;
}

void volume(void)
{
    VOLUME = COMPRIMENTO * LARGURA * ALTURA;
    cout << "\nO volume e: " << VOLUME << endl;
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
