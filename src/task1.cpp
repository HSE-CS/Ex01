#include "task1.h"

unsigned int getPrime(unsigned int n) {
    int k = 2;
    int num = 0;
    int del = 0;
    int z = 1;
    while (1 < 2) {
        for (int j = 2; j <= k - 1; j++) {
            del = k % j;
            if (del == 0) {
                z = 0;
                break;
            }
        }
        if (z == 1) {
            num++;
        }
        z = 1;
        if (num == n) {
            return k;
            break;
        }
        k++;
    }
}