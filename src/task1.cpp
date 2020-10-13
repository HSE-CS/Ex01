
#include "task1.h"
#include <iostream>
using namespace std;

unsigned int getPrime(unsigned int n) {
    unsigned int count = {0};
    bool found = false;
    unsigned int num = {0};
    unsigned int k = {2};
    while(!found) {
        int dels = 0;
        for(unsigned int i = {2}; i < k; i++) if(0 == k % i) dels++;
        if(0 == dels) {
            count++;
            if(count == n) {
                found = true;
                num = k;
                break;
            }
        }
        k++;
    }
    return num;
}
