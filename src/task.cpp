#include <iostream>
using namespace std;

int main()
{
    int i, j, a, N;

    for (int i = 0; i < 105; i++)
    {
        a = 0;

        for (int j = 1; j <= i; j++)
        {
            if ((i % j) == 0)
            {
                a += j;
            }
        }

        if (a - 1 == i)
        {
            cout << i << endl;
        }
    }
    system("Pause");

    return 0;
}
