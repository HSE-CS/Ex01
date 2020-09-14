#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main() {
    int n = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d", getPrime(n));
        /*n = input("n=")
        # создаем пустой список для хранения простых чисел
        lst = []
        # в k будем хранить количество делителей
        k = 0
        # пробегаем все числа от 2 до N
        for i in xrange(2, n + 1) :
            # пробегаем все числа от 2 до текущего
            for j in xrange(2, i) :
                # ищем количество делителей
                if i% j == 0:
    k = k + 1
        # если делителей нет, добавляем число в список
        if k == 0:
    lst.append(i)
        else:
    k = 0
        # выводим на экран список
        print lst*/

	return 0;
}