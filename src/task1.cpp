#include "task1.h"
#include <cmath>


unsigned int simple(unsigned int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}



unsigned int getPrime(unsigned int n) {
    unsigned int c = 0, k = 0;
    while (true) {
        if (c < n) {
            if (simple(k++)) {
                c++;
            }
        }
        else {
            break;
        }
    }
    return --k;
}