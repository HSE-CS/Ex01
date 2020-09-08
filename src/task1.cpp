//
// Created by stoja on 08.09.2020.
//
#include "iostream"
using namespace std;
unsigned int getPrime(unsigned int n){
    int  j, a;
    a = 0;
    for (int p = 2;; p++) {
        for (j = 2; j * j <= p; j++)
            if ((p % j) == 0) break;
        if (j * j > p) {
            a++;
            if (a == n) {
                return p;
                break;
            }
        }

    }

}