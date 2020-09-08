#include "task1.h"
#include <iostream>

using namespace std;

unsigned int getPrime(unsigned int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
	{
		n--;
		int k = 2;
		while (n != 0)
		{
			k++;
			bool isPrime = true;
			for (int i = 2; i < k; i++)
			{
				if (k % i == 0)
					isPrime = false;
			}
			if (isPrime)
				n--;
		}
		return k;
	}
}