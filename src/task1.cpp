#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
unsigned int getPrime(unsigned int n)
{
    int size = n;
    int* primes = (int*)malloc(n * sizeof(int));
    int* numbers = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        numbers[i] = i;

    primes[0] = 2; 
    int i = 0; 

    while (i < n) {
        int p = primes[i++]; 

        for (int j = p * 2; j < size; j += p)
            numbers[j] = 0; 

        while (numbers[p + 1] == 0)
            p++; 

        if (p + 1 >= size) { 
            int* tmp = (int*)malloc(size * 2 * sizeof(int));
            for (int k = 0; k < size; k++)
                tmp[k] = numbers[k];

            free(numbers);

            size *= 2;
            numbers = tmp;

            for (int j = size / 2; j < size; j++)
                numbers[j] = j; 

            i = 0; 
        }
        else
            primes[i] = p + 1; 
    }
    return(primes[n - 1]);
    free(numbers);
    free(primes);
}