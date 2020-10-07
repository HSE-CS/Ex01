#include <iostream>
#include "task1.h"

int main() {
    unsigned int n;
    std::cout << "Enter number" << std::endl;
    std::cin >> n;
    std::cout << getPrime(n + 1);
}