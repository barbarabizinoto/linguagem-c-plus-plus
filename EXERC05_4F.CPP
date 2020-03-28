#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

float volume(float COMPRIMENTO, float LARGURA, float ALTURA);
void pausa(void);

int main(void)
{
    float X, Y, Z;
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << "Insira o valor do comprimento: "; cin >> X;
    cout << "Insira o valor da largura: "; cin >> Y;
    cout << "Insira o valor da altura: "; cin >> Z;
    cout << "\nO volume e " << volume(X, Y, Z) << endl;
    pausa();
    return 0;
}

float volume(float COMPRIMENTO, float LARGURA, float ALTURA)
{
    float VOLUME;
    VOLUME = COMPRIMENTO * LARGURA * ALTURA;
    return VOLUME;
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
