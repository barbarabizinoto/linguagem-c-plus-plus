#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float C, F;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    cout << "Insira a temperatura em graus Celsius: "; cin >> C;
    F = (9 * C + 160) / 5;
    cout << "Temperatura em graus Fahrenheit .....: " << F << endl;

    return 0;
}
