#include "task1.h"

static int simple(unsigned int n){
    for(unsigned int i = 2; i <= n/2; i++)
        if((n%i) == 0)
            return 0;
return 1;
}

unsigned int getPrime(unsigned int n){
    unsigned int challenger = 2;
    int count = 0;
    while (count != n){
        if (simple(challenger)){
            count++;
        }
        challenger++;
    }
    return challenger-1;
}
