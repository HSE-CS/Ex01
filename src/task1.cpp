#include <iostream>

unsigned int getPrime(unsigned int n) {
    int* a = new int[2000];
    int number = 0;
    for (int i = 0; i < 2000; i++)
    {
        a[i] = i;
    }
    a[1] = 0;
    for (int p = 2; p < 2000; p++)
    {
        if (a[p] != 0)
        {
            for (int j = p * p; j < 2000; j += p) {//обнуляем все числа, кратные данному
                a[j] = 0;
            }
        }
    }
    for (int i = 0; i < 2000 && n > 0; i++) {
        if (a[i] != 0) {
            n--;
            number = a[i];
        }
    }
    return number;
}
