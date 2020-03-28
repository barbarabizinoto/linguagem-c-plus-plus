#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

void temperatura(float F);
void pausa(void);

int main(void)
{
    float X;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira a temperatura em graus Fahrenheit: "; cin >> X;
    temperatura(X);
    pausa();
    return 0;
}

void temperatura(float F)
{
    float C;
    C = (F - 32) * 5 / 9;
    cout << "A temperatura em graus Celsius e: " << C << endl;
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
