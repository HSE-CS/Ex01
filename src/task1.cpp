#include "task1.h"

unsigned int getPrime(unsigned int n)
{
	int nums = 0;
	int status = 0;
	for (int i = 2; i < 999; i++) {
		status = testNumber(i);
		if (status == 1) ++nums;
		if (nums == n)
		{
			n = i;
			break;
		}
	}
	return n;
}

int testNumber(int num)
{
	int x = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0) ++x;
	}

	if (x == 2) return 1; // true
	else if (x >= 2) return 0;
}