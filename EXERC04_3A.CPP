#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int I, Q;

    for (I = 15; I <= 200; I++)
    {
        Q = pow(I,2);
        cout << "O quadrado do numero " << I << " e: " << Q << endl;
    }

    return 0;
}
