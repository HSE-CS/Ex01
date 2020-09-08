#include "task1.h"

unsigned int isPrime(unsigned int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

unsigned int getPrime(unsigned int n)
{
	int order = 0;
	unsigned int i = 1;
	while (order != n)
	{
		i++;
		if (isPrime(i))
			order++;
	}
	return i;
}