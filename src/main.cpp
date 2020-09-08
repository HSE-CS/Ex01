#include "iostream"
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	unsigned int n = 0;
	std::cin >> n;
	getPrime(n);
	std::cout << n;
}