#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

void convercao(float F, float &C);
void pausa(void);

int main(void)
{
    float X, Y;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira a temperatura em graus Fahrenheit: "; cin >> X;
    convercao(X, Y);
    cout << "\nA temperatura em graus Celsius e: " << Y << endl;
    pausa();
    return 0;
}

void convercao(float F, float &C)
{
    C = (F - 32) * 5 / 9;
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
