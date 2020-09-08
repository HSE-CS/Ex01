#include<iostream>
//#include <iomanip>
#include "task1.h"
using namespace std;
int getPrime(unsigned int n) {
    int i, j;
    int a = 0;
    for (i = 2;; i++) {

        for (j = 2; j * j <= i; j++)
            if ((i % j) == 0) break;

        if (j * j > i) {
            a++;
            if (a == n) {
                return i;
                break;
            }
        }
    }
}