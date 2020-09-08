#include <iostream>
#include "task1.h"

int main() {
    unsigned int n;
    std::cout << "Введите номер правильного числа, которое вам нужно" << std::endl;
    std::cin >> n;
    std::cout << "Правильное число №" << n << ":" << getPrime(n);
}
