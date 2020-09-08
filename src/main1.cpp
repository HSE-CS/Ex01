#include <iostream>
#include "task1.h"

int main()
{
    int n;
    std::cout<< "Input N: ";
    std::cin >> n;
    int p = getPrime(n);
    std::cout << p;
    return 0;
}
