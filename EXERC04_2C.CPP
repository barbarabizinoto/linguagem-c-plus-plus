#include <iostream>
using namespace std;

int main(void)
{
    int I = 0, R;

    do
    {
        R = I % 2;
        if (R != 0)
            cout << I << endl;
        I++;
    }
    while (I <= 20);

    return 0;
}
