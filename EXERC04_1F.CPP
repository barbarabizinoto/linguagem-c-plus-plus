#include <iostream>
using namespace std;

int main(void)
{
    int FAT = 1, I = 1, N;

    cout << "Insira um numero: "; cin >> N;

    while (I <= N)
    {
        FAT *= I;
        I++;
    }

        cout << "\nFatorial de " << N << " e: " << FAT << endl;

    return 0;
}
