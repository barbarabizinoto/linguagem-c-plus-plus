#include <iostream>
using namespace std;

int main(void)
{
    int I, R;

    for (I = 0; I <= 20; I++)
    {
        R = I % 2;
        if (R != 0)
            cout << I << endl;
    }

    return 0;
}
