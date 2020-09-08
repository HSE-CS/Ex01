#include <iostream>
#include "task1.h"

int main()
{
    unsigned int n = 1;
    std::cout << "Input a number: ";
    std::cin >> n;
    std::cout << "The answer: " << getPrime(n) << "\n";
}
