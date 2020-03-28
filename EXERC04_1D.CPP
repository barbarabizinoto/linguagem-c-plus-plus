#include <iostream>
using namespace std;

int main(void)
{
    int I = 1, R;

    while (I <= 30)
    {
        R = I % 4;
        if (R == 0)
            cout << I << endl;
        I++;
    }

    return 0;
}
