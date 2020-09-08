#include <iostream>
#include "task1.h"
using namespace std;

unsigned int getPrime(unsigned int n)
{
	int prime = 0, count = 1, cur = 2;
	while (count <= n)
	{
		if (isPrime(cur) == 1)
		{
			prime = cur;
			count++;
		}
		cur++;
	}
	return prime;
}
static unsigned int isPrime(unsigned int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if ((n % i) == 0)
			return 0;
	}
	return 1;
}