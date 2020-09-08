#include "task1.h"

unsigned int getPrime(unsigned int n) {
    unsigned int result = 1, i = 0;
    while (i != n) {
        int r = 0;
        for (int j = 2; j < result; j++) {
            if (result % j == 0)
                r++;
        }
        if (r == 0) {
            i++;
            cout << result;
            result++;
        }
        else {
            result++;
        }
    }
    return result;
}
