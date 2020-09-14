#include "task1.h"

unsigned int GetPrime(unsigned int n) {
    int count = 0;
    int i = 2;
    while(count != n) {
        if(IsPrime(i)) {
            count++;
        }
        i++;
    }
    return i-1;
}

bool IsPrime(long int a) {
    for(long int i = 2; i < a; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}