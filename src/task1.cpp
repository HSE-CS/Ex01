//
// Created by Nikita on 08.09.2020.
//

#include "task1.h"

using namespace std;

unsigned int getPrime(unsigned int n) {
    int a, b;
    b = 0;
    for (int i = 2;; i++) {
        for (a = 2; a * a <= i; a++)
            if ((i % a) == 0) break;
        if (a * a > i) {
            b++;
            if (b == n) {
                return i;
            }
        }
    }
}