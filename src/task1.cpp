//
// Created by Vadim Makarov on 08.09.2020.
//

#include <iostream>
#include "task1.h"

using namespace std;

unsigned int getPrime(unsigned int n) {

    int pointer = 0;
    int result = 0;

    for (int i = 2;; ++i) {
        bool pr = isPrime(i);
        if (pr) {
            ++pointer;
            result = i;
        }
        if (pointer == n) {
            break;
        }
    }


    return result;
}


bool isPrime(int n) {
    if (n > 1) {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
    } else
        return false;
}