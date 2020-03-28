#include <iostream>
using namespace std;

int main(void)
{
    int FAT = 1, I = 1, N;

    cout << "Insira um numero: "; cin >> N;

    do
    {
        FAT *= I;
        I++;
    }
    while (I <= N);

        cout << "\nFatorial de " << N << " e: " << FAT << endl;

    return 0;
}
