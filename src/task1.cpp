#include "task1.h"
unsigned int getPrime(unsigned int number) {
    unsigned int iter = 2,numberOfPrimes = 0;
    bool isSimple = true;
    while (numberOfPrimes != number) {
        isSimple = true;

        for (int i = 2; i <iter/2+1; i++) {

            if (iter % i == 0) {
                isSimple = false;
                break;
            }
        }
        if (isSimple) {
            iter++;
            numberOfPrimes++;
        } else {
            iter++;
        }

    }
    return iter-1;
}
