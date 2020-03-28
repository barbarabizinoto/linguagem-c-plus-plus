#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

void volume(float COMPRIMENTO, float LARGURA, float ALTURA, float &VOLUME);
void pausa(void);

int main(void)
{
    float X, Y, Z, W;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira o comprimento: "; cin >> X;
    cout << "Insira o largura: "; cin >> Y;
    cout << "Insira o altura: "; cin >> Z;
    volume(X, Y, Z, W);
    cout << "\nO volume e: " << W << endl;
    pausa();
    return 0;
}

void volume(float COMPRIMENTO, float LARGURA, float ALTURA, float &VOLUME)
{
    VOLUME = COMPRIMENTO * LARGURA * ALTURA;
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
