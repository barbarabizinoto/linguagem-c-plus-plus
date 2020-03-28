#include <iostream>
using namespace std;

int main(void)
{
    int N, R;

    cout << "Insira um valor para <N>: "; cin >> N;

    if (N > 0)
        R = N;
    else
        R = N * (-1);

    cout << "\nO valor lido e: " << R << endl;

    return 0;
}
