#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

void convercao(float C, float &F);
void pausa(void);

int main(void)
{
    float X, Y;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira a temperatura em graus Celsius: "; cin >> X;
    convercao(X, Y);
    cout << "\nA temperatura em graus Fahrenheit e: " << Y << endl;
    pausa();
    return 0;
}

void convercao(float C, float &F)
{
    F = (9 * C + 160) / 5;
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
