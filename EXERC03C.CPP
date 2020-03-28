#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float N1, N2, N3, N4, MD;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    cout << "Insira o valor de <N1>: "; cin >> N1;
    cout << "Insira o valor de <N2>: "; cin >> N2;
    cout << "Insira o valor de <N3>: "; cin >> N3;
    cout << "Insira o valor de <N4>: "; cin >> N4;
    MD = (N1 + N2 + N3 + N4) / 4;

    if (MD >= 5)
        cout << "\nAluno aprovado com media: " << MD << endl;
    else
        cout << "\nAluno reprovado com media: " << MD << endl;

    return 0;
}
