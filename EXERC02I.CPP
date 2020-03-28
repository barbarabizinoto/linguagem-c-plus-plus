#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float P, D, R;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    cout << "Insira o valor do raio da esfera ....: "; cin >> R;
    cout << "Insira o valor da densidade da esfera: "; cin >> D;
    P = (D * 4 * 3.141592653589793 * R * R * R) / 3;
    cout << endl;
    cout << "O peso da esfera e ..................: " << P << endl;

    return 0;
}
