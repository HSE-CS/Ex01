#include <iostream>

unsigned int getPrime(unsigned int n) {
    int* a = new int[10000];
    int number = 0;
    for (int i = 0; i < 10000; i++)
    {
        a[i] = i;
    }
    a[1] = 0;
    for (int p = 2; p < 10000; p++)
    {
        if (a[p] != 0)
        {
            for (int j = p * p; j < 10000; j += p) {//обнуляем все числа, кратные данному
                a[j] = 0;
            }
        }
    }
    for (int i = 0; i < 10000 && n > 0; i++) {
        if (a[i] != 0) {
            n--;
            number = a[i];
        }
    }
    return number;
}
