#include <iostream>
using namespace std;

unsigned int getPrime(unsigned int n) {
    int* a = new int[n + 200];
    int number = 0;
    for (int i = 0; i < n + 200; i++)
        a[i] = i;
    for (int p = 2; p < n + 200; p++)
    {
        if (a[p] != 0)
        {
            for (int j = p * p; j < n + 200; j += p)
                a[j] = 0;
        }
    }
    for (int i = 0; n > 0; i++) {
        if (a[i] != 0) {
            n--;
            number = a[i];
        }
    }
    return number;
}
