#include "task1.h"
#include <iostream>

int main() {

    int n;

    std::cout << "Enter the index of your prime number: ";
    std::cin >> n;

    int answ = getPrime(n);

    std::cout << "Prime number under index "<< n << " is " << answ << std::endl;

    return 0;
}
