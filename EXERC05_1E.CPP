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
    cout << "Insira a temperatura em graus Fahrenheit: "; cin >> F;
    temperatura();
    pausa();
    return 0;
}

void temperatura(void)
{
    C = (F - 32) * 5 / 9;
    cout << "A temperatura em graus Celsius e: " << C << endl;
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
