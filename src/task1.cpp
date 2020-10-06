#include <iostream>
#include "task1.h"


unsigned int getPrime(unsigned int n) {
    int size = n;
    int *prime = new int[n];
    int *num = new int[size];
    for (int i = 0; i < size; i++)
        num[i] = i;
    prime[0] = 2;
    int i = 0;
    while (i < n) {
        int p = prime[i++];
        for (int j = p * 2; j < size; j += p)
            num[j] = 0;
        while (num[p + 1] == 0)
            p++;
        if (p + 1 >= size) {
            int *tmp = new int[size * 2];
            for (int k = 0; k < size; k++)
                tmp[k] = num[k];
            delete[] num;
            size *= 2;
            num = tmp;
            for (int j = size / 2; j < size; j++)
                num[j] = j;
            i = 0;
        } else
            prime[i] = p + 1;
    }
    return prime[n-1];
}