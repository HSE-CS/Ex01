#include <cmath>

unsigned int getPrime(unsigned int n){
    int res = 2;

    for (int count = 2; count <= n; count++) {
        int temp = res + 1;
        int exit = 0;
        int i = 2;

        while (exit == 0) {
            if (temp % i == 0 && i != temp) {
                temp++;
                i = 2;
                continue;
            }

            if ((i == temp) || (i > sqrt(temp))) {
                exit = 1;
            }

            i++;
        }

        res = temp;
    }

    return res;
}