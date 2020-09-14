#include "task1.h"

unsigned int getPrime(unsigned int n)
{
	const int SIZE = 100 * 1000;
	const int N = 9500;

	int a[SIZE];
	for (int i = 2; i < SIZE; ++i)
		a[i] = 1;

	int k = 1;
	int p = 2;
	while (k < n) {
		for (int i = 2 * p; i < SIZE; i += p)
			a[i] = 0;
		for (int i = p + 1; i < SIZE; ++i)
			if (a[i] == 1) {
				p = i;
				break;
			}
		++k;
	}
	return p;
}