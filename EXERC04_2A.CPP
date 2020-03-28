#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int I = 15, Q;

    do
    {
        Q = pow(I,2);
        cout << "O quadrado do numero " << I << " e: " << Q << endl;
        I++;
    }
    while (I <= 200);

    return 0;
}
