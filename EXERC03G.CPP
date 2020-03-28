#include <iostream>
using namespace std;

int main(void)
{
    int N;

    cout << "Insira um valor inteiro: "; cin >> N;

    if (N >= 1 and N <= 9)
        cout << "\nO valor esta na faixa permitida." << endl;
    else
        cout << "\nO valor esta fora da faixa permitida." << endl;

    return 0;
}
