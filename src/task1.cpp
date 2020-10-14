#include "task1.h"


unsigned int getPrime(unsigned int n) {
    long k = 0;
    long num = 2;
    while (k < n)
    {
        bool checkPrime = true;
        for (unsigned int i = 2; i < num; ++i) {
            if (num % i == 0) {
                checkPrime = false;
                break;
            } 
        }
        if (checkPrime) {
            ++k;
        }
        ++num;
    }
    return --num;
}
