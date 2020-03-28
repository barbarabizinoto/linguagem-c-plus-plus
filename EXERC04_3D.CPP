#include <iostream>
using namespace std;

int main(void)
{
    int I, R;

    for (I = 1; I <= 30; I++)
    {
        R = I % 4;
        if (R == 0)
            cout << I << endl;
    }

    return 0;
}
