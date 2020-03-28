#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

float C, F;
char LETRA;

void temperatura(void);
void pausa(void);

int main(void)
{
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira a temperatura em graus Celsius: "; cin >> C;
    temperatura();
    pausa();
    return 0;
}

void temperatura(void)
{
    F = (9 * C + 160) / 5;
    cout << "\nA temperatura em graus Fahrenheit e: " << F << endl;
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
