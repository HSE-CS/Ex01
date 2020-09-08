#include <iostream>
#include "task1.h"

int main() {
    unsigned int n;
    std::cout << "Введите порядковый номер простого числа, которое вам нужно" << std::endl;
    std::cin >> n;
    std::cout << "Правльное число №" << n << ":" << getPrime(n + 1);
}