#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    cout << "Insira o tempo gasto na viagem: "; cin >> TEMPO;
    cout << "Insira a velocidade media ....: "; cin >> VELOCIDADE;
    DISTANCIA = TEMPO * VELOCIDADE;
    LITROS_USADOS = DISTANCIA / 12;
    cout << "\n";
    cout << "Velocidade media .......................: " << setw(8) << VELOCIDADE << endl;
    cout << "Tempo gasto ............................: " << setw(8) << TEMPO << endl;
    cout << "Distancia percorrida ...................: " << setw(8) << DISTANCIA << endl;
    cout << "Quantidade de litros utilizada na viagem: " << setw(8) << LITROS_USADOS << endl;

    return 0;
}
