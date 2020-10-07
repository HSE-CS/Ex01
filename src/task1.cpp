#include "task1.h"

unsigned int getPrime(unsigned int n) {
    int m = 2;
    int number = 0;
    int d = 0;
    int z = 1;
    while (1 < 2) {
        for (int i = 2; i <= m - 1; i++) {
            d = m % i;
            if (d == 0) {
                z = 0;
                break;
            }
        }
        if (z == 1) {
            number++;
        }
        z = 1;
        if (number == n) {
            return m;
            break;
        }
        m++;
    }
}