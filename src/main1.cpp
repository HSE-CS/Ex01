#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include "task1.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    puts("Введите n-ое простое число, которое нужно напечатоть:  ");
    unsigned int n;
    scanf("%u", &n);
    unsigned int a;
    a = getPrime(n);
    printf("\n%u\n", a);
}