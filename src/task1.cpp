#include <vector>
#include <iostream>
#include "task1.h"

using namespace std;
const int MAX = 3571;

unsigned int getPrime(unsigned int n) {
    vector<bool> tmp(MAX, true);
    int count = 1;
    for (int i = 2; i < MAX; i++) {
        if (tmp[i]) {
            if (count == n)
                return i;
            count++;
            for (int j = 2 * i; j < MAX; j += i)
                tmp[j] = false;
        }
    }
    return 0;
}
