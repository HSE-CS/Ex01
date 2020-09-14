#include "task1.h"

unsigned int getPrime(unsigned int n) {
    int count = 0;
    unsigned int i = 2;
    while(count != n) {
        if(IsPrime(i)) {
            count++;
        }
        i++;
    }
    return i-1;
}

bool IsPrime(unsigned int a) {
    for(unsigned int i = 2; i < a; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}