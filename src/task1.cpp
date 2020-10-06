#include "../include/task1.h"

bool isPrime(unsigned int a)
{
	if (n <= 1) return false;
	for (unsigned int i = 2; i < n; ++i)
		if (n % i == 0) return false;
	return true;
}

unsigned int getPrime(unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	while (j != n)
	{
		++i;
		if (isPrime(i))
			++j;
	}
	return i;
}