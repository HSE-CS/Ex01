#include <iostream>
#include "test1.h"

int main() {

	unsigned int n;
	std::cout << "Enter number of prime number: ";
	std::cin >> n;
	getPrime(n);
	return 0;
}