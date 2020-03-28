#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float V, R, A;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    cout << "Insira o valor do raio do galao .: "; cin >> R;
    cout << "Insira o valor da altura do galao: "; cin >> A;
    V = 3.141592653589793 * R * R * A;
    cout << endl;
    cout << "O volume do galao e .............: " << V << endl;

    return 0;
}
