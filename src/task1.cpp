#include<iostream>
#include <iomanip>
#include "task1.h"
using namespace std;
int getPrime(unsigned int n) {
    int j,k;
    int a = 0;
    for (j = 2;; j++) {
        for (k = 2; k * k <= j; k++)
            if ((j % k) == 0) break;
        if (k * k > j) {
            a++;
            if (a == n) {
                return j;
                break;
            }
        }

    }
}