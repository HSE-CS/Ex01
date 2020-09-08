#include <iostream>
#include "task1.h"

int main() {
    unsigned int num;
    std::cout << "Enter the Number to check Prime: ";
    std::cin >> num;

    std::cout << getPrime(num);

    return 0;
}