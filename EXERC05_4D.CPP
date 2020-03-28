#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

float conversao(float C);
void pausa(void);

int main(void)
{
    float X;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira a temperatura em graus Celsius: "; cin >> X;
    cout << "\nA temperatura em graus Fahrenheit e: " << conversao(X) << endl;
    pausa();
    return 0;
}

float conversao(float C)
{
    float F;
    F = (9 * C + 160) / 5;
    return F;
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
