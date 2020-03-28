#include <iostream>
using namespace std;

int main(void)
{
    int FAT = 1, I, N;

    cout << "Insira um numero: "; cin >> N;

    for (I = 1; I <= N; I++)
        FAT *= I;

        cout << "\nFatorial de " << N << " e: " << FAT << endl;

    return 0;
}
