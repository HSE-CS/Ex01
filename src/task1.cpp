#include "task1.h"
#include <cmath>

int check(unsigned int n)
{
	if (n == 1)
		return 0;
	for (int i = 2; i < n - 1; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

unsigned int getNext(unsigned int n)
{
	do
		n++;
	while (!check(n));
	return n;
}

unsigned int getPrime(unsigned int n)
{
	if (n == 1)
		return 2;
	int prime = 2;
	for (int i = 1; i < n; i++)
		prime = getNext(prime);
	return prime;
}