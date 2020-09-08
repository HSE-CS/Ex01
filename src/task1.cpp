#include <iostream>
#include "task1.h"

using namespace std;

unsigned int getPrime(unsigned int n)
{
	unsigned int prime_number = 1;
	
	while (n != 0)
	{
		prime_number = getNextPrime(prime_number);
		n--;
	}
	return prime_number;
}

int checkPrime(unsigned int n)
{
	if (n == 1 || n == 0)
	{
		return 0;
	}

	for (unsigned int i = n - 1; i > 1; i--)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

unsigned int getNextPrime(unsigned int n)
{
	n++;
	while (!checkPrime(n++));

	return --n;
}