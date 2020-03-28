#include <iostream>
using namespace std;

int main(void)
{
    int I = 0, R;

    while (I <= 20)
    {
        R = I % 2;
        if (R != 0)
            cout << I << endl;
        I++;
    }

    return 0;
}
