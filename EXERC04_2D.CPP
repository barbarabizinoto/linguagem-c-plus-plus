#include <iostream>
using namespace std;

int main(void)
{
    int I = 1, R;

    do
    {
        R = I % 4;
        if (R == 0)
            cout << I << endl;
        I++;
    }
    while (I <= 30);

    return 0;
}
