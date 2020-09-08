/**
 *   Created by Stanislav on 9/8/20.
 */
#include "task1.h"

unsigned int getPrime(unsigned int n) {
    //checking to a zero
    if (n == 0) return 2;

    //последнее число
    unsigned int k = 2;

    //ищём n-ное простое число
    again:
    while (n != 0) {
        k++;
        for (int i = 2; i < k; ++i) if (k % i == 0) goto again;
        n--;
    }
    return k;
}
