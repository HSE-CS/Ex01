#include "task1.h"
#include <math.h>

bool checkPrime(unsigned int value)
{
    if (value > 2) {
        for (int i = 2; i <= sqrt(value); i++)
            if (value % i == 0)
                return false;
        return true;
    }
    else{
        if (value == 1 || value == 2 ) return true;
        else return false;
    }
}

unsigned int getPrime(unsigned int n)
{
    if (n == 1) return 2;
    if (n == 2) return 3;
    int pos = 0;
    for (int i = 1; i < n*n; i++) {

        if(checkPrime(i)) {
            pos++;
        }
        if(pos == n+1) return i;
    }
}