#include "task1.h"
#define MAX_SIZE 100000

static unsigned int isPrime(unsigned int n)
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
	while (order != n && i < MAX_SIZE)
	{
		i++;
		if (isPrime(i))
			order++;
	}
	return i;
}