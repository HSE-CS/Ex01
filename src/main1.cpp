#include <iostream>
#include "task1.h"

int main() {
	unsigned int n;
	std::cout << "Enter the Number to check Prime: ";
	std::cin >> n;

	std::cout << getPrime(n);

	return 0;
}